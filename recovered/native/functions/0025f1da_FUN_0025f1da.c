/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f1da FUN_0025f1da */

undefined1 *
FUN_0025f1da(undefined4 param_1,undefined1 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)FUN_0025f04c(param_1,param_3[1] + 0x28,param_3,param_4,param_4);
  if (puVar1 != (undefined1 *)0x0) {
    memcpy(puVar1 + 0x28,(void *)*param_3,param_3[1]);
    *(undefined1 **)(puVar1 + 0xc) = puVar1 + 0x28;
    uVar2 = param_3[1];
    *puVar1 = param_2;
    *(undefined4 *)(puVar1 + 0x10) = uVar2;
  }
  return puVar1;
}


