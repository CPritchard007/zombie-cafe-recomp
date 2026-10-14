/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3ec8 CCScrollList::HandleMouseDown */

/* CCScrollList::HandleMouseDown(ccScrollList*, float) */

void CCScrollList::HandleMouseDown(ccScrollList *param_1,float param_2)

{
  undefined4 in_r1;
  
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = in_r1;
  *(undefined4 *)(param_1 + 0x24) = in_r1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


