/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f9f4c ObjectiveCompleteDialog::backClose */

/* ObjectiveCompleteDialog::backClose() */

void ObjectiveCompleteDialog::backClose(void)

{
  int in_r0;
  float in_s0;
  
  ZombieCafe::playEffect(*(int *)(in_r0 + 0x60),in_s0);
  *(undefined1 *)(in_r0 + 0x14) = 0;
  *(undefined1 *)(*(int *)(in_r0 + 0x60) + DAT_001f9f68) = 1;
  return;
}


