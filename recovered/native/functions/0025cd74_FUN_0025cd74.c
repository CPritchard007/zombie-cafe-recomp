/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cd74 FUN_0025cd74 */

void FUN_0025cd74(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + 0x18);
  if (uVar3 < 10) {
    uVar3 = 10;
  }
  *puVar4 = uVar3;
  iVar1 = 1;
  uVar3 = 10;
  puVar2 = puVar4;
  while( true ) {
    puVar2 = puVar2 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1) break;
    *puVar2 = uVar3;
    iVar1 = iVar1 + 1;
    uVar3 = uVar3 - (5 < uVar3);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    puVar4[*(int *)(param_1 + 0x24)] = 1;
  }
  return;
}


