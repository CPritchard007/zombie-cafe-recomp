/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3db6 CCScrollList::SetVisibleFrame */

/* CCScrollList::SetVisibleFrame(ccScrollList*, float, float) */

void CCScrollList::SetVisibleFrame(ccScrollList *param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  
  *(undefined4 *)(param_1 + 4) = in_r2;
  *(undefined4 *)param_1 = in_r1;
  uVar1 = __subsf3(in_r1,in_r2);
  uVar1 = __subsf3(*(undefined4 *)(param_1 + 8),uVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


