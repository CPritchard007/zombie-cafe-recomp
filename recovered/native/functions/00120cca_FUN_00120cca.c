/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00120cca FUN_00120cca */

void FUN_00120cca(Store *param_1,uchar param_2)

{
  int unaff_r4;
  int unaff_r7;
  
  Store::open(param_1,param_2);
  TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r4 + 0xc) + unaff_r7),'*',true);
  FUN_00121370();
  return;
}


