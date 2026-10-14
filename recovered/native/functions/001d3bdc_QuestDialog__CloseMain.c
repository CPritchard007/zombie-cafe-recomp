/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3bdc QuestDialog::CloseMain */

/* QuestDialog::CloseMain() */

void QuestDialog::CloseMain(void)

{
  int *in_r0;
  float in_s0;
  
  ZombieCafe::playEffect(in_r0[0x18],in_s0);
  (**(code **)(*in_r0 + 0x20))(in_r0,0);
  *(undefined1 *)(in_r0[0x18] + DAT_001d3c1c) = 1;
  (**(code **)(**(int **)(in_r0[0x19] + 0x78) + 0x34))(*(int **)(in_r0[0x19] + 0x78),in_r0);
  *(undefined4 *)(in_r0[0x19] + 0xa8) = 0;
  (**(code **)(*in_r0 + 4))(in_r0);
  return;
}


