/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a49e FUN_0026a49e */

undefined4 FUN_0026a49e(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    uVar1 = *(ushort *)(param_2 + 2);
    if ((uVar1 & 0x4000) != 0) break;
    if ((uVar1 & 0x800) == 0) {
      iVar2 = FUN_0026a4e8(param_1,*(undefined4 *)(param_2 + 0x10),param_3,uVar1,param_4);
    }
    else {
      iVar2 = FUN_0026a458();
    }
    if ((iVar2 != 0) || (iVar2 = FUN_0026a49e(param_1,*(undefined4 *)(param_2 + 0xc)), iVar2 != 0))
    {
      return 1;
    }
    param_2 = *(int *)(param_2 + 8);
  }
  return 0;
}


