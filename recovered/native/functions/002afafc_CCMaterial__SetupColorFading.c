/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afafc CCMaterial::SetupColorFading */

/* CCMaterial::SetupColorFading(ccMaterial*, ccTexture2D const*) */

undefined8 CCMaterial::SetupColorFading(ccMaterial *param_1,ccTexture2D *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar1 = DAT_002afb7c;
  *(ccTexture2D **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = DAT_002afb80;
  *(undefined4 *)(param_1 + 0x5c) = DAT_002afb80;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)param_1 = 1;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  iVar2 = DAT_002afb84;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  iVar2 = *(int *)(iVar2 + 0x2afb50);
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  if (*(int *)(iVar2 + 0x1e0) == 0) {
    param_1 = (ccMaterial *)0x1;
    CCGFX::LoadShaderSource
              ((char *)(DAT_002afb88 + 0x2afb75),(char *)(DAT_002afb8c + 0x2afbaa),
               *(char ***)(DAT_002afb90 + 0x2afb6a),3,'\x01');
  }
  return CONCAT44(param_1,1);
}


