/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf870 CharacterDetails::setEquipButtonName */

/* CharacterDetails::setEquipButtonName() */

void __thiscall CharacterDetails::setEquipButtonName(CharacterDetails *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  CharacterDetails *pCVar6;
  CharacterDetails *pCVar7;
  int local_34;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_000cf988;
  uVar4 = 0;
  if (((this[0x68] == (CharacterDetails)0x0) && (uVar4 = (uint)(byte)this[0x84], uVar4 != 0)) &&
     (uVar4 = (uint)(byte)this[0x174], uVar4 != 0)) {
    pCVar6 = this + 200;
    local_34 = 0;
    do {
      iVar2 = isEquipReleaseOne(this);
      if ((iVar2 != 0) &&
         (iVar2 = Character::getRareValue(*(Character **)(this + 0x88)),
         *(int *)(iVar1 + (iVar2 * 5 + local_34) * 4 + 0xcf8e4) <=
         *(int *)(*(int *)(this + 0x88) + 0x28))) {
        pCVar7 = pCVar6 + -0x14;
        (**(code **)(**(int **)pCVar7 + 0x20))(*(int **)pCVar7,1);
        piVar3 = *(int **)pCVar6;
        pcVar5 = *(code **)(*piVar3 + 0x44);
        String::String(aSStack_28,(char *)(DAT_000cf98c + 0xcf8ea));
        (*pcVar5)(piVar3,aSStack_28);
        String::~String(aSStack_28);
        (**(code **)(**(int **)pCVar6 + 0x20))(*(int **)pCVar6,1);
        iVar2 = DAT_000cf990;
        if (*(int *)((local_34 + 0x16) * 4 + *(int *)(this + 0x88)) == 0) {
          *(undefined1 *)(*(int *)pCVar7 + 0x87) = 0;
          piVar3 = *(int **)pCVar6;
          pcVar5 = *(code **)(*piVar3 + 0x44);
          String::String(aSStack_20,(char *)(iVar2 + 0xcf93a));
          (*pcVar5)(piVar3,aSStack_20);
          String::~String(aSStack_20);
        }
        else {
          *(undefined1 *)(*(int *)pCVar7 + 0x87) = 1;
          (**(code **)(**(int **)pCVar6 + 0x20))(*(int **)pCVar6,0);
        }
      }
      pCVar6 = pCVar6 + 4;
      local_34 = local_34 + 1;
    } while (local_34 != 5);
  }
  else {
    do {
      iVar1 = uVar4 + 0xb4;
      uVar4 = uVar4 + 4;
      (**(code **)(**(int **)(this + iVar1) + 0x20))(*(int **)(this + iVar1),0);
    } while (uVar4 != 0x14);
  }
  return;
}


