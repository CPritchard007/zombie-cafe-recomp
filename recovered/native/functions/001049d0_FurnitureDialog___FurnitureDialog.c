/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001049d0 FurnitureDialog::~FurnitureDialog */

/* FurnitureDialog::~FurnitureDialog() */

void __thiscall FurnitureDialog::~FurnitureDialog(FurnitureDialog *this)

{
  String *this_00;
  void *pvVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  FontManager *pFVar6;
  undefined4 uVar7;
  int iVar8;
  char acStack_11c [256];
  int local_1c;
  
  iVar8 = DAT_00104ca8 + 0x1049dc;
  piVar3 = *(int **)(iVar8 + DAT_00104cac);
  local_1c = *piVar3;
  pcVar2 = (char *)(DAT_00104cb0 + 0x1049e6);
  *(int *)this = *(int *)(iVar8 + DAT_00104cb4) + 8;
  L_PrintLog((char *)(DAT_00104cb8 + 0x1049f6),pcVar2);
  while (this_00 = (String *)
                   CapcomLinkedList<FurnitureDialog::QueueMessage*>::remove
                             ((CapcomLinkedList<FurnitureDialog::QueueMessage*> *)(this + 0xb4),0),
        this_00 != (String *)0x0) {
    String::~String(this_00 + 8);
    String::~String(this_00);
    operator_delete(this_00);
  }
  L_PrintLog((char *)(DAT_00104cbc + 0x104a2c),(char *)(DAT_00104cc0 + 0x104a2e));
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
    *(undefined4 *)(this + 0x9c) = 0;
  }
  L_PrintLog((char *)(DAT_00104cc4 + 0x104a60),(char *)(DAT_00104cc8 + 0x104a62));
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
    *(undefined4 *)(this + 0x98) = 0;
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
    *(undefined4 *)(this + 0x94) = 0;
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
    *(undefined4 *)(this + 0xa4) = 0;
  }
  L_PrintLog((char *)(DAT_00104ccc + 0x104ac4),(char *)(DAT_00104cd0 + 0x104ac6));
  if (*(int *)(this + 0x7c) != 0) {
    L_PrintLog((char *)(DAT_00104cd4 + 0x104ad6),(char *)(DAT_00104cd8 + 0x104ad8));
    piVar4 = *(int **)(iVar8 + DAT_00104cdc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x7c));
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00104ce0 + 0x104b02),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00104ce4 + 0x104b0e),acStack_11c);
  }
  if (*(int *)(this + 0x80) != 0) {
    L_PrintLog((char *)(DAT_00104ce8 + 0x104b20),(char *)(DAT_00104cec + 0x104b22));
    piVar4 = *(int **)(iVar8 + DAT_00104cdc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x80));
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
    sprintf(acStack_11c,(char *)(DAT_00104cf0 + 0x104b50),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00104cf4 + 0x104b5c),acStack_11c);
  }
  if (*(int *)(this + 0x84) != 0) {
    L_PrintLog((char *)(DAT_00104cf8 + 0x104b70),(char *)(DAT_00104cfc + 0x104b72));
    piVar4 = *(int **)(iVar8 + DAT_00104cdc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_00104d00 + 0x104ba4),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00104d04 + 0x104bb0),acStack_11c);
  }
  L_PrintLog((char *)(DAT_00104d08 + 0x104bba),(char *)(DAT_00104d0c + 0x104bbc));
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
    *(undefined4 *)(this + 0x88) = 0;
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
    *(undefined4 *)(this + 0x8c) = 0;
  }
  L_PrintLog((char *)(DAT_00104d10 + 0x104bf6),(char *)(DAT_00104d14 + 0x104bf8));
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
    *(undefined4 *)(this + 0x90) = 0;
  }
  puVar5 = *(undefined4 **)(iVar8 + DAT_00104d18);
  pFVar6 = (FontManager *)*puVar5;
  iVar8 = SmDev();
  FontManager::delFont(pFVar6,*(int *)(DAT_00104d1c + iVar8 * 4 + 0x104c54));
  pFVar6 = (FontManager *)*puVar5;
  iVar8 = SmDev();
  FontManager::delFont(pFVar6,*(int *)(&UNK_00104c82 + DAT_00104d20 + iVar8 * 4));
  if (*(int *)(this + 0xc4) != 0) {
    while (pvVar1 = *(void **)(this + 0xb8), pvVar1 != (void *)0x0) {
      uVar7 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0xb8) = uVar7;
    }
    *(undefined4 *)(this + 0xc4) = 0;
    *(FurnitureDialog **)(this + 0xbc) = this + 0xb4;
    *(undefined4 *)(this + 0xc0) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


