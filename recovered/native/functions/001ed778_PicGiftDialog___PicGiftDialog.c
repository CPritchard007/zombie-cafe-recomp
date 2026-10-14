/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ed778 PicGiftDialog::~PicGiftDialog */

/* PicGiftDialog::~PicGiftDialog() */

void __thiscall PicGiftDialog::~PicGiftDialog(PicGiftDialog *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  Character *this_00;
  int iVar6;
  FontManager *pFVar7;
  int *piVar8;
  char acStack_11c [256];
  int local_1c;
  
  iVar6 = DAT_001ed9ac + 0x1ed784;
  local_1c = **(int **)(iVar6 + DAT_001ed9b0);
  pcVar4 = (char *)(DAT_001ed9b4 + 0x1ed78e);
  *(int *)this = *(int *)(iVar6 + DAT_001ed9b8) + 8;
  L_PrintLog((char *)(DAT_001ed9bc + 0x1ed79c),pcVar4);
  puVar5 = *(undefined4 **)(iVar6 + DAT_001ed9c0);
  pFVar7 = (FontManager *)*puVar5;
  iVar2 = SmDev();
  FontManager::delFont(pFVar7,*(int *)(DAT_001ed9c4 + iVar2 * 4 + 0x1ed800));
  pFVar7 = (FontManager *)*puVar5;
  iVar2 = SmDev();
  FontManager::delFont(pFVar7,*(int *)(DAT_001ed9c8 + iVar2 * 4 + 0x1ed82e));
  if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x78) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x78) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x7c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 100) + 4))();
  }
  L_PrintLog((char *)(DAT_001ed9cc + 0x1ed800),(char *)(DAT_001ed9d0 + 0x1ed802));
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x84) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x84) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int *)(this + 0x88) != 0) {
    L_PrintLog((char *)(DAT_001ed9d4 + 0x1ed85c),(char *)(DAT_001ed9d8 + 0x1ed85e));
    piVar8 = *(int **)(iVar6 + DAT_001ed9dc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar8,*(TrueTypeTextElement **)(this + 0x88));
    piVar3 = *(int **)(this + 0x88);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_001ed9e0 + 0x1ed890),*(int *)(*piVar8 + 4) + 1);
    L_PrintLog((char *)(DAT_001ed9e4 + 0x1ed89c),acStack_11c);
  }
  if (*(int *)(this + 0x8c) != 0) {
    L_PrintLog((char *)(DAT_001ed9e8 + 0x1ed8b0),(char *)(DAT_001ed9ec + 0x1ed8b2));
    piVar8 = *(int **)(iVar6 + DAT_001ed9dc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar8,*(TrueTypeTextElement **)(this + 0x8c));
    piVar3 = *(int **)(this + 0x8c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
    sprintf(acStack_11c,(char *)(DAT_001ed9f0 + 0x1ed8e4),*(int *)(*piVar8 + 4) + 1);
    L_PrintLog((char *)(DAT_001ed9f4 + 0x1ed8f0),acStack_11c);
  }
  L_PrintLog((char *)(DAT_001ed9f8 + 0x1ed8fa),(char *)(DAT_001ed9fc + 0x1ed8fc));
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  *(undefined4 *)(this + 200) = 0;
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  iVar1 = DAT_001eda04;
  iVar2 = DAT_001eda00;
  *(undefined4 *)(this + 0xc4) = 0;
  L_PrintLog((char *)(iVar2 + 0x1ed934),(char *)(iVar1 + 0x1ed936));
  this_00 = *(Character **)(this + 0xb8);
  if (this_00 != (Character *)0x0) {
    Character::~Character(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 0xb8) = 0;
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
    *(undefined4 *)(this + 0xbc) = 0;
  }
  L_PrintLog((char *)(DAT_001eda08 + 0x1ed976),(char *)(DAT_001eda0c + 0x1ed978));
  if ((**(int **)(this + 0x70) == 0x10) || (**(int **)(this + 0x70) == 0x17)) {
    if (*(int **)(this + 0xc0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xc0) + 4))();
      *(undefined4 *)(this + 0xc0) = 0;
    }
    piVar3 = *(int **)(this + 0x98);
    if (piVar3 == (int *)0x0) goto LAB_001eda3e;
LAB_001eda30:
    (**(code **)(*piVar3 + 4))();
  }
  else {
    if (*(int *)(this + 0x98) == 0) goto LAB_001eda3e;
    piVar3 = *(int **)(*(int *)(this + 0x98) + 100);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    piVar3 = *(int **)(this + 0x98);
    if (piVar3 != (int *)0x0) goto LAB_001eda30;
  }
  *(undefined4 *)(this + 0x98) = 0;
LAB_001eda3e:
  L_PrintLog((char *)(DAT_001edb28 + 0x1eda46),(char *)(DAT_001edb2c + 0x1eda48));
  if (*(int *)(this + 0x9c) != 0) {
    piVar3 = *(int **)(*(int *)(this + 0x9c) + 100);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    if (*(int **)(this + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9c) + 4))();
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  L_PrintLog((char *)(DAT_001edb30 + 0x1eda80),(char *)(DAT_001edb34 + 0x1eda82));
  if (*(int *)(this + 0x90) != 0) {
    L_PrintLog((char *)(DAT_001edb38 + 0x1eda96),(char *)(DAT_001edb3c + 0x1eda98));
    piVar8 = *(int **)(iVar6 + DAT_001edb40);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar8,*(TrueTypeTextElement **)(this + 0x90));
    piVar3 = *(int **)(this + 0x90);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
    sprintf(acStack_11c,(char *)(DAT_001edb44 + 0x1edaca),*(int *)(*piVar8 + 4) + 1);
    L_PrintLog((char *)(DAT_001edb48 + 0x1edad6),acStack_11c);
  }
  L_PrintLog((char *)(DAT_001edb4c + 0x1edae0),(char *)(DAT_001edb50 + 0x1edae2));
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  L_PrintLog((char *)(DAT_001edb54 + 0x1edafc),(char *)(DAT_001edb58 + 0x1edafe));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c == **(int **)(iVar6 + DAT_001edb5c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


