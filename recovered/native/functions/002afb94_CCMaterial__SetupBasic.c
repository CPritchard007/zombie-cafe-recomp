/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afb94 CCMaterial::SetupBasic */

/* CCMaterial::SetupBasic(ccMaterial*) */

undefined8 CCMaterial::SetupBasic(ccMaterial *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  ccMaterial *pcVar4;
  
  iVar1 = DAT_002afc10;
  *(undefined4 *)param_1 = 0;
  piVar3 = *(int **)(iVar1 + 0x2afba0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar2 = DAT_002afc14;
  if (*piVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_002afc14;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    uVar2 = DAT_002afc18;
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
    pcVar4 = (ccMaterial *)piVar3[0x77];
    if (pcVar4 == (ccMaterial *)0x0) {
      CCGFX::LoadShaderSource
                ((char *)(DAT_002afc1c + 0x2afc50),
                 (char *)(SetupSimpleOnePointLight + DAT_002afc20 + 5),
                 *(char ***)(DAT_002afc24 + 0x2afbfe),2,'\0');
      param_1 = pcVar4;
    }
  }
  return CONCAT44(param_1,1);
}


