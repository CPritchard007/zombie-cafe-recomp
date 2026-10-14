/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278300 FUN_00278300 */

int FUN_00278300(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_2;
  puVar3 = (undefined4 *)param_2[2];
  for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
    iVar5 = iVar4 + param_3;
    iVar1 = FUN_00277a30(param_1,*puVar3,iVar5);
    if (iVar1 != iVar5) {
      FUN_0026641e(*(undefined4 *)(param_1 + 8),(param_4 == 0) + '\x0e',iVar1,iVar5);
    }
    puVar3 = puVar3 + 5;
  }
  return iVar2;
}


