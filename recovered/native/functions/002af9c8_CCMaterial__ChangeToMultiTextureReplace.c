/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af9c8 CCMaterial::ChangeToMultiTextureReplace */

/* CCMaterial::ChangeToMultiTextureReplace(ccMaterial*) */

undefined8 CCMaterial::ChangeToMultiTextureReplace(ccMaterial *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = DAT_002afa3c;
  *(undefined4 *)param_1 = 7;
  uVar2 = DAT_002afa40;
  piVar3 = *(int **)(iVar1 + 0x2af9d4);
  if (*piVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_002afa40;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    uVar2 = DAT_002afa44;
    *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
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
    if (piVar3[0x82] == 0) {
      param_1 = (ccMaterial *)0xb;
      CCGFX::LoadShaderSource
                ((char *)(DAT_002afa48 + 0x2afa37),(char *)(DAT_002afa4c + 0x2afa99),
                 *(char ***)(DAT_002afa50 + 0x2afa2a),5,'\v');
    }
  }
  return CONCAT44(param_1,1);
}


