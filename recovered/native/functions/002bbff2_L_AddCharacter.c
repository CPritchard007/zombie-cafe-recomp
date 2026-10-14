/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbff2 L_AddCharacter */

/* L_AddCharacter(STextRenderer*, STextRendererCharDef const*, ccMat2x3 const*, unsigned int,
   unsigned int) */

void L_AddCharacter(STextRenderer *param_1,STextRendererCharDef *param_2,ccMat2x3 *param_3,
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
  
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0xf0) + param_4 * 0xc);
  uVar1 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x24));
  uVar5 = *(undefined4 *)(param_1 + 0x100);
  local_58 = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x28));
  uVar2 = __mulsf3(uVar2,uVar5);
  local_54 = uVar2;
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x2c));
  uVar3 = __addsf3(uVar1,uVar3);
  local_50 = uVar3;
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(param_2 + 0x30));
  local_4c = __subsf3(uVar2,uVar5);
  local_48 = uVar3;
  local_44 = uVar2;
  local_40 = uVar1;
  local_3c = local_4c;
  FUN_002bb81c(&local_38,param_3,&local_58);
  local_58 = local_38;
  local_54 = local_34;
  FUN_002bb81c(&local_30,param_3,&local_50);
  local_50 = local_30;
  local_4c = local_2c;
  FUN_002bb81c(&local_28,param_3,&local_48);
  local_48 = local_28;
  local_44 = local_24;
  FUN_002bb81c(&local_20,param_3,&local_40);
  local_40 = local_20;
  local_3c = local_1c;
  *puVar6 = local_38;
  puVar6[1] = local_54;
  puVar6[3] = local_48;
  puVar6[4] = local_44;
  puVar6[6] = local_20;
  puVar6[7] = local_1c;
  puVar6[9] = local_50;
  puVar6[10] = local_4c;
  puVar6[0xb] = 0;
  puVar6[8] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar4 = (uint *)(*(int *)(param_1 + 0xf8) + param_4 * 4);
  puVar4[3] = param_5;
  puVar4[2] = param_5;
  puVar4[1] = param_5;
  *puVar4 = param_5;
  memcpy((void *)(*(int *)(param_1 + 0xf4) + param_4 * 8),param_2,0x20);
  return;
}


