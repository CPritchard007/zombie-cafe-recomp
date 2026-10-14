/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf694 CharacterDetails::tickEquip */

/* CharacterDetails::tickEquip() */

void __thiscall CharacterDetails::tickEquip(CharacterDetails *this)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  if (this[0x68] == (CharacterDetails)0x0) {
    if (this[0x188] == (CharacterDetails)0x0) {
      iVar1 = GameStateCafe::isOpenEquipStorage(*(GameStateCafe **)(*(int *)(this + 0x78) + 8));
      if (iVar1 == 0) {
        return;
      }
      this[0x188] = (CharacterDetails)0x1;
      (**(code **)(*(int *)**(undefined4 **)(this + 0x138) + 0x20))
                ((int *)**(undefined4 **)(this + 0x138),0);
      (**(code **)(*(int *)**(undefined4 **)(this + 0x13c) + 0x20))
                ((int *)**(undefined4 **)(this + 0x13c),0);
      piVar2 = (int *)**(undefined4 **)(this + 0x134);
      pcVar6 = *(code **)(*piVar2 + 0x20);
      uVar5 = 0;
    }
    else {
      iVar1 = GameStateCafe::isOpenEquipStorage(*(GameStateCafe **)(*(int *)(this + 0x78) + 8));
      if (iVar1 != 0) {
        return;
      }
      this[0x188] = (CharacterDetails)0x0;
      if (this[0x60] != (CharacterDetails)0x0) {
        return;
      }
      if (*(int *)(this + 0x88) == 0) {
        return;
      }
      uVar4 = 0;
      if (*(char *)(*(int *)(this + 0x88) + 5) == '\x02') {
        uVar4 = (uint)((*(int *)(this + 0x8c) >> 0x1f) - *(int *)(this + 0x8c)) >> 0x1f;
      }
      (**(code **)(*(int *)**(undefined4 **)(this + 0x138) + 0x20))
                ((int *)**(undefined4 **)(this + 0x138),uVar4);
      bVar3 = false;
      if (*(char *)(*(int *)(this + 0x88) + 5) == '\x02') {
        bVar3 = *(int *)(this + 0x8c) < *(int *)(*(int *)(this + 0x74) + 4);
      }
      (**(code **)(*(int *)**(undefined4 **)(this + 0x13c) + 0x20))
                ((int *)**(undefined4 **)(this + 0x13c),bVar3);
      uVar5 = 1;
      piVar2 = (int *)**(undefined4 **)(this + 0x134);
      pcVar6 = *(code **)(*piVar2 + 0x20);
    }
  }
  else {
    if (this[0x68] != (CharacterDetails)0x3) {
      return;
    }
    (**(code **)(*(int *)**(undefined4 **)(this + 0x138) + 0x20))
              ((int *)**(undefined4 **)(this + 0x138),0);
    uVar5 = 0;
    piVar2 = (int *)**(undefined4 **)(this + 0x13c);
    pcVar6 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar6)(piVar2,uVar5);
  return;
}


