/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2c24 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingRect const*, ccBoundingCircle const*, ccVec3*) */

undefined4
CCBoundingTest::Intersect(ccBoundingRect *param_1,ccBoundingCircle *param_2,ccVec3 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)param_2;
  local_20 = 0;
  local_1c = 0;
  uVar1 = __subsf3(uVar3,uVar4);
  iVar2 = __aeabi_fcmple(uVar5,uVar1);
  if (iVar2 == 0) {
    uVar1 = __addsf3(uVar3,uVar4);
    iVar2 = __aeabi_fcmpge(uVar5,uVar1);
    if (iVar2 != 0) goto LAB_002c2c74;
  }
  else {
LAB_002c2c74:
    local_20 = __subsf3(uVar5,uVar1);
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar1 = __subsf3(uVar3,uVar5);
  iVar2 = __aeabi_fcmple(uVar4,uVar1);
  if (iVar2 == 0) {
    uVar1 = __addsf3(uVar3,uVar5);
    iVar2 = __aeabi_fcmpge(uVar4,uVar1);
    if (iVar2 == 0) goto LAB_002c2cb8;
  }
  local_1c = __subsf3(uVar4,uVar1);
LAB_002c2cb8:
  uVar1 = FUN_002c2940(&local_20);
  uVar3 = __mulsf3(*(undefined4 *)(param_2 + 8));
  iVar2 = __aeabi_fcmple(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar1 = 0x3f800000;
  }
  else {
    *(undefined4 *)param_3 = local_20;
    *(undefined4 *)(param_3 + 4) = local_1c;
    *(undefined4 *)(param_3 + 8) = 0;
    uVar1 = FUN_002c2a14(&local_20);
    uVar1 = __subsf3(uVar1,*(undefined4 *)(param_2 + 8));
  }
  return uVar1;
}


