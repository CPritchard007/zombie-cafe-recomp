/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af7d4 CCMaterial::SetupSimpleOverlay */

/* CCMaterial::SetupSimpleOverlay(ccMaterial*, ccTexture2D const*) */

undefined8 CCMaterial::SetupSimpleOverlay(ccMaterial *param_1,ccTexture2D *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  piVar2 = *(int **)(DAT_002af85c + 0x2af7e8);
  *(undefined4 *)param_1 = 5;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 2;
  iVar3 = *piVar2;
  *(ccTexture2D **)(param_1 + 4) = param_2;
  uVar1 = DAT_002af860;
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_002af860;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = DAT_002af864;
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
    if (piVar2[0x7c] == 0) {
      param_1 = (ccMaterial *)0x5;
      CCGFX::LoadShaderSource
                ((char *)(DAT_002af870 + 0x2af84c),(char *)(DAT_002af868 + 0x2af898),
                 *(char ***)(DAT_002af86c + 0x2af84a),3,'\x05');
    }
  }
  return CONCAT44(param_1,1);
}


