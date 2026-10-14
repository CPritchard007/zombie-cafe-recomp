/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bf2a FUN_0025bf2a */

int FUN_0025bf2a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  iVar1 = (**(code **)(*param_1 + 8))
                    (param_1,&uStack_c,4,*(code **)(*param_1 + 8),param_3,param_4,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_0025ba30(&uStack_c);
    *param_5 = uVar2;
  }
  return iVar1;
}


