/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cad3c FUN_002cad3c */

undefined8 FUN_002cad3c(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  if (param_2 < 2) {
    if (param_2 == 1) {
      for (iVar1 = *(int *)(iVar3 + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
        if (*(int *)(iVar1 + 0x28) != 0) {
          *(undefined4 *)(iVar1 + 0x28) = 0;
          (**(code **)(iVar1 + 0x38))(param_1,iVar1 + 0x30);
        }
      }
      *(undefined4 *)(iVar3 + 0x44) = 0;
      for (iVar1 = *(int *)(iVar3 + 0x48); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
        if (*(int *)(iVar1 + 0x28) != 0) {
          *(undefined4 *)(iVar1 + 0x28) = 0;
          (**(code **)(iVar1 + 0x38))(param_1,iVar1 + 0x30);
        }
      }
      *(undefined4 *)(iVar3 + 0x48) = 0;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(uint *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  iVar1 = iVar3 + (param_2 + 0xe) * 4;
  piVar2 = *(int **)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = 0;
  while (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1] + piVar2[2] + 0x10;
    iVar4 = *piVar2;
    jpeg_free_large(param_1,piVar2,iVar1);
    *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) - iVar1;
    piVar2 = (int *)iVar4;
  }
  iVar1 = iVar3 + (param_2 + 0xc) * 4;
  piVar2 = *(int **)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = 0;
  while (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    iVar1 = piVar2[1] + piVar2[2] + 0x10;
    jpeg_free_small(param_1,piVar2,iVar1);
    *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) - iVar1;
    piVar2 = (int *)iVar4;
  }
  return CONCAT44(param_2,param_1);
}


