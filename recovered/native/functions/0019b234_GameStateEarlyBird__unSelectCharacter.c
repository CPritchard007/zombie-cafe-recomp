/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019b234 GameStateEarlyBird::unSelectCharacter */

/* GameStateEarlyBird::unSelectCharacter() */

void __thiscall GameStateEarlyBird::unSelectCharacter(GameStateEarlyBird *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0019b3d4 + 0x19b240;
  piVar3 = *(int **)(iVar1 + DAT_0019b3d8);
  local_1c = *piVar3;
  if (*(CharacterInstance **)(this + 0x24) != (CharacterInstance *)0x0) {
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x24),'\x1c','\x01',true);
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  if (*(int *)(this + 0x28) != 0) {
    L_PrintLog((char *)(DAT_0019b3dc + 0x19b26e),(char *)(DAT_0019b3e0 + 0x19b270));
    piVar2 = *(int **)(iVar1 + DAT_0019b3e4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x28));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x28));
    if (*(int **)(this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x28) + 4))();
    }
    *(undefined4 *)(this + 0x28) = 0;
    sprintf(acStack_11c,(char *)(DAT_0019b3e8 + 0x19b2a4),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0019b3ec + 0x19b2b0),acStack_11c);
  }
  if (*(int *)(this + 0x2c) != 0) {
    L_PrintLog((char *)(DAT_0019b3f0 + 0x19b2c0),(char *)(DAT_0019b3f4 + 0x19b2c2));
    piVar2 = *(int **)(iVar1 + DAT_0019b3e4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x2c));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x2c));
    if (*(int **)(this + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2c) + 4))();
    }
    *(undefined4 *)(this + 0x2c) = 0;
    sprintf(acStack_11c,(char *)(DAT_0019b3f8 + 0x19b2f6),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0019b3fc + 0x19b302),acStack_11c);
  }
  if (*(int *)(this + 0x30) != 0) {
    L_PrintLog((char *)(DAT_0019b400 + 0x19b312),(char *)(DAT_0019b404 + 0x19b314));
    piVar2 = *(int **)(iVar1 + DAT_0019b3e4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x30));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x30));
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
    sprintf(acStack_11c,(char *)(DAT_0019b408 + 0x19b348),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0019b40c + 0x19b354),acStack_11c);
  }
  if (*(int *)(this + 0x34) != 0) {
    L_PrintLog((char *)(DAT_0019b410 + 0x19b364),(char *)(DAT_0019b414 + 0x19b366));
    piVar2 = *(int **)(iVar1 + DAT_0019b3e4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x34));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x34));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
    sprintf(acStack_11c,(char *)(DAT_0019b418 + 0x19b39a),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0019b41c + 0x19b3a6),acStack_11c);
  }
  (**(code **)(**(int **)(this + 0xec) + 0x20))(*(int **)(this + 0xec),0);
  (**(code **)(**(int **)(this + 0xf4) + 0x20))(*(int **)(this + 0xf4),0);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


