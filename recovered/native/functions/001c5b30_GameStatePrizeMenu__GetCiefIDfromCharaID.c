/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c5b30 GameStatePrizeMenu::GetCiefIDfromCharaID */

/* GameStatePrizeMenu::GetCiefIDfromCharaID(int) */

undefined8 __thiscall GameStatePrizeMenu::GetCiefIDfromCharaID(GameStatePrizeMenu *this,int param_1)

{
  Vector<CharacterData*> *this_00;
  void *pvVar1;
  CharacterData *pCVar2;
  int iVar3;
  int iVar4;
  
  this_00 = (Vector<CharacterData*> *)operator_new(0xc);
  Vector<CharacterData*>::Vector(this_00);
  iVar4 = DAT_001c5bc0;
  for (iVar3 = 0; iVar3 < (int)(uint)*(ushort *)(*(int *)(this + 0xc) + iVar4); iVar3 = iVar3 + 1) {
    pCVar2 = *(CharacterData **)(iVar3 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001c5bb8));
    if (pCVar2[DAT_001c5bbc] != (CharacterData)0x0) {
      Vector<CharacterData*>::addElement(this_00,pCVar2);
    }
  }
  iVar4 = 0;
  do {
    pvVar1 = *(void **)(this_00 + 8);
    if (*(int *)(this_00 + 4) + 1 <= iVar4) {
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      operator_delete(this_00);
      iVar4 = -1;
LAB_001c5baa:
      return CONCAT44(this,iVar4);
    }
    if ((uint)*(ushort *)(*(int *)(iVar4 * 4 + (int)pvVar1) + DAT_001c5bc4) == param_1) {
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      operator_delete(this_00);
      goto LAB_001c5baa;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


