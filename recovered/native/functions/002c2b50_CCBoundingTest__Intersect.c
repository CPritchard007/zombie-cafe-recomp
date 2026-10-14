/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2b50 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingRect const*, ccBoundingRect const*) */

undefined8 CCBoundingTest::Intersect(ccBoundingRect *param_1,ccBoundingRect *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  uVar1 = FUN_002c2928();
  uVar2 = __addsf3(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
  uVar1 = __subsf3(uVar1,uVar2);
  __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
  uVar2 = FUN_002c2928();
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  iVar3 = __aeabi_fcmple(uVar1,0);
  if (iVar3 != 0) {
    uVar4 = __addsf3(uVar5,uVar4);
    uVar2 = __subsf3(uVar2,uVar4);
    iVar3 = __aeabi_fcmple(uVar2,0);
    if (iVar3 != 0) {
      iVar3 = __aeabi_fcmpgt(uVar1,uVar2);
      if (iVar3 != 0) {
        uVar2 = uVar1;
      }
      goto LAB_002c2bc4;
    }
  }
  uVar2 = 0x3f800000;
LAB_002c2bc4:
  return CONCAT44(param_1,uVar2);
}


