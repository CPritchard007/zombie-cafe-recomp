/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00180cc4 GameStateRaid::chooseFurniture */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00180d10) */
/* WARNING: Removing unreachable block (ram,0x00180d10) */
/* GameStateRaid::chooseFurniture(EnemyLayouts::Data const*, int) */

void __thiscall GameStateRaid::chooseFurniture(GameStateRaid *this,Data *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  String *this_00;
  Vector<String> *this_01;
  uint uVar3;
  int *piVar4;
  String aSStack_1ac [8];
  String aSStack_1a4 [8];
  String aSStack_19c [8];
  String aSStack_194 [8];
  String aSStack_18c [8];
  String aSStack_184 [8];
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [6];
  ushort local_126;
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00180f94 + 0x180cd0);
  local_1c = *piVar4;
  iVar1 = EnemyItems::getData(param_2);
  uVar2 = String::charAt((String *)param_1,0);
  String::String(aSStack_1ac);
  sprintf(acStack_11c,(char *)(DAT_00180f98 + 0x180cfa),uVar2);
  L_PrintLog((char *)(DAT_00180f9c + 0x180d04),acStack_11c);
  switch(uVar2) {
  case 0x41:
    String::String(aSStack_164,(String *)(iVar1 + 0x58));
    String::operator=(aSStack_1ac,aSStack_164);
    this_00 = aSStack_164;
    break;
  case 0x42:
    String::String(aSStack_154,(String *)(iVar1 + 0x68));
    String::operator=(aSStack_1ac,aSStack_154);
    this_00 = aSStack_154;
    break;
  case 0x43:
    String::String(aSStack_18c,(String *)(iVar1 + 0x20));
    String::operator=(aSStack_1ac,aSStack_18c);
    this_00 = aSStack_18c;
    break;
  case 0x44:
    String::String(aSStack_14c,(String *)(iVar1 + 0x70));
    String::operator=(aSStack_1ac,aSStack_14c);
    this_00 = aSStack_14c;
    break;
  case 0x45:
    String::String(aSStack_13c,(String *)(iVar1 + 0x80));
    String::operator=(aSStack_1ac,aSStack_13c);
    this_00 = aSStack_13c;
    break;
  case 0x46:
    String::String(aSStack_184,(String *)(iVar1 + 0x28));
    String::operator=(aSStack_1ac,aSStack_184);
    this_00 = aSStack_184;
    break;
  case 0x47:
    String::String(aSStack_17c,(String *)(iVar1 + 0x30));
    String::operator=(aSStack_1ac,aSStack_17c);
    this_00 = aSStack_17c;
    break;
  case 0x48:
    String::String(aSStack_1a4,(String *)(iVar1 + 8));
    String::operator=(aSStack_1ac,aSStack_1a4);
    this_00 = aSStack_1a4;
    break;
  case 0x49:
    String::String(aSStack_144,(String *)(iVar1 + 0x78));
    String::operator=(aSStack_1ac,aSStack_144);
    this_00 = aSStack_144;
    break;
  default:
    goto switchD_00180d10_caseD_4a;
  case 0x4c:
    String::String(aSStack_16c,(String *)(iVar1 + 0x50));
    String::operator=(aSStack_1ac,aSStack_16c);
    this_00 = aSStack_16c;
    break;
  case 0x50:
    String::String(aSStack_15c,(String *)(iVar1 + 0x60));
    String::operator=(aSStack_1ac,aSStack_15c);
    this_00 = aSStack_15c;
    break;
  case 0x53:
    String::String(aSStack_194,(String *)(iVar1 + 0x18));
    String::operator=(aSStack_1ac,aSStack_194);
    this_00 = aSStack_194;
    break;
  case 0x54:
    String::String(aSStack_19c,(String *)(iVar1 + 0x10));
    String::operator=(aSStack_1ac,aSStack_19c);
    this_00 = aSStack_19c;
    break;
  case 0x57:
    String::String(aSStack_174,(String *)(iVar1 + 0x48));
    String::operator=(aSStack_1ac,aSStack_174);
    this_00 = aSStack_174;
  }
  String::~String(this_00);
switchD_00180d10_caseD_4a:
  String::String(aSStack_134,aSStack_1ac);
  this_01 = (Vector<String> *)StringUtil::splitString(aSStack_134,0x5f);
  String::~String(aSStack_134);
  if (this_01 == (Vector<String> *)0x0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(this_01 + 4) == 0) {
      Vector<String>::elementAt((int)aSStack_12c);
      uVar3 = (uint)local_126;
      String::~String(aSStack_12c);
      if (uVar3 == 0) goto LAB_00180ef0;
    }
    uVar2 = CapcomMath::random(*(int *)(this_01 + 4) + 1);
    Vector<String>::elementAt((int)aSStack_124);
    iVar1 = StringUtil::parseInt(aSStack_124);
    String::~String(aSStack_124);
    sprintf(acStack_11c,(char *)(DAT_00180fa0 + 0x180ec6),uVar2,iVar1);
    L_PrintLog((char *)(DAT_00180fa4 + 0x180ed2),acStack_11c);
    Vector<String>::~Vector(this_01);
    operator_delete(this_01);
    uVar3 = *(uint *)(iVar1 * 4 + *(int *)(*(int *)(this + 0x78) + 0x94));
  }
LAB_00180ef0:
  String::~String(aSStack_1ac);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


