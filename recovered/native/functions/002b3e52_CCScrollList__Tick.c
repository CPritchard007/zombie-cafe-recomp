/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3e52 CCScrollList::Tick */

/* CCScrollList::Tick(ccScrollList*, float) */

void CCScrollList::Tick(ccScrollList *param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r1;
  undefined4 uVar4;
  
  uVar1 = __addsf3(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = __mulsf3(uVar4,in_r1);
  uVar1 = __addsf3(*(undefined4 *)(param_1 + 0x10),uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  iVar2 = __mulsf3(*(int *)(param_1 + 0x14) + -0x80000000,in_r1);
  iVar3 = __aeabi_fcmpgt(uVar4,iVar2 + -0x80000000);
  if (iVar3 == 0) {
    iVar3 = __aeabi_fcmplt(uVar4,iVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto LAB_002b3ec0;
    }
    uVar1 = __subsf3(uVar4,iVar2);
  }
  else {
    uVar1 = __addsf3(uVar4,iVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
LAB_002b3ec0:
  L_RestrictBounds(param_1);
  return;
}


