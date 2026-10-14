/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc102 L_AddCharacter */

/* L_AddCharacter(STextRenderer*, STextRendererCharDef const*, ccMat3x4 const*, unsigned int,
   unsigned int) */

void L_AddCharacter(STextRenderer *param_1,STextRendererCharDef *param_2,ccMat3x4 *param_3,
                   uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
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
  
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0xf0) + param_4 * 0xc);
  memset(&local_48,0,0xc);
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  uVar1 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x24));
  uVar5 = *(undefined4 *)(param_1 + 0x100);
  local_48 = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x28));
  uVar2 = __mulsf3(uVar2,uVar5);
  local_44 = uVar2;
  memset(&local_3c,0,0xc);
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x2c));
  uVar3 = __addsf3(uVar1,uVar3);
  local_3c = uVar3;
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(param_2 + 0x30));
  uVar5 = __subsf3(uVar2,uVar5);
  local_38 = uVar5;
  memset(&local_30,0,0xc);
  local_30 = uVar3;
  local_2c = uVar2;
  memset(&local_24,0,0xc);
  local_24 = uVar1;
  local_20 = uVar5;
  FUN_002bb712(&local_58,param_3,&local_48);
  local_48 = local_58;
  local_44 = local_54;
  local_40 = local_50;
  FUN_002bb712(&local_58,param_3,&local_3c);
  local_3c = local_58;
  local_38 = local_54;
  local_34 = local_50;
  FUN_002bb712(&local_58,param_3,&local_30);
  local_30 = local_58;
  local_2c = local_54;
  local_28 = local_50;
  FUN_002bb712(&local_58,param_3,&local_24);
  local_24 = local_58;
  local_20 = local_54;
  local_1c = local_50;
  *puVar6 = local_48;
  puVar6[1] = local_44;
  puVar6[2] = local_40;
  puVar6[3] = local_30;
  puVar6[4] = local_2c;
  puVar6[5] = local_28;
  puVar6[6] = local_58;
  puVar6[7] = local_54;
  puVar6[8] = local_50;
  puVar6[9] = local_3c;
  puVar6[10] = local_38;
  puVar6[0xb] = local_34;
  puVar4 = (uint *)(*(int *)(param_1 + 0xf8) + param_4 * 4);
  puVar4[3] = param_5;
  puVar4[2] = param_5;
  puVar4[1] = param_5;
  *puVar4 = param_5;
  memcpy((void *)(*(int *)(param_1 + 0xf4) + param_4 * 8),param_2,0x20);
  return;
}


