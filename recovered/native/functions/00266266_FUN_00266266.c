/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266266 FUN_00266266 */

undefined8
FUN_00266266(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if ((iVar3 < *(int *)(param_1 + 0x20)) || (iVar1 = FUN_0026622e(), iVar1 == 0)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    puVar2 = (undefined1 *)(*(int *)(param_1 + 4) + iVar3 * 0x14);
    *(undefined4 *)(puVar2 + 8) = param_4;
    *puVar2 = param_2;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = param_3;
    *(undefined4 *)(puVar2 + 0xc) = param_5;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    puVar2[1] = 0;
  }
  else {
    iVar3 = 1;
  }
  return CONCAT44(param_1,iVar3);
}


