/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af734 CCMaterial::SetupSimpleAdd */

/* CCMaterial::SetupSimpleAdd(ccMaterial*, ccTexture2D const*) */

undefined8 CCMaterial::SetupSimpleAdd(ccMaterial *param_1,ccTexture2D *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  piVar2 = *(int **)(DAT_002af7bc + 0x2af748);
  *(undefined4 *)param_1 = 4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 2;
  iVar3 = *piVar2;
  *(ccTexture2D **)(param_1 + 4) = param_2;
  uVar1 = DAT_002af7c0;
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_002af7c0;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = DAT_002af7c4;
    *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
    if (piVar2[0x7b] == 0) {
      param_1 = (ccMaterial *)0x4;
      CCGFX::LoadShaderSource
                ((char *)(DAT_002af7d0 + 0x2af7ac),(char *)(DAT_002af7c8 + 0x2af7df),
                 *(char ***)(DAT_002af7cc + 0x2af7aa),3,'\x04');
    }
  }
  return CONCAT44(param_1,1);
}


