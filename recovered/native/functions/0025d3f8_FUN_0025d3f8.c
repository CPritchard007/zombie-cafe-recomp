/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d3f8 FUN_0025d3f8 */

undefined8 FUN_0025d3f8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *param_1;
  iVar2 = 0;
  while( true ) {
    if (iVar3 <= iVar2) {
      return 0;
    }
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    if (*piVar1 == param_2) break;
    iVar2 = iVar2 + 1;
  }
  uVar4 = __ashldi3(1,0);
  return uVar4;
}


