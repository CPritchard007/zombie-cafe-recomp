/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00120ca0 FUN_00120ca0 */

void FUN_00120ca0(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r4 + 0xc) + unaff_r7),'\x0e');
  if (iVar1 == 0) {
    FUN_0012144e();
  }
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r4 + 0xc) + DAT_00120e1c),'\x10');
  if (iVar1 != 0) {
    FUN_0012144e();
  }
  Store::open(*(Store **)(unaff_r5 + 0x7c),'\x04');
  TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r4 + 0xc) + unaff_r7),'*',true);
  FUN_00121370();
  return;
}


