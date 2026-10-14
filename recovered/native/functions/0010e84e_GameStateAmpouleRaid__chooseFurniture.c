/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010e84e GameStateAmpouleRaid::chooseFurniture */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0010e878) */
/* WARNING: Removing unreachable block (ram,0x0010e878) */
/* GameStateAmpouleRaid::chooseFurniture(EnemyLayouts::Data const*, int) */

uint __thiscall
GameStateAmpouleRaid::chooseFurniture(GameStateAmpouleRaid *this,Data *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  String *this_00;
  Vector<String> *this_01;
  uint uVar3;
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [6];
  ushort local_22;
  String aSStack_20 [12];
  
  iVar1 = EnemyItems::getData(param_2);
  uVar2 = String::charAt((String *)param_1,0);
  String::String(aSStack_a8);
  switch(uVar2) {
  case 0x41:
    String::String(aSStack_60,(String *)(iVar1 + 0x58));
    String::operator=(aSStack_a8,aSStack_60);
    this_00 = aSStack_60;
    break;
  case 0x42:
    String::String(aSStack_50,(String *)(iVar1 + 0x68));
    String::operator=(aSStack_a8,aSStack_50);
    this_00 = aSStack_50;
    break;
  case 0x43:
    String::String(aSStack_88,(String *)(iVar1 + 0x20));
    String::operator=(aSStack_a8,aSStack_88);
    this_00 = aSStack_88;
    break;
  case 0x44:
    String::String(aSStack_48,(String *)(iVar1 + 0x70));
    String::operator=(aSStack_a8,aSStack_48);
    this_00 = aSStack_48;
    break;
  case 0x45:
    String::String(aSStack_38,(String *)(iVar1 + 0x80));
    String::operator=(aSStack_a8,aSStack_38);
    this_00 = aSStack_38;
    break;
  case 0x46:
    String::String(aSStack_80,(String *)(iVar1 + 0x28));
    String::operator=(aSStack_a8,aSStack_80);
    this_00 = aSStack_80;
    break;
  case 0x47:
    String::String(aSStack_78,(String *)(iVar1 + 0x30));
    String::operator=(aSStack_a8,aSStack_78);
    this_00 = aSStack_78;
    break;
  case 0x48:
    String::String(aSStack_a0,(String *)(iVar1 + 8));
    String::operator=(aSStack_a8,aSStack_a0);
    this_00 = aSStack_a0;
    break;
  case 0x49:
    String::String(aSStack_40,(String *)(iVar1 + 0x78));
    String::operator=(aSStack_a8,aSStack_40);
    this_00 = aSStack_40;
    break;
  default:
    goto switchD_0010e878_caseD_4a;
  case 0x4c:
    String::String(aSStack_68,(String *)(iVar1 + 0x50));
    String::operator=(aSStack_a8,aSStack_68);
    this_00 = aSStack_68;
    break;
  case 0x50:
    String::String(aSStack_58,(String *)(iVar1 + 0x60));
    String::operator=(aSStack_a8,aSStack_58);
    this_00 = aSStack_58;
    break;
  case 0x53:
    String::String(aSStack_90,(String *)(iVar1 + 0x18));
    String::operator=(aSStack_a8,aSStack_90);
    this_00 = aSStack_90;
    break;
  case 0x54:
    String::String(aSStack_98,(String *)(iVar1 + 0x10));
    String::operator=(aSStack_a8,aSStack_98);
    this_00 = aSStack_98;
    break;
  case 0x57:
    String::String(aSStack_70,(String *)(iVar1 + 0x48));
    String::operator=(aSStack_a8,aSStack_70);
    this_00 = aSStack_70;
  }
  String::~String(this_00);
switchD_0010e878_caseD_4a:
  String::String(aSStack_30,aSStack_a8);
  this_01 = (Vector<String> *)StringUtil::splitString(aSStack_30,0x5f);
  String::~String(aSStack_30);
  if (*(int *)(this_01 + 4) == 0) {
    Vector<String>::elementAt((int)aSStack_28);
    uVar3 = (uint)local_22;
    String::~String(aSStack_28);
    if (uVar3 == 0) goto LAB_0010ea34;
  }
  CapcomMath::random(*(int *)(this_01 + 4) + 1);
  Vector<String>::elementAt((int)aSStack_20);
  iVar1 = StringUtil::parseInt(aSStack_20);
  String::~String(aSStack_20);
  Vector<String>::~Vector(this_01);
  operator_delete(this_01);
  uVar3 = *(uint *)(iVar1 * 4 + *(int *)(*(int *)(this + 100) + 0x94));
LAB_0010ea34:
  String::~String(aSStack_a8);
  return uVar3;
}


