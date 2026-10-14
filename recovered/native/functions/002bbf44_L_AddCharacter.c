/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbf44 L_AddCharacter */

/* L_AddCharacter(STextRenderer*, STextRendererCharDef const*, ccVec3 const*, unsigned int, unsigned
   int) */

void L_AddCharacter(STextRenderer *param_1,STextRendererCharDef *param_2,ccVec3 *param_3,
                   uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0xf0) + param_4 * 0xc);
  uVar1 = __mulsf3(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_1 + 0xfc));
  uVar1 = __addsf3(uVar1,*(undefined4 *)param_3);
  puVar4[6] = uVar1;
  *puVar4 = uVar1;
  uVar2 = __mulsf3(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_1 + 0xfc));
  uVar1 = __addsf3(uVar1,uVar2);
  puVar4[9] = uVar1;
  puVar4[3] = uVar1;
  uVar1 = __subsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x28));
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(param_1 + 0x100));
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_3 + 4));
  puVar4[4] = uVar1;
  puVar4[1] = uVar1;
  uVar2 = __mulsf3(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_1 + 0x100));
  uVar1 = __subsf3(uVar1,uVar2);
  puVar4[10] = uVar1;
  puVar4[7] = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar4[0xb] = uVar1;
  puVar4[8] = uVar1;
  puVar4[5] = uVar1;
  puVar4[2] = uVar1;
  puVar3 = (uint *)(*(int *)(param_1 + 0xf8) + param_4 * 4);
  puVar3[3] = param_5;
  puVar3[2] = param_5;
  puVar3[1] = param_5;
  *puVar3 = param_5;
  memcpy((void *)(*(int *)(param_1 + 0xf4) + param_4 * 8),param_2,0x20);
  return;
}


