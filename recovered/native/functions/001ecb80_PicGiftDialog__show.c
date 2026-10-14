/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ecb80 PicGiftDialog::show */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001ecb96) */
/* WARNING: Removing unreachable block (ram,0x001ecb96) */
/* PicGiftDialog::show(void (*)(void*), void*) */

void __thiscall PicGiftDialog::show(PicGiftDialog *this,_func_void_void_ptr *param_1,void *param_2)

{
  String *pSVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *piVar7;
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  String aSStack_11c [8];
  String aSStack_114 [8];
  String aSStack_10c [8];
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  String aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  puVar5 = *(undefined4 **)(this + 0x70);
  switch(*puVar5) {
  case 4:
    setToxin(this);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_ec,(char *)(DAT_001ecfb8 + 0x1ecdda));
    (*pcVar6)(piVar7,aSStack_ec);
    pSVar1 = aSStack_ec;
    goto LAB_001ece52;
  case 5:
    setToxin(this);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_e4,(char *)(DAT_001ecfbc + 0x1ecdfe));
    (*pcVar6)(piVar7,aSStack_e4);
    pSVar1 = aSStack_e4;
    goto LAB_001ece52;
  case 6:
    setToxin(this);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_dc,(char *)(DAT_001ecfc0 + 0x1ece22));
    (*pcVar6)(piVar7,aSStack_dc);
    pSVar1 = aSStack_dc;
    goto LAB_001ece52;
  case 7:
    setToxin(this);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_d4,(char *)(DAT_001ecfc4 + 0x1ece46));
    (*pcVar6)(piVar7,aSStack_d4);
    pSVar1 = aSStack_d4;
    goto LAB_001ece52;
  case 8:
    setToxin(this);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_f4,(char *)(DAT_001ecfb4 + 0x1ecdb6));
    (*pcVar6)(piVar7,aSStack_f4);
    pSVar1 = aSStack_f4;
LAB_001ece52:
    String::~String(pSVar1);
  default:
    goto switchD_001ecb96_caseD_9;
  case 0xc:
  case 0x11:
  case 0x13:
    setCharacter(this,puVar5[1],puVar5[2],puVar5[3],true);
    StringBuffer::StringBuffer(aSStack_34);
    if (0 < *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x8c) + 0x28)) {
      String::String(aSStack_15c,(char *)(DAT_001ecfa0 + 0x1ecbf6));
      StringBuffer::append(aSStack_34,aSStack_15c);
      String::~String(aSStack_15c);
      String::valueOf((int)aSStack_154);
      StringBuffer::append(aSStack_34,aSStack_154);
      String::~String(aSStack_154);
      String::String(aSStack_14c,(char *)(DAT_001ecfa4 + 0x1ecc2e));
      StringBuffer::append(aSStack_34,aSStack_14c);
      String::~String(aSStack_14c);
    }
    String::String(aSStack_144,(String *)(**(int **)(*(int *)(this + 0xbc) + 0x8c) + DAT_001ecfa8));
    StringBuffer::append(aSStack_34,aSStack_144);
    String::~String(aSStack_144);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_13c);
    String::~String(aSStack_13c);
    break;
  case 0xd:
  case 0x14:
    if (puVar5[3] == 99) {
      setCash2(this);
    }
    else {
      setCash(this);
    }
    StringBuffer::StringBuffer(aSStack_34);
    String::String(aSStack_124,(char *)(DAT_001ecfac + 0x1eccfc));
    StringBuffer::append(aSStack_34,aSStack_124);
    String::~String(aSStack_124);
    String::valueOf((int)aSStack_11c);
    StringBuffer::append(aSStack_34,aSStack_11c);
    String::~String(aSStack_11c);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_114);
    String::~String(aSStack_114);
    break;
  case 0xe:
  case 0x16:
    setXp(this);
    StringBuffer::StringBuffer(aSStack_34);
    String::String(aSStack_10c,(char *)(DAT_001ecfb0 + 0x1ecd58));
    StringBuffer::append(aSStack_34,aSStack_10c);
    String::~String(aSStack_10c);
    String::valueOf((int)aSStack_104);
    StringBuffer::append(aSStack_34,aSStack_104);
    String::~String(aSStack_104);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_fc);
    String::~String(aSStack_fc);
    break;
  case 0xf:
  case 0x18:
    setFood((int)this,puVar5[1]);
    StringBuffer::StringBuffer(aSStack_34);
    Recipe::getFullName((char)&stack0xffffffec + 'x');
    String::operator+(aSStack_94,(char *)aSStack_9c);
    StringBuffer::append(aSStack_34,aSStack_94);
    String::~String(aSStack_94);
    String::~String(aSStack_9c);
    String::valueOf((int)aSStack_8c);
    StringBuffer::append(aSStack_34,aSStack_8c);
    String::~String(aSStack_8c);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_84);
    String::~String(aSStack_84);
    break;
  case 0x10:
  case 0x17:
    setFurniture(this,puVar5[1]);
    StringBuffer::StringBuffer(aSStack_34);
    String::operator+(aSStack_b4,(char *)(*(int *)(*(int *)(this + 0xc0) + 0x38) + 0x2c));
    StringBuffer::append(aSStack_34,aSStack_b4);
    String::~String(aSStack_b4);
    String::valueOf((int)aSStack_ac);
    StringBuffer::append(aSStack_34,aSStack_ac);
    String::~String(aSStack_ac);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_a4);
    String::~String(aSStack_a4);
    break;
  case 0x12:
  case 0x15:
    setToxin(this);
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_cc);
    StringBuffer::append(aSStack_34,aSStack_cc);
    String::~String(aSStack_cc);
    String::String(aSStack_c4,(char *)(DAT_001ecfc8 + 0x1ece84));
    StringBuffer::append(aSStack_34,aSStack_c4);
    String::~String(aSStack_c4);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_bc);
    String::~String(aSStack_bc);
    break;
  case 0x19:
    setCharacter(this,puVar5[1],puVar5[2],puVar5[3],true);
    StringBuffer::StringBuffer(aSStack_34);
    String::String(aSStack_134,(String *)(**(int **)(*(int *)(this + 0xbc) + 0x8c) + DAT_001ecfa8));
    StringBuffer::append(aSStack_34,aSStack_134);
    String::~String(aSStack_134);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_12c);
    String::~String(aSStack_12c);
    break;
  case 0x1a:
    setGatyaTicket(this);
    StringBuffer::StringBuffer(aSStack_34);
    String::String(aSStack_7c,(char *)(DAT_001ed2c4 + 0x1ecfe8));
    StringBuffer::append(aSStack_34,aSStack_7c);
    String::~String(aSStack_7c);
    String::valueOf((int)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
    piVar7 = *(int **)(this + 0x90);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar6)(piVar7,aSStack_6c);
    String::~String(aSStack_6c);
  }
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
switchD_001ecb96_caseD_9:
  String::String(aSStack_64);
  if (*(int *)(this + 0x68) == 1) {
    String::String(aSStack_54,(char *)(DAT_001ed2cc + 0x1ed062));
    String::operator=(aSStack_64,aSStack_54);
    pSVar1 = aSStack_54;
  }
  else if (*(int *)(this + 0x68) == 2) {
    String::String(aSStack_4c,(char *)(DAT_001ed2d0 + 0x1ed078));
    String::operator=(aSStack_64,aSStack_4c);
    pSVar1 = aSStack_4c;
  }
  else {
    String::String(aSStack_5c,(char *)(DAT_001ed2c8 + 0x1ed04c));
    String::operator=(aSStack_64,aSStack_5c);
    pSVar1 = aSStack_5c;
  }
  String::~String(pSVar1);
  piVar7 = *(int **)(this + 0x88);
  pcVar6 = *(code **)(*piVar7 + 0x44);
  String::String(aSStack_44,aSStack_64);
  (*pcVar6)(piVar7,aSStack_44);
  String::~String(aSStack_44);
  String::String((String *)aSStack_34,(String *)(*(int *)(this + 0x70) + 0x10));
  iVar2 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_64,(String *)aSStack_34,*(int *)(DAT_001ed2d4 + iVar2 * 4 + 0x1ed0de));
  piVar7 = *(int **)(this + 0x8c);
  pcVar6 = *(code **)(*piVar7 + 0x44);
  String::String(aSStack_3c,aSStack_64);
  (*pcVar6)(piVar7,aSStack_3c);
  String::~String(aSStack_3c);
  *(undefined1 *)(*(int *)(this + 0x8c) + 0xc4) = 0;
  piVar7 = *(int **)(this + 0x8c);
  pcVar6 = *(code **)(*piVar7 + 0x18);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001ed2d8 + iVar2 * 4 + 0x1ed126));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xa0));
  uVar3 = __fixsfsi();
  __mulsf3(*(undefined4 *)(this + 0xa4),DAT_001ed2dc);
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar7,uVar3,uVar4);
  *(_func_void_void_ptr **)(this + 0xd0) = param_1;
  *(void **)(this + 0xd4) = param_2;
  this[0x14] = (PicGiftDialog)0x1;
  String::~String((String *)aSStack_34);
  String::~String(aSStack_64);
  return;
}


