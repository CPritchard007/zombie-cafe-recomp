/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bd28 FUN_0025bd28 */

undefined4 FUN_0025bd28(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_30 [12];
  undefined4 local_24;
  
  puVar3 = auStack_30;
  while ((puVar2 = param_2, puVar1 = param_1, puVar2 != (undefined1 *)0x0 &&
         (puVar1 != (undefined1 *)0x0))) {
    if (*(uint *)(puVar1 + 0x14) < *(uint *)(puVar2 + 0x14)) {
      *(undefined1 **)(puVar3 + 0xc) = puVar1;
      param_1 = *(undefined1 **)(puVar1 + 0xc);
      param_2 = puVar2;
      puVar3 = puVar1;
    }
    else {
      *(undefined1 **)(puVar3 + 0xc) = puVar2;
      param_1 = puVar1;
      param_2 = *(undefined1 **)(puVar2 + 0xc);
      puVar3 = puVar2;
    }
  }
  if (puVar1 == (undefined1 *)0x0) {
    *(undefined1 **)(puVar3 + 0xc) = puVar2;
  }
  else {
    *(undefined1 **)(puVar3 + 0xc) = puVar1;
  }
  return local_24;
}


