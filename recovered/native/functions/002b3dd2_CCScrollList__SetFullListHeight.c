/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3dd2 CCScrollList::SetFullListHeight */

/* CCScrollList::SetFullListHeight(ccScrollList*, float) */

void CCScrollList::SetFullListHeight(ccScrollList *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 in_r1;
  
  *(undefined4 *)(param_1 + 8) = in_r1;
  uVar1 = __subsf3(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  uVar1 = __subsf3(in_r1,uVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


