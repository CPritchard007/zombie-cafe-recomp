/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00269304 FUN_00269304 */

void FUN_00269304(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(int *)(param_2 + 0xc) != 0) && (iVar3 = *(int *)(param_2 + 0x38), iVar3 != 0)) {
    for (puVar2 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 0x10); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[5]) {
      iVar1 = sqlite3_stricmp(*puVar2,iVar3);
      if (iVar1 == 0) {
        *(undefined4 **)(param_2 + 0x3c) = puVar2;
        return;
      }
    }
    FUN_00268e48(param_1,DAT_00269348 + 0x269338,iVar3,0,param_4);
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  return;
}


