/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a458 FUN_0026a458 */

undefined4 FUN_0026a458(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = FUN_0026a4e8(param_1,*param_2);
    if ((((iVar1 != 0) || (iVar1 = FUN_0026a3dc(param_1,param_2[10]), iVar1 != 0)) ||
        (iVar1 = FUN_0026a49e(param_1,param_2[0xb]), iVar1 != 0)) ||
       (iVar1 = FUN_0026a49e(param_1,param_2[0xd]), iVar1 != 0)) break;
    param_2 = (undefined4 *)param_2[0xf];
  }
  return 1;
}


