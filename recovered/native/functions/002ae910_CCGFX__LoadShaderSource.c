/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae910 CCGFX::LoadShaderSource */

/* CCGFX::LoadShaderSource(char const*, char const*, char const**, int, unsigned char) */

undefined4
CCGFX::LoadShaderSource(char *param_1,char *param_2,char **param_3,int param_4,uchar param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  CCGFX *this;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_20;
  CCGFX *local_1c [2];
  
  uVar7 = (uint)param_5;
  if (uVar7 < 0xe) {
    uVar1 = glCreateProgram();
    uVar4 = DAT_002ae9f0;
    iVar6 = *(int *)(DAT_002ae9ec + 0x2ae934);
    iVar5 = iVar6 + (uVar7 + 0x76) * 4;
    *(undefined4 *)(iVar5 + 4) = uVar1;
    iVar2 = CompileShaderSource(&local_20,uVar4,param_1);
    if (iVar2 == 0) {
      pcVar3 = (char *)(DAT_002ae9f4 + 0x2ae952);
    }
    else {
      iVar2 = CompileShaderSource((uint *)local_1c,DAT_002ae9f8,param_2);
      if (iVar2 != 0) {
        glAttachShader(*(undefined4 *)(iVar5 + 4),local_20);
        glAttachShader(*(undefined4 *)(iVar5 + 4),local_1c[0]);
        uVar4 = extraout_r1;
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          pcVar3 = *param_3;
          param_3 = param_3 + 1;
          glBindAttribLocation(*(undefined4 *)(iVar5 + 4),iVar2,pcVar3);
          uVar4 = extraout_r1_00;
        }
        iVar2 = LinkProgram(*(CCGFX **)(iVar6 + (uVar7 + 0x76) * 4 + 4),uVar4);
        if (iVar2 == 0) {
          puts((char *)(DAT_002aea00 + 0x2ae9ac));
          if (local_20 != 0) {
            glDeleteShader();
            local_20 = 0;
          }
          this = local_1c[0];
          if (local_1c[0] != (CCGFX *)0x0) {
            this = (CCGFX *)glDeleteShader();
            local_1c[0] = (CCGFX *)0x0;
          }
          Free(this);
          return 0;
        }
        if (local_20 != 0) {
          glDeleteShader();
        }
        if (local_1c[0] == (CCGFX *)0x0) {
          return 1;
        }
        glDeleteShader();
        return 1;
      }
      pcVar3 = (char *)(DAT_002ae9fc + 0x2ae966);
    }
    printf(pcVar3,uVar7);
  }
  return 0;
}


