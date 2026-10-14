/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dc6c FUN_0029dc6c */

void FUN_0029dc6c(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)FUN_0029dc48();
  iVar1 = DAT_0029dca0;
  *(undefined4 **)(DAT_0029dca0 + 0x29dc7e) = puVar3;
  puVar4 = (undefined4 *)FUN_0029dc48();
  *puVar3 = 0;
  *(undefined4 **)(iVar1 + 0x29dc82) = puVar4;
  *puVar4 = puVar3;
  puVar3[1] = puVar4;
  puVar4[1] = 0;
  iVar2 = DAT_0029dca4;
  *(undefined4 *)(iVar1 + 0x29dc86) = 0;
  *(undefined4 *)(iVar1 + 0x29dc8a) = 0;
  *(undefined4 *)(iVar1 + 0x29dc8e) = 0;
  *(undefined4 *)(iVar1 + 0x29dc92) = 1;
  FUN_000b536c(*(undefined4 *)(iVar2 + 0x29dc96));
  return;
}


