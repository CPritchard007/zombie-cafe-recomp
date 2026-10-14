/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146a9c GameStateFriends::uninit */

/* GameStateFriends::uninit() */

void __thiscall GameStateFriends::uninit(GameStateFriends *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  TrueTypeTextElement *pTVar7;
  FontManager *this_00;
  int *piVar8;
  int local_134;
  char acStack_11c [256];
  int local_1c;
  
  iVar6 = DAT_00146d40 + 0x146aa8;
  local_1c = **(int **)(iVar6 + DAT_00146d44);
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))();
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))();
  }
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x28) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x28) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))();
  }
  if (*(int **)(this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x50) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x34) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x34) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x20) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x20) + 100) + 4))();
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x18) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x18) + 100) + 4))();
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x1c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x1c) + 100) + 4))();
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
  }
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))();
  }
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x2c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x2c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x30) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x30) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x24) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x24) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))();
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x54) + 4))();
  }
  if (*(int **)(this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x58) + 4))();
  }
  if (*(int **)(this + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x5c) + 4))();
  }
  pcVar4 = (char *)(DAT_00146d48 + 0x146c2c);
  for (local_134 = 0; local_134 < *(int *)(this + 0x78) + 1; local_134 = local_134 + 1) {
    iVar1 = *(int *)(this + 0x7c) + local_134 * 0x18;
    piVar2 = *(int **)(iVar1 + 0xc);
    pTVar7 = *(TrueTypeTextElement **)(iVar1 + 8);
    piVar3 = *(int **)(iVar1 + 0x10);
    piVar5 = *(int **)(iVar1 + 0x14);
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 4) + 4))();
    }
    if (pTVar7 != (TrueTypeTextElement *)0x0) {
      L_PrintLog(pcVar4,(char *)(DAT_00146d4c + 0x146c5e));
      piVar8 = *(int **)(iVar6 + DAT_00146d50);
      Vector<TrueTypeTextElement*>::removeElement((Vector<TrueTypeTextElement*> *)*piVar8,pTVar7);
      (**(code **)(*(int *)pTVar7 + 4))(pTVar7);
      sprintf(acStack_11c,(char *)(DAT_00146d54 + 0x146c80),*(int *)(*piVar8 + 4) + 1);
      L_PrintLog(pcVar4,acStack_11c);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar6 + DAT_00146d58);
  iVar1 = SmDev();
  FontManager::delFont(this_00,*(int *)(iVar1 * 4 + DAT_00146d5c + 0x146cd8));
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),true);
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),true);
  if (local_1c != **(int **)(iVar6 + DAT_00146d44)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


