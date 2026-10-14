/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae7bc CCGFX::LoadShader */

/* CCGFX::LoadShader(char const*, char const*, char const**, int, unsigned char) */

void CCGFX::LoadShader(char *param_1,char *param_2,char **param_3,int param_4,uchar param_5)

{
  int iVar1;
  char *__format;
  CCGFX *this;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iStack_4;
  int *piVar9;
  uint *puVar10;
  
  iVar1 = DAT_002ae8ec;
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002ae8ec);
  piVar9 = (int *)(&stack0xffffffec + DAT_002ae8ec);
  puVar10 = (uint *)(&stack0xffffffec + DAT_002ae8ec);
  *(int *)((int)&iStack_4 + DAT_002ae8ec) = param_4;
  uVar7 = (uint)(byte)(&stack0x00000234)[DAT_002ae8ec];
  *(char ***)(&stack0xfffffff8 + DAT_002ae8ec) = param_3;
  *(char **)(&stack0xffffffec + DAT_002ae8ec) = param_1;
  puVar3 = *(undefined4 **)(DAT_002ae8f0 + 0x2ae7d2);
  *(char **)(&stack0xfffffff0 + DAT_002ae8ec) = param_2;
  iVar4 = 0;
  uVar2 = *puVar3;
  *(undefined4 **)(&param_5 + DAT_002ae8ec) = puVar3;
  *(undefined4 *)(&stack0x00000218 + DAT_002ae8ec) = uVar2;
  if (uVar7 < 0xc) {
    uVar2 = glCreateProgram();
    iVar6 = *(int *)(DAT_002ae8f4 + 0x2ae7f0);
    *(uint *)(&stack0xfffffff4 + iVar1) = uVar7 + 0x84;
    iVar5 = iVar6 + (uVar7 + 0x84) * 4;
    *(undefined4 *)(iVar5 + 4) = uVar2;
    iVar4 = CCGetFilePath(&stack0x00000010 + iVar1,0x104,*puVar8,2);
    *piVar9 = iVar6;
    if (iVar4 != 0) {
      iVar4 = CompileShader((uint *)(&stack0x00000008 + iVar1),DAT_002ae8f8,&stack0x00000010 + iVar1
                           );
      if (iVar4 == 0) {
        __format = (char *)(DAT_002ae8fc + 0x2ae820);
      }
      else {
        iVar4 = CCGetFilePath(&stack0x00000114 + iVar1,0x104,
                              *(undefined4 *)(&stack0xfffffff0 + iVar1),2);
        if (iVar4 == 0) goto LAB_002ae8d2;
        iVar4 = CompileShader((uint *)(&stack0x0000000c + iVar1),DAT_002ae900,
                              &stack0x00000114 + iVar1);
        if (iVar4 != 0) {
          printf((char *)(DAT_002ae908 + 0x2ae856),uVar7,*(undefined4 *)(&stack0xfffffff0 + iVar1));
          glAttachShader(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(&stack0x00000008 + iVar1));
          glAttachShader(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(&stack0x0000000c + iVar1));
          puVar3 = *(undefined4 **)(&stack0xfffffff8 + iVar1);
          iVar6 = *(int *)(&stack0xfffffff4 + iVar1);
          for (iVar4 = 0; iVar4 < *(int *)((int)&iStack_4 + iVar1); iVar4 = iVar4 + 1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            glBindAttribLocation(*(undefined4 *)(iVar5 + 4),iVar4,uVar2);
          }
          iVar4 = LinkProgram(*(CCGFX **)(*puVar10 + iVar6 * 4 + 4),*puVar10);
          if (iVar4 == 0) {
            puts((char *)(DAT_002ae90c + 0x2ae898));
            if (*(int *)(&stack0x00000008 + iVar1) != 0) {
              glDeleteShader();
              *(undefined4 *)(&stack0x00000008 + iVar1) = 0;
            }
            this = *(CCGFX **)(&stack0x0000000c + iVar1);
            if (this != (CCGFX *)0x0) {
              this = (CCGFX *)glDeleteShader();
              *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
            }
            Free(this);
            iVar4 = 0;
          }
          else {
            if (*(int *)(&stack0x00000008 + iVar1) != 0) {
              glDeleteShader();
            }
            iVar4 = 1;
            if (*(int *)(&stack0x0000000c + iVar1) != 0) {
              glDeleteShader();
            }
          }
          goto LAB_002ae8d2;
        }
        __format = (char *)(DAT_002ae904 + 0x2ae846);
      }
      iVar4 = 0;
      printf(__format,uVar7);
    }
  }
LAB_002ae8d2:
  if (*(int *)(&stack0x00000218 + iVar1) == **(int **)(&param_5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


