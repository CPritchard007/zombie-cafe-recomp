/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ea6fc LotteryFeaturedDialog::~LotteryFeaturedDialog */

/* LotteryFeaturedDialog::~LotteryFeaturedDialog() */

void __thiscall LotteryFeaturedDialog::~LotteryFeaturedDialog(LotteryFeaturedDialog *this)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  Character *this_00;
  int iVar4;
  int *piVar5;
  FontManager *pFVar6;
  int *piVar7;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_001ea904 + 0x1ea708;
  piVar2 = *(int **)(iVar4 + DAT_001ea908);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar4 + DAT_001ea90c) + 8;
  puVar3 = *(undefined4 **)(iVar4 + DAT_001ea910);
  pFVar6 = (FontManager *)*puVar3;
  iVar1 = SmDev();
  FontManager::delFont(pFVar6,*(int *)(DAT_001ea914 + iVar1 * 4 + 0x1ea756));
  pFVar6 = (FontManager *)*puVar3;
  iVar1 = SmDev();
  FontManager::delFont(pFVar6,*(int *)(DAT_001ea918 + iVar1 * 4 + 0x1ea784));
  if (*(int **)(*(int *)(this + 0x70) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x78) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x78) + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x80) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x80) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int *)(this + 0x84) != 0) {
    L_PrintLog((char *)(DAT_001ea91c + 0x1ea7c6),(char *)(DAT_001ea920 + 0x1ea7c8));
    piVar7 = *(int **)(iVar4 + DAT_001ea924);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_001ea928 + 0x1ea7fa),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(DAT_001ea92c + 0x1ea806),acStack_11c);
  }
  if (*(int *)(this + 0x88) != 0) {
    L_PrintLog((char *)(DAT_001ea930 + 0x1ea81a),(char *)(DAT_001ea934 + 0x1ea81c));
    piVar5 = *(int **)(iVar4 + DAT_001ea924);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar5,*(TrueTypeTextElement **)(this + 0x88));
    piVar7 = *(int **)(this + 0x88);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_001ea938 + 0x1ea84e),*(int *)(*piVar5 + 4) + 1);
    L_PrintLog((char *)(DAT_001ea93c + 0x1ea85a),acStack_11c);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  *(undefined4 *)(this + 0xa8) = 0;
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  *(undefined4 *)(this + 0xa4) = 0;
  this_00 = *(Character **)(this + 0x9c);
  if (this_00 != (Character *)0x0) {
    Character::~Character(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
    if (*(int **)(this + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x8c) + 4))();
    }
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


