/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026690a FUN_0026690a */

longlong FUN_0026690a(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00266266(param_1,0x6a,param_2,0);
  FUN_00263832(param_1,uVar1,param_3,0xffffffff);
  for (iVar2 = 0; iVar2 < *(int *)(*param_1 + 0x14); iVar2 = iVar2 + 1) {
    FUN_0025c3f4(param_1,iVar2);
  }
  return (ulonglong)param_2 << 0x20;
}


