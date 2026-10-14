/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b950 FUN_0026b950 */

undefined8 FUN_0026b950(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar3 = *param_1;
  piVar5 = param_1;
  if ((*(char *)(iVar3 + 0x36) == '\0') && (-1 < *(int *)(iVar3 + 0x18) << 8)) {
    iVar2 = param_2;
    if (param_2 == 0) {
      iVar2 = DAT_0026b9ac + 0x26b974;
    }
    FUN_0026a976(param_1[1],iVar3,DAT_0026b9b0 + 0x26b97c,iVar2,param_1,param_2,param_3);
    if (param_3 != (int *)0x0) {
      puVar4 = (undefined4 *)param_1[1];
      uVar1 = FUN_0026a950(iVar3,*puVar4,DAT_0026b9b4 + 0x26b98e);
      *puVar4 = uVar1;
      piVar5 = param_3;
    }
  }
  iVar2 = 7;
  if (*(char *)(iVar3 + 0x36) == '\0') {
    iVar2 = FUN_0026b4e4(DAT_0026b9b8);
  }
  param_1[3] = iVar2;
  return CONCAT44(param_2,piVar5);
}


