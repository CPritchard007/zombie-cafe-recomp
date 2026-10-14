/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001011a0 FriendCafeHudElement::~FriendCafeHudElement */

/* FriendCafeHudElement::~FriendCafeHudElement() */

void __thiscall FriendCafeHudElement::~FriendCafeHudElement(FriendCafeHudElement *this)

{
  int *piVar1;
  int iVar2;
  FontManager *this_00;
  int iVar3;
  int *piVar4;
  int local_128;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_0010147c + 0x1011ac;
  local_1c = **(int **)(iVar3 + DAT_00101480);
  *(int *)this = *(int *)(iVar3 + DAT_00101484) + 8;
  if (*(int **)(*(int *)(this + 0x98) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x98) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x60) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x60) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  if (*(int **)(*(int *)(this + 100) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 0x60) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xac) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xac) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
  }
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xb0) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb0) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xb4) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb4) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int *)(this + 0xe0) != 0) {
    L_PrintLog((char *)(DAT_00101488 + 0x10134e),(char *)(DAT_0010148c + 0x101350));
    piVar4 = *(int **)(iVar3 + DAT_00101490);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0xe0));
    piVar1 = *(int **)(this + 0xe0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xe0) = 0;
    sprintf(acStack_11c,(char *)(DAT_00101494 + 0x101382),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00101498 + 0x10138e),acStack_11c);
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar3 + DAT_0010149c);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_001014a0 + iVar2 * 4 + 0x1013de));
  if (*(int **)(this + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe4) + 4))();
  }
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 4))();
  }
  if (*(int **)(this + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xec) + 4))();
  }
  if (*(int **)(this + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf8) + 4))();
  }
  if (*(int **)(this + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 4))();
  }
  if (*(int **)(this + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa0) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa0) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x9c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x9c) + 100) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
  }
  for (local_128 = 0; local_128 < *(int *)(this + 0x80) + 1; local_128 = local_128 + 1) {
    piVar4 = *(int **)(*(int *)(this + 0x94) + local_128 * 0xc + 8);
    piVar1 = *(int **)(local_128 * 4 + *(int *)(this + 0x84));
    if ((int *)piVar1[0x18] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[0x18] + 4))();
    }
    (**(code **)(*piVar1 + 4))(piVar1);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(void **)(this + 0x94) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x94));
  }
  if (*(void **)(this + 0x84) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x84));
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != **(int **)(iVar3 + DAT_00101560)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


