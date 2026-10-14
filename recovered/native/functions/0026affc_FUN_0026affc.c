/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026affc FUN_0026affc */

int FUN_0026affc(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
                int param_7,int param_8,int *param_9)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 local_24;
  
  if (param_2 == 0) goto LAB_0026b046;
  if (param_6 == 0) {
    if ((param_8 != 0) && (param_7 == 0)) goto LAB_0026b046;
    if (param_8 == 0) goto LAB_0026b02c;
  }
  else {
    if (param_8 != 0) goto LAB_0026b046;
LAB_0026b02c:
    if (param_7 != 0) goto LAB_0026b046;
  }
  if ((param_3 + 1U < 0x81) && (iVar1 = FUN_0025b154(param_2), iVar1 < 0x100)) {
    if (param_4 == 4) {
      param_4 = 3 - (*(char *)(DAT_0026b164 + 0x26b098) != '\0');
    }
    else if (param_4 == 5) {
      iVar2 = FUN_0026affc(param_1,param_2,param_3,1,param_5,param_6,param_7,param_8,param_9);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_0026affc(param_1,param_2,param_3,2,param_5,param_6,param_7,param_8,param_9);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_4 = 3;
    }
    psVar3 = (short *)FUN_00262898(param_1,param_2,iVar1,param_3,param_4 & 0xff,0);
    if (((psVar3 != (short *)0x0) && (*(byte *)(psVar3 + 1) == param_4)) && (*psVar3 == param_3)) {
      if (*(int *)(param_1 + 0x80) != 0) {
        FUN_00268578(param_1,5,DAT_0026b168 + 0x26b0ec);
        return 5;
      }
      FUN_0025c5ec(param_1);
    }
    puVar4 = (undefined2 *)FUN_00262898(param_1,param_2,iVar1,param_3,param_4 & 0xff,1);
    if (puVar4 == (undefined2 *)0x0) {
      return 7;
    }
    piVar5 = *(int **)(puVar4 + 0x10);
    if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, *piVar5 = iVar1 + -1, iVar1 + -1 == 0)) {
      (*(code *)piVar5[1])(piVar5[2]);
      FUN_0025fbda(param_1,piVar5);
    }
    if (param_9 != (int *)0x0) {
      *param_9 = *param_9 + 1;
    }
    *(int *)(puVar4 + 6) = param_6;
    *(int *)(puVar4 + 8) = param_7;
    *(int **)(puVar4 + 0x10) = param_9;
    *(int *)(puVar4 + 10) = param_8;
    *(undefined4 *)(puVar4 + 2) = param_5;
    local_24 = (undefined2)param_3;
    *(undefined1 *)((int)puVar4 + 3) = 0;
    *puVar4 = local_24;
    return 0;
  }
LAB_0026b046:
  iVar1 = FUN_0026adf0(DAT_0026b160);
  return iVar1;
}


