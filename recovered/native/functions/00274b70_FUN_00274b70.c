/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274b70 FUN_00274b70 */

undefined8 FUN_00274b70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 8);
  if (uVar3 == 0) goto LAB_00274be2;
  FUN_00261f68();
  if (*(char *)(param_1 + 8) == '\x02') {
    piVar4 = *(int **)(param_1 + 4);
    iVar2 = *piVar4;
    uVar3 = *(uint *)(iVar2 + 0x28);
    if (uVar3 == 0) {
      if ((*(char *)(iVar2 + 0xf) == '\x02') && (*(char *)(iVar2 + 4) != '\0')) {
        cVar1 = *(char *)(iVar2 + 5);
        if (cVar1 != '\x01') goto LAB_00274ba2;
      }
      else {
LAB_00274ba2:
        uVar3 = FUN_00261dac(iVar2,*(undefined1 *)(iVar2 + 0x12));
        if (((uVar3 & 0xff) != 10) && ((uVar3 & 0xff) != 0xd)) goto LAB_00274bbe;
        *(uint *)(iVar2 + 0x28) = uVar3;
        cVar1 = '\x06';
      }
      *(char *)(iVar2 + 0xf) = cVar1;
    }
LAB_00274bbe:
    if ((uVar3 != 0) && (param_2 == 0)) {
      FUN_00262002(param_1);
      goto LAB_00274be2;
    }
    *(undefined1 *)((int)piVar4 + 0x13) = 1;
  }
  FUN_00274ac4(param_1);
  FUN_00262002(param_1);
  uVar3 = 0;
LAB_00274be2:
  return CONCAT44(param_1,uVar3);
}


