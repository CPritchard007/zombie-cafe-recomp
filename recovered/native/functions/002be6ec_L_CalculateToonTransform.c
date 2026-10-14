/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be6ec L_CalculateToonTransform */

/* L_CalculateToonTransform(ccMat2x3*, ccVec2 const*, ccVec2 const*, float, ccVec2 const*) */

void L_CalculateToonTransform
               (ccMat2x3 *param_1,ccVec2 *param_2,ccVec2 *param_3,float param_4,ccVec2 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double __x;
  undefined4 *in_stack_00000000;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  local_a8 = 0x3f800000;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0x3f800000;
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0x3f800000;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_98 = __mulsf3(param_4,*(undefined4 *)param_2,DAT_002be82c);
  local_94 = __mulsf3(uVar4,DAT_002be82c);
  __x = (double)__extendsfdf2(param_5);
  cos(__x);
  uVar4 = __truncdfsf2();
  sin(__x);
  iVar1 = __truncdfsf2();
  iVar3 = iVar1 + -0x80000000;
  uVar5 = *(undefined4 *)(param_3 + 4);
  local_80 = __mulsf3(*(undefined4 *)param_3,DAT_002be82c);
  local_7c = __mulsf3(uVar5,DAT_002be82c);
  local_78 = *in_stack_00000000;
  local_6c = in_stack_00000000[1];
  FUN_002be604(&local_60,&local_78,&local_90);
  uVar5 = __mulsf3(local_60,uVar4);
  uVar2 = __mulsf3(local_58,iVar1);
  local_48 = __addsf3(uVar5,uVar2);
  uVar5 = __mulsf3(local_5c,uVar4);
  uVar2 = __mulsf3(local_54,iVar1);
  local_44 = __addsf3(uVar5,uVar2);
  uVar5 = __mulsf3(local_60,iVar3);
  uVar2 = __mulsf3(local_58,uVar4);
  local_40 = __addsf3(uVar5,uVar2);
  uVar5 = __mulsf3(local_5c,iVar3);
  uVar4 = __mulsf3(local_54,uVar4);
  local_3c = __addsf3(uVar5,uVar4);
  local_38 = local_50;
  local_34 = local_4c;
  FUN_002be604(&local_30,&local_48,&local_a8);
  *(undefined4 *)param_1 = local_30;
  *(undefined4 *)(param_1 + 4) = local_2c;
  *(undefined4 *)(param_1 + 8) = local_28;
  *(undefined4 *)(param_1 + 0xc) = local_24;
  *(undefined4 *)(param_1 + 0x10) = local_20;
  *(undefined4 *)(param_1 + 0x14) = local_1c;
  return;
}


