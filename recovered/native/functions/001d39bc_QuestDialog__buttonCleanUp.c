/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d39bc QuestDialog::buttonCleanUp */

/* QuestDialog::buttonCleanUp(ZCImageButton*) */

void __thiscall QuestDialog::buttonCleanUp(QuestDialog *this,ZCImageButton *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  QuestDialog *pQVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  
  puts((char *)(DAT_001d3bd8 + 0x1d39ca));
  pQVar6 = this + 0x94;
  *(undefined4 *)(*(int *)(this + 0x70) + 0x60) = *(undefined4 *)pQVar6;
  *(undefined4 *)(*(int *)(this + 0x74) + 0x60) = *(undefined4 *)pQVar6;
  iVar10 = *(int *)(this + 0x90);
  iVar7 = *(int *)pQVar6;
  uVar5 = *(undefined4 *)(iVar10 + 0x2c);
  uVar8 = *(undefined4 *)(iVar7 + 0x2c);
  uVar1 = __floatsisf((int)*(short *)(iVar10 + 0x20));
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar2 = __floatsisf((int)*(short *)(iVar10 + 0x2a));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(iVar10 + 0x26));
  __addsf3(uVar1,uVar2);
  iVar3 = __fixsfsi();
  uVar1 = __floatsisf((int)*(short *)(iVar7 + 0x20));
  uVar1 = __mulsf3(uVar1,uVar8);
  uVar2 = __floatsisf((int)*(short *)(iVar7 + 0x2a));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(iVar7 + 0x26));
  __addsf3(uVar1,uVar2);
  iVar4 = __fixsfsi();
  iVar3 = __floatsisf(iVar3 - iVar4);
  iVar4 = __aeabi_fcmplt(iVar3,0);
  if (iVar4 != 0) {
    iVar3 = iVar3 + -0x80000000;
  }
  uVar1 = __mulsf3(iVar3,0x3f000000);
  uVar2 = __floatsisf((int)*(short *)(iVar10 + 0x22));
  uVar2 = __mulsf3(uVar2,uVar5);
  uVar5 = __floatsisf((int)*(short *)(iVar10 + 0x24));
  uVar2 = __addsf3(uVar2,uVar5);
  uVar5 = __floatsisf((int)*(short *)(iVar10 + 0x28));
  __addsf3(uVar2,uVar5);
  iVar3 = __fixsfsi();
  uVar2 = __floatsisf((int)*(short *)(iVar7 + 0x22));
  uVar2 = __mulsf3(uVar2,uVar8);
  uVar5 = __floatsisf((int)*(short *)(iVar7 + 0x24));
  uVar2 = __addsf3(uVar2,uVar5);
  uVar5 = __floatsisf((int)*(short *)(iVar7 + 0x28));
  __addsf3(uVar2,uVar5);
  iVar4 = __fixsfsi();
  iVar3 = __floatsisf(iVar3 - iVar4);
  iVar4 = __aeabi_fcmplt(iVar3,0);
  if (iVar4 != 0) {
    iVar3 = iVar3 + -0x80000000;
  }
  uVar2 = __mulsf3(iVar3,0x3f000000);
  piVar9 = *(int **)(this + 0x70);
  __divsi3(*(int *)(this + 0xc) << 2,10);
  uVar5 = __floatsisf();
  __addsf3(uVar5,uVar1);
  uVar5 = __fixsfsi();
  iVar3 = *piVar9;
  uVar8 = __floatsisf(*(int *)(this + 0x10) - piVar9[4] / 2);
  __addsf3(uVar8,uVar2);
  uVar8 = __fixsfsi();
  (**(code **)(iVar3 + 0x14))(piVar9,uVar5,uVar8);
  __divsi3(*(int *)(this + 0xc) * 6,10);
  uVar5 = __floatsisf();
  __addsf3(uVar5,uVar1);
  uVar5 = __fixsfsi();
  piVar9 = *(int **)(this + 0x74);
  iVar3 = *piVar9;
  uVar8 = __floatsisf(*(int *)(this + 0x10) - piVar9[4] / 2);
  __addsf3(uVar8,uVar2);
  uVar2 = __fixsfsi();
  (**(code **)(iVar3 + 0x14))(piVar9,uVar5,uVar2);
  iVar3 = *(int *)param_1;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x90);
  uVar2 = __floatsisf(*(undefined4 *)(param_1 + 4));
  __subsf3(uVar2,uVar1);
  uVar1 = __fixsfsi();
  (**(code **)(iVar3 + 0x14))(param_1,uVar1,*(int *)(this + 0x10) - *(int *)(param_1 + 0x10) / 2);
  return;
}


