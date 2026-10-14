/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018a258 GameStateRoulette::unSelectFurniture */

/* GameStateRoulette::unSelectFurniture() */

void __thiscall GameStateRoulette::unSelectFurniture(GameStateRoulette *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0018a32c + 0x18a264;
  piVar3 = *(int **)(iVar1 + DAT_0018a330);
  local_1c = *piVar3;
  *(undefined4 *)(this + DAT_0018a334) = 0;
  *(undefined4 *)(this + DAT_0018a338) = 0xffffffff;
  if (*(int *)(this + 0x30) != 0) {
    L_PrintLog((char *)(DAT_0018a33c + 0x18a286),(char *)(DAT_0018a340 + 0x18a288));
    piVar2 = *(int **)(iVar1 + DAT_0018a344);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x30));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x30));
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
    sprintf(acStack_11c,(char *)(DAT_0018a348 + 0x18a2bc),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0018a34c + 0x18a2c8),acStack_11c);
  }
  if (*(int *)(this + 0x34) != 0) {
    L_PrintLog((char *)(DAT_0018a350 + 0x18a2d8),(char *)(DAT_0018a354 + 0x18a2da));
    piVar2 = *(int **)(iVar1 + DAT_0018a344);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x34));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x34));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
    sprintf(acStack_11c,(char *)(DAT_0018a358 + 0x18a30e),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0018a35c + 0x18a31a),acStack_11c);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


