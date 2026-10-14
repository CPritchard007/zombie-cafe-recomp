/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f066 FUN_0025f066 */

void FUN_0025f066(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0025f04c(param_1,0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 7) = 1;
    *(undefined1 *)((int)puVar1 + 0x1e) = 5;
    *puVar1 = param_1;
  }
  return;
}


