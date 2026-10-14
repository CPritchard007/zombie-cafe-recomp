/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026934c FUN_0026934c */

int * FUN_0026934c(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar1 = param_3;
  if (param_3 != (int *)0x0) {
    piVar1 = (int *)0x0;
    if (*(char *)(*param_1 + 0x36) == '\0') {
      if (*(int *)(*param_1 + 0x54) < *param_3) {
        FUN_00268e48(param_1,DAT_002693cc + 0x26937a,param_4);
LAB_002693a4:
        piVar1 = (int *)0x1;
      }
      else {
        piVar1 = (int *)*param_2;
        puVar4 = (undefined4 *)param_3[2];
        for (iVar5 = 0; iVar5 < *param_3; iVar5 = iVar5 + 1) {
          uVar2 = (uint)*(ushort *)((int)puVar4 + 0xe);
          if (uVar2 != 0) {
            iVar3 = *piVar1;
            if (iVar3 < (int)uVar2) {
              FUN_00268e48(param_1,DAT_002693d0 + 0x26939e,iVar5 + 1,param_4,iVar3);
              goto LAB_002693a4;
            }
            FUN_002691c8(param_1,piVar1,uVar2 - 1,*puVar4,param_4,0);
          }
          puVar4 = puVar4 + 5;
        }
        piVar1 = (int *)0x0;
      }
    }
  }
  return piVar1;
}


