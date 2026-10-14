/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00269118 FUN_00269118 */

int FUN_00269118(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (((param_3 == 0) || (param_2 != 0x45)) || (param_4 == 0)) {
    iVar1 = FUN_0025f0ac(*param_1,param_2,param_5,1,param_4);
    FUN_00261190(*param_1,iVar1,param_3,param_4);
  }
  else {
    iVar1 = FUN_00262684(*param_1,param_3,param_4);
  }
  if (iVar1 != 0) {
    if (*(int *)(*param_1 + 0x58) < *(int *)(iVar1 + 0x2c)) {
      FUN_00268e48(param_1,DAT_0026916c + 0x269166);
    }
  }
  return iVar1;
}


