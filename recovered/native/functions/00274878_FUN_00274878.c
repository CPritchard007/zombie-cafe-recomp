/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274878 FUN_00274878 */

undefined8 FUN_00274878(int param_1,uint param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar1 = FUN_0026b4e4(DAT_00274978);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_0025dce0(*(undefined4 *)(param_1 + 0xb4),param_2,1,param_3,param_3,param_4,
                             param_3), iVar1 == 0)) {
      iVar3 = *param_3;
      if ((param_4 == 0) && (*(int *)(iVar3 + 0x10) != 0)) {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
        goto LAB_00274972;
      }
      *(int *)(iVar3 + 0x10) = param_1;
      if (((int)param_2 < 0) ||
         (iVar2 = __divsi3(*(undefined4 *)(DAT_0027497c + 0x27493e),*(undefined4 *)(param_1 + 0x80))
         , param_2 == iVar2 + 1U)) {
        iVar1 = FUN_0026b4e4(DAT_00274980);
      }
      else if ((((*(char *)(param_1 + 0xe) == '\0') && (param_4 == 0)) &&
               (param_2 <= *(uint *)(param_1 + 0x18))) && (**(int **)(param_1 + 0x3c) != 0)) {
        *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
        iVar1 = FUN_0026b5ac(iVar3);
        if (iVar1 == 0) goto LAB_00274972;
      }
      else {
        if (param_2 <= *(uint *)(param_1 + 0x84)) {
          if (param_4 != 0) {
            FUN_0025ad28();
            if (param_2 <= *(uint *)(param_1 + 0x1c)) {
              FUN_00260168(*(undefined4 *)(param_1 + 0x38),param_2);
            }
            FUN_0026029a(param_1,param_2);
            FUN_0025ad3c();
          }
          memset(*(void **)(iVar3 + 4),0,*(size_t *)(param_1 + 0x80));
          goto LAB_00274972;
        }
        iVar1 = 0xd;
      }
      FUN_0025bcf0(iVar3);
    }
    if (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0) {
      FUN_0027483a(param_1);
    }
    *param_3 = 0;
  }
LAB_00274972:
  return CONCAT44(param_3,iVar1);
}


