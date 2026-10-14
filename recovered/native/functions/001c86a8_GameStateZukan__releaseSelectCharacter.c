/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c86a8 GameStateZukan::releaseSelectCharacter */

/* GameStateZukan::releaseSelectCharacter() */

void __thiscall GameStateZukan::releaseSelectCharacter(GameStateZukan *this)

{
  int *piVar1;
  int *piVar2;
  Character *this_00;
  GameStateZukan *pGVar3;
  int iVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_001c886c + 0x1c86b4;
  piVar2 = *(int **)(iVar4 + DAT_001c8870);
  local_1c = *piVar2;
  if (*(int *)(this + 0xb0) != 0) {
    this_00 = *(Character **)(*(int *)(this + 0xb0) + 0x8c);
    if (this_00 != (Character *)0x0) {
      Character::~Character(this_00);
      operator_delete(this_00);
    }
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb0) + 4))();
    }
    *(undefined4 *)(this + 0xb0) = 0;
    if (*(int *)(this + 0xb4) != 0) {
      (**(code **)(**(int **)(this + 0x1c) + 0x34))();
      piVar1 = *(int **)(this + 0xb4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined4 *)(this + 0xb4) = 0;
    }
    if (*(int *)(this + 0xb8) != 0) {
      (**(code **)(**(int **)(this + 0x1c) + 0x34))();
      piVar1 = *(int **)(this + 0xb8);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined4 *)(this + 0xb8) = 0;
    }
    pGVar3 = this + 0x38;
    do {
      if (*(int *)pGVar3 != 0) {
        (**(code **)(**(int **)(this + 0x1c) + 0x34))();
        if (*(int **)(*(int *)pGVar3 + 100) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)pGVar3 + 100) + 4))();
        }
        if (*(int **)pGVar3 != (int *)0x0) {
          (**(code **)(**(int **)pGVar3 + 4))();
        }
        *(undefined4 *)pGVar3 = 0;
      }
      pGVar3 = pGVar3 + 4;
    } while (pGVar3 != this + 0x54);
    if (*(int *)(this + 0x54) != 0) {
      (**(code **)(**(int **)(this + 0x1c) + 0x34))();
      if (*(int **)(*(int *)(this + 0x54) + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(this + 0x54) + 100) + 4))();
      }
      if (*(int **)(this + 0x54) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x54) + 4))();
      }
      *(undefined4 *)(this + 0x54) = 0;
    }
    pGVar3 = this + 0xbc;
    if (*(int *)pGVar3 != 0) {
      L_PrintLog((char *)(DAT_001c8874 + 0x1c87b8),(char *)(DAT_001c8878 + 0x1c87ba));
      piVar1 = *(int **)(iVar4 + DAT_001c887c);
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
      (**(code **)(**(int **)(this + 0x1c) + 0x34))(*(int **)(this + 0x1c),*(undefined4 *)pGVar3);
      if (*(int **)pGVar3 != (int *)0x0) {
        (**(code **)(**(int **)pGVar3 + 4))();
      }
      *(undefined4 *)(this + 0xbc) = 0;
      sprintf(acStack_11c,(char *)(DAT_001c8880 + 0x1c87f2),*(int *)(*piVar1 + 4) + 1);
      L_PrintLog((char *)(DAT_001c8884 + 0x1c87fe),acStack_11c);
    }
    pGVar3 = this + 0xc0;
    if (*(int *)pGVar3 != 0) {
      L_PrintLog((char *)(DAT_001c8888 + 0x1c8812),(char *)(DAT_001c888c + 0x1c8814));
      piVar1 = *(int **)(iVar4 + DAT_001c887c);
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)pGVar3);
      (**(code **)(**(int **)(this + 0x1c) + 0x34))(*(int **)(this + 0x1c),*(undefined4 *)pGVar3);
      if (*(int **)pGVar3 != (int *)0x0) {
        (**(code **)(**(int **)pGVar3 + 4))();
      }
      *(undefined4 *)(this + 0xc0) = 0;
      sprintf(acStack_11c,(char *)(DAT_001c8890 + 0x1c884a),*(int *)(*piVar1 + 4) + 1);
      L_PrintLog((char *)(DAT_001c8894 + 0x1c8856),acStack_11c);
    }
  }
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


