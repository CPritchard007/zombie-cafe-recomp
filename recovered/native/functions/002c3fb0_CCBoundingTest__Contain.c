/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3fb0 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingSphere const*, ccBoundingBox const*) */

byte CCBoundingTest::Contain(ccBoundingSphere *param_1,ccBoundingBox *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = Contain(param_1,(ccVec3 *)param_2);
  iVar2 = __aeabi_fcmpeq(uVar1,0);
  if (iVar2 == 0) {
    local_1c = __addsf3(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc));
    uVar1 = Contain(param_1,(ccVec3 *)&local_1c);
    iVar2 = __aeabi_fcmpeq(uVar1,0);
    if (iVar2 == 0) {
      local_18 = __addsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x10));
      uVar1 = Contain(param_1,(ccVec3 *)&local_1c);
      iVar2 = __aeabi_fcmpeq(uVar1,0);
      if (iVar2 == 0) {
        local_1c = __subsf3(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc));
        uVar1 = Contain(param_1,(ccVec3 *)&local_1c);
        iVar2 = __aeabi_fcmpeq(uVar1,0);
        if (iVar2 == 0) {
          local_14 = __addsf3(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x14));
          uVar1 = Contain(param_1,(ccVec3 *)&local_1c);
          iVar2 = __aeabi_fcmpeq(uVar1,0);
          if (iVar2 == 0) {
            local_1c = __addsf3(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc));
            uVar1 = Contain(param_1,(ccVec3 *)&local_1c);
            iVar2 = __aeabi_fcmpeq(uVar1,0);
            if (iVar2 == 0) {
              local_18 = __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x10));
              uVar1 = Contain(param_1,(ccVec3 *)&local_1c);
              iVar2 = __aeabi_fcmpeq(uVar1,0);
              if (iVar2 == 0) {
                local_1c = __subsf3(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc));
                uVar1 = Contain(param_1,(ccVec3 *)&local_1c);
                iVar2 = __aeabi_fcmpeq(uVar1,0);
                return -(iVar2 == 0) & 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


