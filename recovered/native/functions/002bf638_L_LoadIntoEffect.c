/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf638 L_LoadIntoEffect */

/* L_LoadIntoEffect(char const*, SSoundEffect*) */

void L_LoadIntoEffect(char *param_1,SSoundEffect *param_2)

{
  sprintf((char *)(param_2 + 0x14),param_1);
  javaLoadEffect(*(undefined4 *)(param_2 + 0x114),param_1);
  return;
}


