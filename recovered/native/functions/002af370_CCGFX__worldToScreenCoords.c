/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af370 CCGFX::worldToScreenCoords */

/* CCGFX::worldToScreenCoords(ccVec2*, ccVec3 const*, ccMat4x4 const*, ccMat4x4 const*, ccVec2
   const*) */

bool CCGFX::worldToScreenCoords
               (ccVec2 *param_1,ccVec3 *param_2,ccMat4x4 *param_3,ccMat4x4 *param_4,ccVec2 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_28 = *(undefined4 *)param_2;
  local_24 = *(undefined4 *)(param_2 + 4);
  local_20 = *(undefined4 *)(param_2 + 8);
  local_1c[0] = 0x3f800000;
  FUN_002adf06(&local_38,param_3,&local_28);
  uVar1 = uStack_30;
  local_28 = local_38;
  local_24 = uStack_34;
  local_20 = uStack_30;
  local_1c[0] = local_2c;
  FUN_002adf06(&local_38,param_4,&local_28);
  local_28 = local_38;
  local_24 = uStack_34;
  local_20 = uStack_30;
  uVar1 = __subsf3(0,uVar1,uStack_30,local_1c);
  iVar2 = __aeabi_fcmpeq(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = __divsf3(0x3f800000,uVar1);
    uVar3 = __mulsf3(uVar1,local_24);
    __mulsf3(uVar1,local_28);
    uVar4 = __extendsfdf2();
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002af488,DAT_002af48c);
    uVar4 = __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002af488,DAT_002af48c);
    uVar5 = __extendsfdf2(*(undefined4 *)(param_5 + 8));
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                     (int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __extendsfdf2(*(undefined4 *)param_5);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = __truncdfsf2();
    *(undefined4 *)param_1 = uVar1;
    uVar4 = __extendsfdf2(uVar3);
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002af488,DAT_002af48c);
    uVar4 = __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002af488,DAT_002af48c);
    uVar5 = __extendsfdf2(*(undefined4 *)(param_5 + 0xc));
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                     (int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __extendsfdf2(*(undefined4 *)(param_5 + 4));
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = __truncdfsf2();
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return iVar2 == 0;
}


