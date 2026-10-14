/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00157ff8 GameStateGatya::unSelectCharacter */

/* GameStateGatya::unSelectCharacter() */

void __thiscall GameStateGatya::unSelectCharacter(GameStateGatya *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_001581f0 + 0x158004;
  piVar3 = *(int **)(iVar1 + DAT_001581f4);
  local_1c = *piVar3;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  if (*(int *)(this + 0x40) != 0) {
    L_PrintLog((char *)(DAT_001581f8 + 0x158022),(char *)(DAT_001581fc + 0x158024));
    piVar2 = *(int **)(iVar1 + DAT_00158200);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x40));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x40));
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
    *(undefined4 *)(this + 0x40) = 0;
    sprintf(acStack_11c,(char *)(DAT_00158204 + 0x158058),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00158208 + 0x158064),acStack_11c);
  }
  if (*(int *)(this + 0x44) != 0) {
    L_PrintLog((char *)(DAT_0015820c + 0x158074),(char *)(DAT_00158210 + 0x158076));
    piVar2 = *(int **)(iVar1 + DAT_00158200);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x44));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x44));
    if (*(int **)(this + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x44) + 4))();
    }
    *(undefined4 *)(this + 0x44) = 0;
    sprintf(acStack_11c,(char *)(DAT_00158214 + 0x1580aa),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00158218 + 0x1580b6),acStack_11c);
  }
  if (*(int *)(this + 0x48) != 0) {
    L_PrintLog((char *)(DAT_0015821c + 0x1580c6),(char *)(DAT_00158220 + 0x1580c8));
    piVar2 = *(int **)(iVar1 + DAT_00158200);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x48));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x48));
    if (*(int **)(this + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x48) + 4))();
    }
    *(undefined4 *)(this + 0x48) = 0;
    sprintf(acStack_11c,(char *)(DAT_00158224 + 0x1580fc),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00158228 + 0x158108),acStack_11c);
  }
  if (*(int *)(this + 0x4c) != 0) {
    L_PrintLog((char *)(DAT_0015822c + 0x158118),(char *)(DAT_00158230 + 0x15811a));
    piVar2 = *(int **)(iVar1 + DAT_00158200);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x4c));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x4c));
    if (*(int **)(this + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x4c) + 4))();
    }
    *(undefined4 *)(this + 0x4c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00158234 + 0x15814e),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00158238 + 0x15815a),acStack_11c);
  }
  if (*(int *)(this + 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x200) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x200) + 100) + 4))();
    }
    if (*(int **)(this + 0x200) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x200) + 4))();
    }
    *(undefined4 *)(this + 0x200) = 0;
  }
  if (*(int *)(this + 0x50) != 0) {
    L_PrintLog((char *)(DAT_0015823c + 0x15819a),(char *)(DAT_00158240 + 0x15819c));
    piVar2 = *(int **)(iVar1 + DAT_00158200);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x50));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x50));
    if (*(int **)(this + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x50) + 4))();
    }
    *(undefined4 *)(this + 0x50) = 0;
    sprintf(acStack_11c,(char *)(DAT_00158244 + 0x1581d0),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00158248 + 0x1581dc),acStack_11c);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


