/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af874 CCMaterial::SetupMultiTextureAdd */

/* CCMaterial::SetupMultiTextureAdd(ccMaterial*, ccTexture2D const*, ccTexture2D const*) */

undefined8
CCMaterial::SetupMultiTextureAdd(ccMaterial *param_1,ccTexture2D *param_2,ccTexture2D *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  *(ccTexture2D **)(param_1 + 8) = param_3;
  iVar3 = DAT_002af908;
  *(undefined4 *)param_1 = 6;
  piVar2 = *(int **)(iVar3 + 0x2af882);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x38) = 2;
  iVar3 = *piVar2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(ccTexture2D **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar1 = DAT_002af90c;
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_002af90c;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = DAT_002af910;
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
    if (piVar2[0x81] == 0) {
      param_1 = (ccMaterial *)0xa;
      CCGFX::LoadShaderSource
                ((char *)(DAT_002af914 + 0x2af903),(char *)(DAT_002af918 + 0x2af951),
                 *(char ***)(DAT_002af91c + 0x2af8f6),5,'\n');
    }
  }
  return CONCAT44(param_1,1);
}


