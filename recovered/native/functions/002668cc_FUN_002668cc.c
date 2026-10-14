/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002668cc FUN_002668cc */

undefined8 FUN_002668cc(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar3 = param_1;
  iVar5 = param_2;
  uVar1 = FUN_002627dc();
  iVar2 = param_1[2];
  FUN_0026641e(iVar2,7,**(int **)(*(int *)(*param_1 + 0x10) + param_2 * 0x10 + 0xc) + 1,uVar1,piVar3
               ,iVar5,param_3);
  uVar4 = uVar1;
  FUN_00266266(iVar2,0x25,param_2,1);
  FUN_002627fe(param_1,uVar1);
  return CONCAT44(iVar5,uVar4);
}


