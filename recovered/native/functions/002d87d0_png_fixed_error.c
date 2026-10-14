/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d87d0 png_fixed_error */

/* WARNING: Possible PIC construction at 0x002d885a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x002d885e) */
/* WARNING: Removing unreachable block (ram,0x002d8870) */
/* WARNING: Removing unreachable block (ram,0x002d8886) */
/* WARNING: Removing unreachable block (ram,0x002d88a6) */
/* WARNING: Removing unreachable block (ram,0x002d88b0) */
/* WARNING: Removing unreachable block (ram,0x002d88aa) */
/* WARNING: Removing unreachable block (ram,0x002d8896) */
/* WARNING: Removing unreachable block (ram,0x002d88a0) */
/* WARNING: Removing unreachable block (ram,0x002d889a) */
/* WARNING: Removing unreachable block (ram,0x002d88b4) */
/* WARNING: Removing unreachable block (ram,0x002d8880) */
/* WARNING: Removing unreachable block (ram,0x002d886a) */

void png_fixed_error(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f0 [24];
  char local_d8 [196];
  undefined4 local_14;
  
  puVar5 = (undefined4 *)auStack_f0;
  local_14 = **(undefined4 **)(iRam002d8818 + 0x2d87dc);
  memcpy(auStack_f0,(void *)(iRam002d881c + 0x2d87e2),0x18);
  iVar3 = 0;
  iVar4 = iVar3;
  if (param_2 != 0) {
    do {
      iVar3 = iVar4;
      if (*(char *)(param_2 + iVar4) == '\0') break;
      iVar3 = iVar4 + 1;
      local_d8[iVar4] = *(char *)(param_2 + iVar4);
      iVar4 = iVar3;
    } while (iVar3 != 0xc3);
  }
  local_d8[iVar3] = '\0';
  uVar6 = 0x2d8819;
  uVar8 = png_error(param_1,auStack_f0);
  puVar1 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
  *(int *)(param_2 + 0x14) = (int)uVar8;
  while( true ) {
    puVar5[-1] = uVar6;
    puVar5[-2] = param_2;
    uVar6 = **(undefined4 **)(iRam002d8844 + 0x2d882c);
    puVar5[-3] = uVar6;
    puVar2 = puVar1;
    if (param_2 != 0) {
      FUN_002d8314(param_2,puVar5 + -0x39);
      puVar1 = puVar5 + -0x39;
    }
    uVar7 = 0x2d8845;
    uVar8 = png_error(param_2,puVar1);
    puVar1 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
    puVar2[4] = (int)uVar8;
    puVar5[-0x3b] = uVar7;
    puVar5 = puVar5 + -0x3c;
    *puVar5 = uVar6;
    if (*(int *)(param_2 + 0x138) << 0xb < 0) break;
    uVar6 = 0x2d885f;
  }
  png_chunk_warning();
  return;
}


