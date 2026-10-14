/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001712b4 GameStateMeetLocker::unSelectCharacter */

/* GameStateMeetLocker::unSelectCharacter() */

void __thiscall GameStateMeetLocker::unSelectCharacter(GameStateMeetLocker *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_00171564 + 0x1712c0;
  piVar3 = *(int **)(iVar1 + DAT_00171568);
  local_1c = *piVar3;
  if (*(CharacterInstance **)(this + 0x2c) != (CharacterInstance *)0x0) {
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x2c),'\x1c','\x01',true);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  if (*(int *)(this + 0x30) != 0) {
    L_PrintLog((char *)(DAT_0017156c + 0x1712ee),(char *)(DAT_00171570 + 0x1712f0));
    piVar2 = *(int **)(iVar1 + DAT_00171574);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x30));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x30));
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
    sprintf(acStack_11c,(char *)(DAT_00171578 + 0x171324),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017157c + 0x171330),acStack_11c);
  }
  if (*(int *)(this + 0x34) != 0) {
    L_PrintLog((char *)(DAT_00171580 + 0x171340),(char *)(DAT_00171584 + 0x171342));
    piVar2 = *(int **)(iVar1 + DAT_00171574);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x34));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x34));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
    sprintf(acStack_11c,(char *)(DAT_00171588 + 0x171376),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017158c + 0x171382),acStack_11c);
  }
  if (*(int *)(this + 0x3c) != 0) {
    L_PrintLog((char *)(DAT_00171590 + 0x171392),(char *)(DAT_00171594 + 0x171394));
    piVar2 = *(int **)(iVar1 + DAT_00171574);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x3c));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x3c));
    if (*(int **)(this + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x3c) + 4))();
    }
    *(undefined4 *)(this + 0x3c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00171598 + 0x1713c8),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017159c + 0x1713d4),acStack_11c);
  }
  if (*(int *)(this + 0x40) != 0) {
    L_PrintLog((char *)(DAT_001715a0 + 0x1713e4),(char *)(DAT_001715a4 + 0x1713e6));
    piVar2 = *(int **)(iVar1 + DAT_00171574);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x40));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x40));
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
    *(undefined4 *)(this + 0x40) = 0;
    sprintf(acStack_11c,(char *)(DAT_001715a8 + 0x17141a),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_001715ac + 0x171426),acStack_11c);
  }
  if (*(int *)(this + 0x44) != 0) {
    L_PrintLog((char *)(DAT_001715b0 + 0x171436),(char *)(DAT_001715b4 + 0x171438));
    piVar2 = *(int **)(iVar1 + DAT_00171574);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x44));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x44));
    if (*(int **)(this + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x44) + 4))();
    }
    *(undefined4 *)(this + 0x44) = 0;
    sprintf(acStack_11c,(char *)(DAT_001715b8 + 0x17146c),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_001715bc + 0x171478),acStack_11c);
  }
  (**(code **)(**(int **)(this + 0x90) + 0x20))(*(int **)(this + 0x90),0);
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
  (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x80) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x80) + 100) + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x84) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x84) + 100) + 4))();
    }
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0x88) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
  }
  (**(code **)(**(int **)(this + DAT_001715c0) + 0x20))(*(int **)(this + DAT_001715c0),0);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


