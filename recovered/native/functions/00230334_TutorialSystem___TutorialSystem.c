/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00230334 TutorialSystem::~TutorialSystem */

/* TutorialSystem::~TutorialSystem() */

TutorialSystem * __thiscall TutorialSystem::~TutorialSystem(TutorialSystem *this)

{
  int iVar1;
  TutorialSystem *pTVar2;
  int iVar3;
  
  iVar1 = DAT_00230378;
  for (iVar3 = 0; iVar3 < *(int *)(this + iVar1 + 4) + 1; iVar3 = iVar3 + 1) {
    operator_delete(*(void **)(iVar3 * 4 + *(int *)(this + iVar1 + 8)));
  }
  if (*(void **)(this + iVar1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + iVar1 + 8));
  }
  for (pTVar2 = this + DAT_0023037c; this != pTVar2; pTVar2 = pTVar2 + -0x14) {
    String::~String((String *)(pTVar2 + -0x10));
  }
  return this;
}


