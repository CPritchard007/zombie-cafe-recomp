/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af490 CCMaterial::SetupGenericShader */

/* CCMaterial::SetupGenericShader(ccMaterial*, char const*, char const*, unsigned int, char const**,
   unsigned int, ccTexture2D const**) */

void CCMaterial::SetupGenericShader
               (ccMaterial *param_1,char *param_2,char *param_3,uint param_4,char **param_5,
               uint param_6,ccTexture2D **param_7)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int *piVar4;
  ccTexture2D *pcVar5;
  ccMaterial *pcVar6;
  uint uVar7;
  uint uVar8;
  uint local_bc;
  uint local_a4;
  uint local_a0;
  char acStack_9c [128];
  int local_1c;
  
  piVar4 = *(int **)(DAT_002af5d4 + 0x2af4a8);
  uVar7 = 0;
  local_1c = *piVar4;
  if (**(int **)(DAT_002af5d8 + 0x2af4b8) == 1) {
    *(undefined4 *)param_1 = 0xb;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar1 = glCreateProgram();
    pcVar6 = param_1 + 0x94;
    *(undefined4 *)pcVar6 = uVar1;
    iVar2 = CCGFX::CompileShaderSource(&local_a4,DAT_002af5dc,param_2);
    if (iVar2 == 0) {
      pcVar3 = (char *)(DAT_002af5e0 + 0x2af4e6);
    }
    else {
      iVar2 = CCGFX::CompileShaderSource(&local_a0,DAT_002af5e4,param_3);
      if (iVar2 != 0) {
        glAttachShader(*(undefined4 *)pcVar6,local_a4);
        glAttachShader(*(undefined4 *)pcVar6,local_a0);
        uVar7 = extraout_r1;
        for (uVar8 = 0; uVar8 != param_4; uVar8 = uVar8 + 1) {
          pcVar3 = *param_5;
          param_5 = param_5 + 1;
          glBindAttribLocation(*(undefined4 *)pcVar6,uVar8,pcVar3);
          uVar7 = extraout_r1_00;
        }
        iVar2 = CCGFX::LinkProgram(*(CCGFX **)pcVar6,uVar7);
        if (iVar2 == 0) {
          puts((char *)(DAT_002af5ec + 0x2af536));
          if (local_a4 != 0) {
            glDeleteShader();
            local_a4 = 0;
          }
          uVar7 = local_a0;
          if (local_a0 != 0) {
            glDeleteShader(local_a0);
            uVar7 = 0;
          }
        }
        else {
          if (local_a4 != 0) {
            glDeleteShader();
          }
          if (local_a0 != 0) {
            glDeleteShader();
          }
          iVar2 = DAT_002af5f0;
          *(uint *)(param_1 + 0x98) = param_6;
          pcVar6 = param_1;
          for (local_bc = 0; local_bc != param_6; local_bc = local_bc + 1) {
            pcVar5 = *param_7;
            param_7 = param_7 + 1;
            *(ccTexture2D **)(pcVar6 + 4) = pcVar5;
            *(undefined4 *)(pcVar6 + 0xc) = 1;
            *(undefined4 *)(pcVar6 + 0x14) = 1;
            *(undefined4 *)(pcVar6 + 0x1c) = 1;
            snprintf(acStack_9c,0x80,(char *)(iVar2 + 0x2af57e),local_bc);
            uVar1 = glGetUniformLocation(*(undefined4 *)(param_1 + 0x94),acStack_9c);
            *(undefined4 *)(pcVar6 + 0x24) = uVar1;
            pcVar6 = pcVar6 + 4;
          }
          glUseProgram(*(undefined4 *)(param_1 + 0x94));
          uVar7 = 1;
        }
        goto LAB_002af5be;
      }
      pcVar3 = (char *)(DAT_002af5e8 + 0x2af4fa);
    }
    puts(pcVar3);
  }
LAB_002af5be:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


