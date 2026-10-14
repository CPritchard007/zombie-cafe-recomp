/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c594 FUN_0027c594 */

undefined8 FUN_0027c594(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_1c;
  undefined4 uStack_18;
  
  piVar4 = *(int **)(param_1 + 4);
  local_1c = param_2;
  uStack_18 = param_3;
  FUN_00261f68();
  iVar5 = 0;
  if ((param_2 != 0) || (param_2 = FUN_0027c4cc(piVar4,0,0), iVar5 = param_2, param_2 != 0)) {
    FUN_00274be6(param_1,param_2);
  }
  if (*(char *)(param_1 + 8) != '\x02') goto LAB_0027c60c;
  bVar1 = *(byte *)(*piVar4 + 0xf);
  if (bVar1 == 6) {
    iVar2 = *(int *)(*piVar4 + 0x28);
LAB_0027c5d8:
    if (iVar2 != 0) {
      iVar5 = iVar2;
    }
  }
  else if (1 < bVar1) {
    iVar2 = FUN_002747d4();
    goto LAB_0027c5d8;
  }
  iVar3 = FUN_00274984(piVar4,1,&local_1c,0);
  iVar2 = local_1c;
  if (iVar3 == 0) {
    iVar3 = FUN_0025ba30(*(int *)(local_1c + 0x38) + 0x1c);
    if (iVar3 == 0) {
      iVar3 = *(int *)(*piVar4 + 0x18);
    }
    piVar4[0xb] = iVar3;
    FUN_00274a30(iVar2);
  }
  *(undefined1 *)((int)piVar4 + 0x13) = 1;
LAB_0027c60c:
  FUN_00274ac4(param_1);
  FUN_00262002(param_1);
  return CONCAT44(param_1,iVar5);
}


