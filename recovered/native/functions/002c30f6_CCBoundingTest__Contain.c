/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c30f6 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingCircle const*, ccBoundingRect const*) */

undefined8 __thiscall
CCBoundingTest::Contain(CCBoundingTest *this,ccBoundingCircle *param_1,ccBoundingRect *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  ccBoundingRect *pcStack_10;
  
  local_18 = *(undefined4 *)param_1;
  local_14 = *(undefined4 *)(param_1 + 4);
  pcStack_10 = param_2;
  uVar1 = Contain((ccBoundingCircle *)this,(ccVec2 *)&local_18);
  iVar2 = __aeabi_fcmpeq(uVar1,0);
  if (iVar2 == 0) {
    local_18 = __subsf3(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 8));
    local_14 = __subsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar1 = Contain((ccBoundingCircle *)this,(ccVec2 *)&local_18);
    iVar2 = __aeabi_fcmpeq(uVar1,0);
    if (iVar2 == 0) {
      local_18 = __addsf3(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 8));
      uVar1 = Contain((ccBoundingCircle *)this,(ccVec2 *)&local_18);
      iVar2 = __aeabi_fcmpeq(uVar1,0);
      if (iVar2 == 0) {
        local_14 = __addsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
        uVar1 = Contain((ccBoundingCircle *)this,(ccVec2 *)&local_18);
        iVar2 = __aeabi_fcmpeq(uVar1,0);
        if (iVar2 == 0) {
          local_18 = __subsf3(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 8));
          iVar2 = Contain((ccBoundingRect *)param_1,(ccVec2 *)&local_18);
          uVar3 = (uint)(iVar2 != 0);
          goto LAB_002c318c;
        }
      }
    }
  }
  uVar3 = 0;
LAB_002c318c:
  return CONCAT44(local_18,uVar3);
}


