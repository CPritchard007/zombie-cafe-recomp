/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017abf4 GameStatePowerup::unSelectCharacter */

/* GameStatePowerup::unSelectCharacter() */

void __thiscall GameStatePowerup::unSelectCharacter(GameStatePowerup *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0017ae48 + 0x17ac00;
  piVar3 = *(int **)(iVar1 + DAT_0017ae4c);
  local_1c = *piVar3;
  if (*(CharacterInstance **)(this + 0x24) != (CharacterInstance *)0x0) {
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x24),'\x1c','\x01',true);
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  if (*(int *)(this + 0x28) != 0) {
    L_PrintLog((char *)(DAT_0017ae50 + 0x17ac2e),(char *)(DAT_0017ae54 + 0x17ac30));
    piVar2 = *(int **)(iVar1 + DAT_0017ae58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x28));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x28));
    if (*(int **)(this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x28) + 4))();
    }
    *(undefined4 *)(this + 0x28) = 0;
    sprintf(acStack_11c,(char *)(DAT_0017ae5c + 0x17ac64),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017ae60 + 0x17ac70),acStack_11c);
  }
  if (*(int *)(this + 0x2c) != 0) {
    L_PrintLog((char *)(DAT_0017ae64 + 0x17ac80),(char *)(DAT_0017ae68 + 0x17ac82));
    piVar2 = *(int **)(iVar1 + DAT_0017ae58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x2c));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x2c));
    if (*(int **)(this + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2c) + 4))();
    }
    *(undefined4 *)(this + 0x2c) = 0;
    sprintf(acStack_11c,(char *)(DAT_0017ae6c + 0x17acb6),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017ae70 + 0x17acc2),acStack_11c);
  }
  if (*(int *)(this + 0x30) != 0) {
    L_PrintLog((char *)(DAT_0017ae74 + 0x17acd2),(char *)(DAT_0017ae78 + 0x17acd4));
    piVar2 = *(int **)(iVar1 + DAT_0017ae58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x30));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x30));
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
    sprintf(acStack_11c,(char *)(DAT_0017ae7c + 0x17ad08),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017ae80 + 0x17ad14),acStack_11c);
  }
  if (*(int *)(this + 0x34) != 0) {
    L_PrintLog((char *)(DAT_0017ae84 + 0x17ad24),(char *)(DAT_0017ae88 + 0x17ad26));
    piVar2 = *(int **)(iVar1 + DAT_0017ae58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x34));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x34));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
    sprintf(acStack_11c,(char *)(DAT_0017ae8c + 0x17ad5a),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017ae90 + 0x17ad66),acStack_11c);
  }
  if (*(int *)(this + 0x38) != 0) {
    L_PrintLog((char *)(DAT_0017ae94 + 0x17ad76),(char *)(DAT_0017ae98 + 0x17ad78));
    piVar2 = *(int **)(iVar1 + DAT_0017ae58);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x38));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x38));
    if (*(int **)(this + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x38) + 4))();
    }
    *(undefined4 *)(this + 0x38) = 0;
    sprintf(acStack_11c,(char *)(DAT_0017ae9c + 0x17adac),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0017aea0 + 0x17adb8),acStack_11c);
  }
  if (*(int *)(this + 0xdc) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xdc) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xdc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xdc) + 4))();
    }
    *(undefined4 *)(this + 0xdc) = 0;
  }
  if (*(int *)(this + 0xe0) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xe0) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xe0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xe0) + 4))();
    }
    *(undefined4 *)(this + 0xe0) = 0;
  }
  (**(code **)(**(int **)(this + 0x108) + 0x20))(*(int **)(this + 0x108),0);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


