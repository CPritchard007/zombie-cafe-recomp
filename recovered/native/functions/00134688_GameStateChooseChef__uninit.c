/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00134688 GameStateChooseChef::uninit */

/* GameStateChooseChef::uninit() */

void __thiscall GameStateChooseChef::uninit(GameStateChooseChef *this)

{
  CapcomOrderableList<CharacterData*> *this_00;
  int iVar1;
  GameStateChooseChef *pGVar2;
  FontManager *this_01;
  int iVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_001349ac + 0x134694;
  local_1c = **(int **)(iVar3 + DAT_001349b0);
  L_PrintLog((char *)(DAT_001349b4 + 0x1346a0),(char *)(DAT_001349b8 + 0x1346a2));
  if (*(int **)(*(int *)(this + 0xc0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xc0) + 100) + 4))();
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xc4) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xc4) + 100) + 4))();
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  if (*(int **)(*(int *)(this + 200) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 200) + 100) + 4))();
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
  }
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 4))();
  }
  if (*(int **)(this + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe4) + 4))();
  }
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  if (*(int **)(this + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe0) + 4))();
  }
  L_PrintLog((char *)(DAT_001349bc + 0x134794),(char *)(DAT_001349c0 + 0x134796));
  this_00 = *(CapcomOrderableList<CharacterData*> **)(this + 0xb0);
  if (this_00 != (CapcomOrderableList<CharacterData*> *)0x0) {
    CapcomOrderableList<CharacterData*>::removeAll(this_00);
    operator_delete(this_00);
  }
  selectChef(this,-1);
  iVar1 = 0;
  do {
    if (*(int **)(this + iVar1 + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1 + 0x60) + 4))();
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x24);
  if (*(int **)(*(int *)(this + 0x18) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x18) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x1c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x1c) + 100) + 4))();
  }
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))();
  }
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x24) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x24) + 100) + 4))();
  }
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 4))();
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))();
  }
  L_PrintLog((char *)(DAT_001349c4 + 0x134830),(char *)(DAT_001349c8 + 0x134832));
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
  }
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))();
  }
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
  }
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x34) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x34) + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x38) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x38) + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x9c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x9c) + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x3c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x3c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))();
  }
  pGVar2 = this + 0x94;
  L_PrintLog((char *)(DAT_001349cc + 0x13490a),(char *)(DAT_001349d0 + 0x13490c));
  if (*(int *)pGVar2 != 0) {
    L_PrintLog((char *)(DAT_001349d4 + 0x13491e),(char *)(DAT_001349d8 + 0x134920));
    piVar4 = *(int **)(iVar3 + DAT_001349dc);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)pGVar2);
    if (*(int **)pGVar2 != (int *)0x0) {
      (**(code **)(**(int **)pGVar2 + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
    sprintf(acStack_11c,(char *)(DAT_001349e0 + 0x13494e),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_001349e4 + 0x13495a),acStack_11c);
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  this_01 = (FontManager *)**(undefined4 **)(iVar3 + DAT_001349e8);
  iVar1 = SmDev();
  FontManager::delFont(this_01,*(int *)(DAT_00134a40 + iVar1 * 4 + 0x134a20));
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),true);
  iVar1 = DAT_00134a44;
  ZombieCafe::unloadDialogImages(*(ZombieCafe **)(this + 0xc),true);
  L_PrintLog((char *)(iVar1 + 0x134a14),(char *)(DAT_00134a48 + 0x134a18));
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),true);
  L_PrintLog((char *)(iVar1 + 0x134a14),(char *)(DAT_00134a4c + 0x134a2a));
  if (local_1c != **(int **)(iVar3 + DAT_00134a50)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


