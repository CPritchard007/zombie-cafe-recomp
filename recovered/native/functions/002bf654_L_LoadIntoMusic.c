/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf654 L_LoadIntoMusic */

/* L_LoadIntoMusic(char const*, SSoundEffect*) */

void L_LoadIntoMusic(char *param_1,SSoundEffect *param_2)

{
  sprintf((char *)(param_2 + 0x14),param_1);
  javaLoadMusic(*(undefined4 *)(param_2 + 0x114),param_1);
  return;
}


