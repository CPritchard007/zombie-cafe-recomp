/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d308e CharacterDetails::prevZombie */

/* CharacterDetails::prevZombie(CharacterDetails*, ScreenElement*) */

void CharacterDetails::prevZombie(CharacterDetails *param_1,ScreenElement *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x88) + 5) == '\x02') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 4);
    iVar3 = *(int *)(param_1 + 0x8c) + -1;
    iVar1 = 0;
    if ((-1 < iVar3) && (iVar1 = iVar3, iVar2 < iVar3)) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x8c) = iVar1;
    setCharacter(param_1,*(Character **)(iVar1 * 4 + *(int *)(*(int *)(param_1 + 0x74) + 8)));
  }
  return;
}


