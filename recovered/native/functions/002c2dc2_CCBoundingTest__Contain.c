/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2dc2 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingRect const*, ccBoundingCircle const*) */

undefined8 CCBoundingTest::Contain(ccBoundingRect *param_1,ccBoundingCircle *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)(param_1 + 4);
  __subsf3(*(undefined4 *)param_1,*(undefined4 *)param_2);
  uVar1 = FUN_002c2928();
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 8),uVar6);
  iVar3 = __aeabi_fcmple(uVar1,uVar2);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    __subsf3(uVar7,uVar5);
    uVar1 = FUN_002c2928();
    uVar2 = __subsf3(*(undefined4 *)(param_1 + 0xc),uVar6);
    iVar3 = __aeabi_fcmple(uVar1,uVar2);
    uVar4 = -(uint)(iVar3 != 0) & 1;
  }
  return CONCAT44(param_1,uVar4);
}


