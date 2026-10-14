/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e6ed8 LotteryDialog::pageMove */

/* LotteryDialog::pageMove(int) */

void __thiscall LotteryDialog::pageMove(LotteryDialog *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  
  this[0x1d0] = (LotteryDialog)0x1;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(int *)(this + 0x1d8) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x1d4) = 1;
    if (*(int *)(this + 0x78) == 0) {
      return;
    }
    (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
    piVar1 = *(int **)(this + 0x78);
    uVar7 = 1;
    pcVar8 = *(code **)(*piVar1 + 0x20);
  }
  else if (param_1 == 1) {
    *(undefined4 *)(this + 0x1d4) = 0;
    iVar9 = *(int *)(this + 0xc);
    uVar7 = __floatsisf(iVar9);
    uVar2 = __mulsf3(uVar7,DAT_001e7228);
    uVar2 = __addsf3(uVar2,uVar7);
    *(undefined4 *)(this + 0xd0) = uVar2;
    uVar2 = __mulsf3(uVar7,DAT_001e722c);
    uVar2 = __addsf3(uVar2,uVar7);
    *(undefined4 *)(this + 0xd4) = uVar2;
    uVar2 = __mulsf3(uVar7,DAT_001e7230);
    uVar2 = __addsf3(uVar2,uVar7);
    *(undefined4 *)(this + 0xd8) = uVar2;
    uVar2 = __mulsf3(uVar7,DAT_001e7234);
    uVar2 = __addsf3(uVar2,uVar7);
    *(undefined4 *)(this + 0xdc) = uVar2;
    uVar2 = __floatsisf(iVar9 << 1);
    uVar3 = __mulsf3(uVar7,DAT_001e7238);
    uVar3 = __addsf3(uVar3,uVar2);
    *(undefined4 *)(this + 0xe0) = uVar3;
    uVar4 = __mulsf3(uVar7,0x3f000000);
    uVar4 = __addsf3(uVar4,uVar2);
    *(undefined4 *)(this + 0xe4) = uVar4;
    uVar7 = __mulsf3(uVar7,DAT_001e723c);
    uVar7 = __addsf3(uVar7,uVar2);
    *(undefined4 *)(this + 0xec) = uVar3;
    *(undefined4 *)(this + 0xe8) = uVar7;
    *(undefined4 *)(this + 0xf4) = uVar7;
    *(undefined4 *)(this + 0xf0) = uVar4;
    (**(code **)(**(int **)(this + 0x1b4) + 0x20))(*(int **)(this + 0x1b4),1);
    (**(code **)(**(int **)(this + 0x1b8) + 0x20))(*(int **)(this + 0x1b8),0);
    (**(code **)(**(int **)(this + 0x1bc) + 0x20))(*(int **)(this + 0x1bc),0);
    if (*(int *)(this + 0x78) == 0) {
      return;
    }
    (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
    piVar1 = *(int **)(this + 0x78);
    pcVar8 = *(code **)(*piVar1 + 0x20);
    uVar7 = 1;
  }
  else {
    if (param_1 == 2) {
      *(undefined4 *)(this + 0x1d4) = 0;
      iVar9 = *(int *)(this + 0xc);
      uVar2 = __floatsisf(iVar9);
      uVar3 = __floatsisf(iVar9 << 1);
      uVar7 = __mulsf3(uVar2,DAT_001e7228);
      uVar7 = __addsf3(uVar7,uVar3);
      *(undefined4 *)(this + 0xd0) = uVar7;
      uVar7 = __mulsf3(uVar2,DAT_001e722c);
      uVar4 = __addsf3(uVar7,uVar3);
      uVar7 = DAT_001e7230;
      *(undefined4 *)(this + 0xd4) = uVar4;
      uVar7 = __mulsf3(uVar2,uVar7);
      uVar4 = __addsf3(uVar7,uVar3);
      uVar7 = DAT_001e7234;
      *(undefined4 *)(this + 0xd8) = uVar4;
      uVar7 = __mulsf3(uVar2,uVar7);
      uVar4 = __addsf3(uVar7,uVar3);
      uVar7 = DAT_001e7238;
      *(undefined4 *)(this + 0xdc) = uVar4;
      uVar4 = __mulsf3(uVar2,uVar7);
      uVar7 = __addsf3(uVar4,uVar2);
      *(undefined4 *)(this + 0xe0) = uVar7;
      uVar5 = __mulsf3(uVar2,0x3f000000);
      uVar6 = __addsf3(uVar5,uVar2);
      uVar7 = DAT_001e723c;
      *(undefined4 *)(this + 0xe4) = uVar6;
      uVar7 = __mulsf3(uVar2,uVar7);
      uVar2 = __addsf3(uVar7,uVar2);
      *(undefined4 *)(this + 0xe8) = uVar2;
      uVar2 = __addsf3(uVar4,uVar3);
      *(undefined4 *)(this + 0xec) = uVar2;
      uVar2 = __addsf3(uVar5,uVar3);
      *(undefined4 *)(this + 0xf0) = uVar2;
      uVar7 = __addsf3(uVar7,uVar3);
      *(undefined4 *)(this + 0xf4) = uVar7;
      (**(code **)(**(int **)(this + 0x1b4) + 0x20))(*(int **)(this + 0x1b4),0);
      (**(code **)(**(int **)(this + 0x1b8) + 0x20))(*(int **)(this + 0x1b8),1);
      piVar1 = *(int **)(this + 0x1bc);
      uVar7 = 0;
      pcVar8 = *(code **)(*piVar1 + 0x20);
    }
    else {
      if (param_1 != 3) {
        if (param_1 != 4) {
          return;
        }
        *(undefined4 *)(this + 0x1d4) = 0;
        iVar9 = *(int *)(this + 0xc);
        uVar2 = __floatsisf(iVar9);
        uVar3 = __floatsisf(iVar9 << 1);
        uVar7 = __mulsf3(uVar2,DAT_001e7354);
        uVar7 = __addsf3(uVar7,uVar3);
        *(undefined4 *)(this + 0xd0) = uVar7;
        uVar7 = __mulsf3(uVar2,DAT_001e7358);
        uVar7 = __addsf3(uVar7,uVar3);
        *(undefined4 *)(this + 0xd4) = uVar7;
        uVar7 = __mulsf3(uVar2,DAT_001e735c);
        uVar7 = __addsf3(uVar7,uVar3);
        *(undefined4 *)(this + 0xd8) = uVar7;
        uVar7 = __mulsf3(uVar2,DAT_001e7360);
        uVar4 = __addsf3(uVar7,uVar3);
        uVar7 = DAT_001e7364;
        *(undefined4 *)(this + 0xdc) = uVar4;
        uVar7 = __mulsf3(uVar2,uVar7);
        uVar7 = __addsf3(uVar7,uVar3);
        *(undefined4 *)(this + 0xe0) = uVar7;
        uVar4 = __mulsf3(uVar2,0x3f000000);
        uVar4 = __addsf3(uVar4,uVar3);
        *(undefined4 *)(this + 0xe4) = uVar4;
        uVar2 = __mulsf3(uVar2,DAT_001e7368);
        uVar2 = __addsf3(uVar2,uVar3);
        *(undefined4 *)(this + 0xec) = uVar7;
        *(undefined4 *)(this + 0xe8) = uVar2;
        *(undefined4 *)(this + 0xf4) = uVar2;
        *(undefined4 *)(this + 0xf0) = uVar4;
        (**(code **)(**(int **)(this + 0x1b4) + 0x20))(*(int **)(this + 0x1b4),0);
        (**(code **)(**(int **)(this + 0x1b8) + 0x20))(*(int **)(this + 0x1b8),0);
        (**(code **)(**(int **)(this + 0x1bc) + 0x20))(*(int **)(this + 0x1bc),0);
        if (*(int *)(this + 0x78) == 0) {
          return;
        }
        (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
        piVar1 = *(int **)(this + 0x78);
        uVar7 = 0;
        pcVar8 = *(code **)(*piVar1 + 0x20);
        goto LAB_001e734e;
      }
      *(undefined4 *)(this + 0x1d4) = 0;
      iVar9 = *(int *)(this + 0xc);
      uVar2 = __floatsisf(iVar9);
      uVar3 = __floatsisf(iVar9 << 1);
      uVar7 = __mulsf3(uVar2,DAT_001e7228);
      uVar7 = __addsf3(uVar7,uVar3);
      *(undefined4 *)(this + 0xd0) = uVar7;
      uVar7 = __mulsf3(uVar2,DAT_001e722c);
      uVar4 = __addsf3(uVar7,uVar3);
      uVar7 = DAT_001e7230;
      *(undefined4 *)(this + 0xd4) = uVar4;
      uVar7 = __mulsf3(uVar2,uVar7);
      uVar4 = __addsf3(uVar7,uVar3);
      uVar7 = DAT_001e7234;
      *(undefined4 *)(this + 0xd8) = uVar4;
      uVar7 = __mulsf3(uVar2,uVar7);
      uVar4 = __addsf3(uVar7,uVar3);
      uVar7 = DAT_001e7238;
      *(undefined4 *)(this + 0xdc) = uVar4;
      uVar4 = __mulsf3(uVar2,uVar7);
      uVar7 = __addsf3(uVar4,uVar3);
      *(undefined4 *)(this + 0xe0) = uVar7;
      uVar5 = __mulsf3(uVar2,0x3f000000);
      uVar6 = __addsf3(uVar5,uVar3);
      uVar7 = DAT_001e723c;
      *(undefined4 *)(this + 0xe4) = uVar6;
      uVar7 = __mulsf3(uVar2,uVar7);
      uVar3 = __addsf3(uVar7,uVar3);
      *(undefined4 *)(this + 0xe8) = uVar3;
      uVar3 = __addsf3(uVar4,uVar2);
      *(undefined4 *)(this + 0xec) = uVar3;
      uVar3 = __addsf3(uVar5,uVar2);
      *(undefined4 *)(this + 0xf0) = uVar3;
      uVar7 = __addsf3(uVar7,uVar2);
      *(undefined4 *)(this + 0xf4) = uVar7;
      (**(code **)(**(int **)(this + 0x1b4) + 0x20))(*(int **)(this + 0x1b4),0);
      (**(code **)(**(int **)(this + 0x1b8) + 0x20))(*(int **)(this + 0x1b8),0);
      piVar1 = *(int **)(this + 0x1bc);
      uVar7 = 1;
      pcVar8 = *(code **)(*piVar1 + 0x20);
    }
    (*pcVar8)(piVar1,uVar7);
    if (*(int *)(this + 0x78) == 0) {
      return;
    }
    (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
    piVar1 = *(int **)(this + 0x78);
    uVar7 = 0;
    pcVar8 = *(code **)(*piVar1 + 0x20);
  }
LAB_001e734e:
  (*pcVar8)(piVar1,uVar7);
  return;
}


