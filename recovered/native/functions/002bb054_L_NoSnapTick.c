/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb054 L_NoSnapTick */

/* L_NoSnapTick(SSpinner*, float) */

longlong L_NoSnapTick(SSpinner *param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = __mulsf3(iVar6);
  uVar1 = __addsf3(uVar5,uVar1);
  iVar2 = __aeabi_fcmplt(iVar6,0);
  iVar3 = iVar6 + -0x80000000;
  if (iVar2 == 0) {
    iVar3 = iVar6;
  }
  iVar3 = __aeabi_fcmpgt(iVar3,*(undefined4 *)(param_1 + 0x14));
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    uVar4 = __divsf3(in_r1,DAT_002bb0e0);
    uVar4 = __subsf3(0x3f800000,uVar4);
    uVar4 = __mulsf3(iVar6,uVar4);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
  }
  uVar4 = *(undefined4 *)(param_1 + 4);
  iVar3 = __aeabi_fcmpgt(uVar1,0);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  iVar3 = __aeabi_fcmplt(uVar1,uVar4);
  if (iVar3 != 0) {
    uVar4 = uVar1;
  }
  uVar1 = __subsf3(uVar4,uVar5);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  return ZEXT48(param_1) << 0x20;
}


