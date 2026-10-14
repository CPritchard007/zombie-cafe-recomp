/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3ee4 CCScrollList::HandleMouseMove */

/* CCScrollList::HandleMouseMove(ccScrollList*, float) */

float CCScrollList::HandleMouseMove(ccScrollList *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    iVar1 = __aeabi_fcmpgt(uVar3,DAT_002b3f48);
    if (iVar1 != 0) {
      uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x20),in_r1);
      uVar3 = __divsf3(uVar2,uVar3);
      uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x30),uVar3);
      uVar2 = __mulsf3(uVar2,0x3e800000);
      uVar3 = __addsf3(uVar3,uVar2);
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x20) = in_r1;
    }
    uVar3 = __subsf3(*(undefined4 *)(param_1 + 0x24),in_r1);
    uVar3 = __addsf3(uVar3,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    param_2 = (float)L_RestrictBounds(param_1);
  }
  return param_2;
}


