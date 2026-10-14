/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af660 CCMaterial::SetupSimple */

/* CCMaterial::SetupSimple(ccMaterial*, ccTexture2D const*) */

undefined8 CCMaterial::SetupSimple(ccMaterial *param_1,ccTexture2D *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  char **ppcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = 2;
  iVar7 = DAT_002af710 + 0x2af66c;
  if (*(int *)(param_2 + 0x10) == 3) {
    iVar6 = 3;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = DAT_002af714;
  *(ccTexture2D **)(param_1 + 4) = param_2;
  *(int *)param_1 = iVar6;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  uVar2 = DAT_002af718;
  piVar8 = *(int **)(iVar7 + iVar1);
  if (*piVar8 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_002af718;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    uVar2 = DAT_002af71c;
    *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
    if (iVar6 == 3) {
      if (piVar8[0x7e] != 0) goto LAB_002af70c;
      ppcVar5 = *(char ***)(iVar7 + DAT_002af724);
      pcVar3 = (char *)(DAT_002af728 + 0x2af6e6);
      pcVar4 = (code *)((int)&DAT_002af710 + DAT_002af720 + 2);
      param_1 = (ccMaterial *)0x7;
    }
    else {
      if (piVar8[0x79] != 0) goto LAB_002af70c;
      ppcVar5 = *(char ***)(iVar7 + DAT_002af724);
      param_1 = (ccMaterial *)0x2;
      pcVar3 = (char *)(DAT_002af730 + 0x2af706);
      pcVar4 = SetupSimpleAdd + DAT_002af72c + 6;
    }
    CCGFX::LoadShaderSource(pcVar3,(char *)pcVar4,ppcVar5,3,(uchar)param_1);
  }
LAB_002af70c:
  return CONCAT44(param_1,1);
}


