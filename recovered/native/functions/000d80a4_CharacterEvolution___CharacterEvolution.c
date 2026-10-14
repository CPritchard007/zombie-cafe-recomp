/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d80a4 CharacterEvolution::~CharacterEvolution */

/* CharacterEvolution::~CharacterEvolution() */

void __thiscall CharacterEvolution::~CharacterEvolution(CharacterEvolution *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  FontManager *pFVar6;
  int *piVar7;
  char acStack_11c [256];
  int local_1c;
  
  iVar5 = DAT_000d8348 + 0xd80b0;
  piVar2 = *(int **)(iVar5 + DAT_000d834c);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar5 + DAT_000d8350) + 8;
  if (*(int **)(*(int *)(this + 0x90) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x90) + 100) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x98) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x98) + 100) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int *)(this + 0xcc) != 0) {
    L_PrintLog((char *)(DAT_000d8354 + 0xd8126),(char *)(DAT_000d8358 + 0xd8128));
    piVar7 = *(int **)(iVar5 + DAT_000d835c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0xcc));
    piVar1 = *(int **)(this + 0xcc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xcc) = 0;
    sprintf(acStack_11c,(char *)(DAT_000d8360 + 0xd815a),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(DAT_000d8364 + 0xd8166),acStack_11c);
  }
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 4))();
  }
  if (*(int *)(this + 0xd0) != 0) {
    L_PrintLog((char *)(DAT_000d8368 + 0xd818a),(char *)(DAT_000d836c + 0xd818c));
    piVar7 = *(int **)(iVar5 + DAT_000d835c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0xd0));
    piVar1 = *(int **)(this + 0xd0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xd0) = 0;
    sprintf(acStack_11c,(char *)(DAT_000d8370 + 0xd81be),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(DAT_000d8374 + 0xd81ca),acStack_11c);
  }
  if (*(int *)(this + 0xd4) != 0) {
    L_PrintLog((char *)(DAT_000d8378 + 0xd81de),(char *)(DAT_000d837c + 0xd81e0));
    piVar7 = *(int **)(iVar5 + DAT_000d835c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0xd4));
    piVar1 = *(int **)(this + 0xd4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xd4) = 0;
    sprintf(acStack_11c,(char *)(DAT_000d8380 + 0xd8212),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(DAT_000d8384 + 0xd821e),acStack_11c);
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xc4) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xc4) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int *)(this + 0x9c) != 0) {
    L_PrintLog((char *)(DAT_000d8388 + 0xd8298),(char *)(DAT_000d838c + 0xd829a));
    piVar7 = *(int **)(iVar5 + DAT_000d835c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0x9c));
    piVar1 = *(int **)(this + 0x9c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x9c) = 0;
    sprintf(acStack_11c,(char *)(DAT_000d8390 + 0xd82cc),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(DAT_000d8394 + 0xd82d8),acStack_11c);
  }
  iVar3 = 0;
  do {
    if (*(int **)(this + iVar3 + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar3 + 0xa8) + 4))();
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x1c);
  puVar4 = *(undefined4 **)(iVar5 + DAT_000d8398);
  pFVar6 = (FontManager *)*puVar4;
  iVar5 = SmDev();
  FontManager::delFont(pFVar6,*(int *)((int)&DAT_000d8360 + DAT_000d839c + iVar5 * 4));
  pFVar6 = (FontManager *)*puVar4;
  iVar5 = SmDev();
  FontManager::delFont(pFVar6,*(int *)((int)&DAT_000d838c + DAT_000d83a0 + iVar5 * 4 + 2));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


