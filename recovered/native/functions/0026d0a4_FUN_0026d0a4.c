/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d0a4 FUN_0026d0a4 */

undefined8 FUN_0026d0a4(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *param_1;
  uVar1 = *(uint *)(iVar4 + 0x18);
  piVar2 = (int *)0x0;
  *(uint *)(iVar4 + 0x18) = DAT_0026d12c & uVar1 | 0x800;
  piVar5 = param_1;
  FUN_0025d2dc(param_1,param_2,0);
  if (param_1[0x11] == 0) {
    do {
      piVar3 = param_2;
      param_2 = (int *)piVar3[0xf];
    } while (param_2 != (int *)0x0);
    *(uint *)(iVar4 + 0x18) = uVar1;
    piVar2 = (int *)FUN_0025f04c(iVar4,0x4c);
    piVar5 = param_2;
    if (piVar2 != (int *)0x0) {
      *(undefined2 *)(piVar2 + 8) = 1;
      *piVar2 = (int)param_2;
      piVar2[6] = DAT_0026d130;
      FUN_00268794(param_1,*piVar3,piVar2 + 2,piVar2 + 3,param_2,uVar1,param_3);
      FUN_0026cfd4(param_1,piVar2[2],piVar2[3],piVar3);
      piVar2[1] = -1;
      piVar5 = param_2;
      if (*(char *)(iVar4 + 0x36) != '\0') {
        FUN_00260e84(iVar4,piVar2);
        piVar2 = param_2;
        piVar5 = piVar2;
      }
    }
  }
  return CONCAT44(piVar5,piVar2);
}


