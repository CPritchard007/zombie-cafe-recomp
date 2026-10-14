/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268204 FUN_00268204 */

undefined8 FUN_00268204(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    puVar2 = &uStack_4;
    uVar3 = param_3;
    uStack_4 = param_4;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_002674ce(param_1 + 0x1c,DAT_00268268 + 0x268230,1);
    }
    if (param_2 != (undefined4 *)0x0) {
      FUN_002674ce(param_1 + 0x1c,param_2,0xffffffff);
    }
    param_2 = puVar2;
    FUN_002675a8(param_1 + 0x1c,1,param_3,param_2,iVar1,param_2,uVar3);
    if (*(char *)(param_1 + 0x34) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return CONCAT44(param_2,iVar1);
}


