/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afa54 CCMaterial::SetupMultiTextureMultToOrb */

/* CCMaterial::SetupMultiTextureMultToOrb(ccMaterial*, ccTexture2D const*, ccTexture2D const*) */

undefined8
CCMaterial::SetupMultiTextureMultToOrb
          (ccMaterial *param_1,ccTexture2D *param_2,ccTexture2D *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  *(ccTexture2D **)(param_1 + 8) = param_3;
  iVar3 = DAT_002afae4;
  *(undefined4 *)param_1 = 9;
  piVar2 = *(int **)(iVar3 + 0x2afa62);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  iVar3 = *piVar2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(ccTexture2D **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar1 = DAT_002afae8;
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_002afae8;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = DAT_002afaec;
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
    if (piVar2[0x83] == 0) {
      param_1 = (ccMaterial *)0xc;
      CCGFX::LoadShaderSource
                ((char *)(DAT_002afaf0 + 0x2afae1),(char *)(SetupColorFading + DAT_002afaf4 + 4),
                 *(char ***)(DAT_002afaf8 + 0x2afad4),5,'\f');
    }
  }
  return CONCAT44(param_1,1);
}


