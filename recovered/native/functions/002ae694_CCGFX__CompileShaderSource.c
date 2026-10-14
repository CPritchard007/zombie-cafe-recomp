/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae694 CCGFX::CompileShaderSource */

/* CCGFX::CompileShaderSource(unsigned int*, unsigned int, char const*) */

bool CCGFX::CompileShaderSource(uint *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  char *local_1c [2];
  int local_14 [2];
  
  local_1c[0] = param_3;
  uVar1 = glCreateShader(param_2);
  *param_1 = uVar1;
  glShaderSource(uVar1,1,local_1c,0);
  glCompileShader(*param_1);
  glGetShaderiv(*param_1,DAT_002ae6d4,local_14);
  if (local_14[0] == 0) {
    glDeleteShader(*param_1);
  }
  return local_14[0] != 0;
}


