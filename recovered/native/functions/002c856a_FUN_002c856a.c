/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c856a FUN_002c856a */

bool FUN_002c856a(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (((((((*(int *)(param_1 + 0x4c) == 0) && (*(int *)(param_1 + 0x134) == 0)) &&
         (*(int *)(param_1 + 0x28) == 3)) &&
        ((*(int *)(param_1 + 0x24) == 3 && (*(int *)(param_1 + 0x2c) == 2)))) &&
       ((*(int *)(param_1 + 0x78) == 3 &&
        ((*(int *)(param_1 + 0x130) == 0 &&
         (iVar1 = *(int *)(param_1 + 0xd8), *(int *)(iVar1 + 8) == 2)))))) &&
      (*(int *)(iVar1 + 0x60) == 1)) &&
     (((((*(int *)(iVar1 + 0xb8) == 1 && (*(int *)(iVar1 + 0xc) < 3)) &&
        (*(int *)(iVar1 + 100) == 1)) &&
       (((*(int *)(iVar1 + 0xbc) == 1 && (*(int *)(iVar1 + 0x24) == *(int *)(param_1 + 0x144))) &&
        ((*(int *)(iVar1 + 0x7c) == *(int *)(iVar1 + 0x24) &&
         ((*(int *)(iVar1 + 0xd4) == *(int *)(iVar1 + 0x7c) &&
          (*(int *)(iVar1 + 0x28) == *(int *)(param_1 + 0x148))))))))) &&
      (*(int *)(iVar1 + 0x80) == *(int *)(iVar1 + 0x28))))) {
    bVar2 = *(int *)(iVar1 + 0xd8) == *(int *)(iVar1 + 0x80);
  }
  return bVar2;
}


