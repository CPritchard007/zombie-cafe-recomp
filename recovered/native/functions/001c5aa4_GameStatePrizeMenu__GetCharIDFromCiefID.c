/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c5aa4 GameStatePrizeMenu::GetCharIDFromCiefID */

/* GameStatePrizeMenu::GetCharIDFromCiefID(int) */

uint __thiscall GameStatePrizeMenu::GetCharIDFromCiefID(GameStatePrizeMenu *this,int param_1)

{
  Vector<CharacterData*> *this_00;
  void *pvVar1;
  CharacterData *pCVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (Vector<CharacterData*> *)operator_new(0xc);
  Vector<CharacterData*>::Vector(this_00);
  for (iVar3 = 0; iVar3 < (int)(uint)*(ushort *)(*(int *)(this + 0xc) + DAT_001c5b28);
      iVar3 = iVar3 + 1) {
    pCVar2 = *(CharacterData **)(iVar3 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001c5b20));
    if (pCVar2[DAT_001c5b24] != (CharacterData)0x0) {
      Vector<CharacterData*>::addElement(this_00,pCVar2);
    }
  }
  pvVar1 = *(void **)(this_00 + 8);
  if (param_1 < *(int *)(this_00 + 4) + 1) {
    uVar4 = (uint)*(ushort *)(*(int *)(param_1 * 4 + (int)pvVar1) + DAT_001c5b2c);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(this_00);
  }
  else {
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(this_00);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


