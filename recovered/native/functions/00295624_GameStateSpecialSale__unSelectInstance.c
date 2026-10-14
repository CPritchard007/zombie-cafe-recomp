/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00295624 GameStateSpecialSale::unSelectInstance */

/* GameStateSpecialSale::unSelectInstance() */

void __thiscall GameStateSpecialSale::unSelectInstance(GameStateSpecialSale *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_00295864 + 0x295630;
  piVar3 = *(int **)(iVar1 + DAT_00295868);
  local_1c = *piVar3;
  if ((*(CharacterInstance **)(this + 0x28) != (CharacterInstance *)0x0) &&
     (this[*(int *)(this + 0x24) + 0x3b0] == (GameStateSpecialSale)0x0)) {
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x28),'\x01','\x01',true);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  if (*(int *)(this + 0x30) != 0) {
    L_PrintLog((char *)(DAT_0029586c + 0x29566e),(char *)(DAT_00295870 + 0x295670));
    piVar2 = *(int **)(iVar1 + DAT_00295874);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x30));
    (**(code **)(**(int **)(this + 0x18) + 0x34))
              (*(int **)(this + 0x18),*(undefined4 *)(this + 0x30));
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
    sprintf(acStack_11c,(char *)(DAT_00295878 + 0x2956a4),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0029587c + 0x2956b0),acStack_11c);
  }
  if (*(int *)(this + 0x34) != 0) {
    L_PrintLog((char *)(DAT_00295880 + 0x2956c0),(char *)(DAT_00295884 + 0x2956c2));
    piVar2 = *(int **)(iVar1 + DAT_00295874);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x34));
    (**(code **)(**(int **)(this + 0x18) + 0x34))
              (*(int **)(this + 0x18),*(undefined4 *)(this + 0x34));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
    sprintf(acStack_11c,(char *)(DAT_00295888 + 0x2956f6),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0029588c + 0x295702),acStack_11c);
  }
  if (*(int *)(this + 0x38) != 0) {
    L_PrintLog((char *)(DAT_00295890 + 0x295712),(char *)(DAT_00295894 + 0x295714));
    piVar2 = *(int **)(iVar1 + DAT_00295874);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x38));
    (**(code **)(**(int **)(this + 0x18) + 0x34))
              (*(int **)(this + 0x18),*(undefined4 *)(this + 0x38));
    if (*(int **)(this + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x38) + 4))();
    }
    *(undefined4 *)(this + 0x38) = 0;
    sprintf(acStack_11c,(char *)(DAT_00295898 + 0x295748),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0029589c + 0x295754),acStack_11c);
  }
  if (*(int *)(this + 0x3c) != 0) {
    L_PrintLog((char *)(DAT_002958a0 + 0x295764),(char *)(DAT_002958a4 + 0x295766));
    piVar2 = *(int **)(iVar1 + DAT_00295874);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x3c));
    (**(code **)(**(int **)(this + 0x18) + 0x34))
              (*(int **)(this + 0x18),*(undefined4 *)(this + 0x3c));
    if (*(int **)(this + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x3c) + 4))();
    }
    *(undefined4 *)(this + 0x3c) = 0;
    sprintf(acStack_11c,(char *)(DAT_002958a8 + 0x29579a),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_002958ac + 0x2957a6),acStack_11c);
  }
  if (*(int *)(this + 0x40) != 0) {
    L_PrintLog((char *)(DAT_002958b0 + 0x2957b6),(char *)(DAT_002958b4 + 0x2957b8));
    piVar2 = *(int **)(iVar1 + DAT_00295874);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x40));
    (**(code **)(**(int **)(this + 0x18) + 0x34))
              (*(int **)(this + 0x18),*(undefined4 *)(this + 0x40));
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
    *(undefined4 *)(this + 0x40) = 0;
    sprintf(acStack_11c,(char *)(DAT_002958b8 + 0x2957ec),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_002958bc + 0x2957f8),acStack_11c);
  }
  if (*(int *)(this + 0x5c) != 0) {
    (**(code **)(**(int **)(this + 0x18) + 0x34))();
    if (*(int **)(*(int *)(this + 0x5c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x5c) + 100) + 4))();
    }
    if (*(int **)(this + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x5c) + 4))();
    }
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    (**(code **)(**(int **)(this + 0x18) + 0x34))();
    if (*(int **)(*(int *)(this + 0x60) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x60) + 100) + 4))();
    }
    if (*(int **)(this + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x60) + 4))();
    }
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


