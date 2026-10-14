/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eb02c FUN_002eb02c */

undefined4 * FUN_002eb02c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  if (uVar1 < 0x81) {
    *param_1 = uVar1 + 7 & 0xfffffff8;
    iVar2 = FUN_002eade8();
    iVar3 = ((*param_1 + 7 >> 3) - 1) * 4;
    puVar4 = *(undefined4 **)(iVar3 + iVar2);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_002eafdc();
    }
    else {
      *(undefined4 *)(iVar3 + iVar2) = *puVar4;
    }
  }
  else {
    puVar4 = (undefined4 *)std::__malloc_alloc::allocate(uVar1);
  }
  return puVar4;
}


