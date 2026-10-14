/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b541c L_CheckGLError */

/* L_CheckGLError(char const*) */

void L_CheckGLError(char *param_1)

{
  do {
    param_1 = (char *)glGetError(param_1);
  } while (param_1 != (char *)0x0);
  return;
}


