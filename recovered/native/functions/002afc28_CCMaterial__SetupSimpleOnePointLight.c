/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afc28 CCMaterial::SetupSimpleOnePointLight */

/* CCMaterial::SetupSimpleOnePointLight(ccMaterial*, ccTexture2D const*) */

undefined8 CCMaterial::SetupSimpleOnePointLight(ccMaterial *param_1,ccTexture2D *param_2)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)param_1 = 10;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = DAT_002afc7c;
  *(undefined4 *)(param_1 + 0xc) = 1;
  piVar2 = *(int **)(iVar1 + 0x2afc44);
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  iVar1 = *piVar2;
  *(ccTexture2D **)(param_1 + 4) = param_2;
  if ((iVar1 == 1) && (piVar2[0x84] == 0)) {
    param_1 = (ccMaterial *)&DAT_0000000d;
    CCGFX::LoadShaderSource
              (&UNK_002afc7b + DAT_002afc80,(char *)((int)&DAT_002afc84 + DAT_002afc84),
               *(char ***)(DAT_002afc88 + 0x2afc6a),4,'\r');
  }
  return CONCAT44(param_1,1);
}


