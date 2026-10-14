/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d7410 CharacterEvolution::setCharacterItem */

/* CharacterEvolution::setCharacterItem(Character*) */

void __thiscall CharacterEvolution::setCharacterItem(CharacterEvolution *this,Character *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  CharacterEvolution *pCVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  this[0xf0] = (CharacterEvolution)0x0;
  (**(code **)(**(int **)(this + 0xe4) + 0x14))(*(int **)(this + 0xe4),0,0);
  *(Character **)(this + 0x74) = param_1;
  (**(code **)(**(int **)(this + 0x94) + 0x20))(*(int **)(this + 0x94),0);
  piVar3 = *(int **)(this + 0xcc);
  pcVar6 = *(code **)(*piVar3 + 0x44);
  String::String(aSStack_48,(String *)(*(int *)param_1 + DAT_000d76b8));
  (*pcVar6)(piVar3,aSStack_48);
  String::~String(aSStack_48);
  CharacterPortrait::setCharacter
            (*(CharacterPortrait **)(this + 0xe8),param_1,true,true,false,false);
  piVar3 = *(int **)(this + 0x9c);
  pcVar6 = *(code **)(*piVar3 + 0x44);
  String::String(aSStack_40,(char *)(DAT_000d76bc + 0xd7486));
  (*pcVar6)(piVar3,aSStack_40);
  String::~String(aSStack_40);
  String::String(aSStack_38);
  String::String(aSStack_30,(char *)(DAT_000d76c0 + 0xd74a4));
  String::String(aSStack_28,(String *)(*(int *)param_1 + DAT_000d76c4));
  String::operator=(aSStack_38,aSStack_28);
  String::~String(aSStack_28);
  iVar1 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_30,aSStack_38,*(int *)(DAT_000d76c8 + iVar1 * 4 + 0xd74fe));
  piVar3 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar3 + 0x44);
  String::String(aSStack_20,aSStack_30);
  (*pcVar6)(piVar3,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0xd4) + 0x20))(*(int **)(this + 0xd4),0);
  (**(code **)(**(int **)(this + 0xd8) + 0x20))(*(int **)(this + 0xd8),0);
  (**(code **)(**(int **)(this + 0xdc) + 0x20))(*(int **)(this + 0xdc),0);
  (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
  iVar1 = 0;
  do {
    piVar3 = *(int **)(this + iVar1 + 0xa8);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x20))(piVar3,0);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x1c);
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
  (**(code **)(**(int **)(this + 0x94) + 0x20))(*(int **)(this + 0x94),0);
  piVar3 = *(int **)(this + 0xd4);
  pCVar4 = this + 0xe4;
  (**(code **)(*piVar3 + 0x18))(piVar3,*(undefined4 *)(*(int *)pCVar4 + 0xc),piVar3[4]);
  (**(code **)(**(int **)(this + 0xd8) + 0x18))
            (*(int **)(this + 0xd8),*(undefined4 *)(*(int *)pCVar4 + 0xc),
             *(undefined4 *)(*(int *)(this + 0xd4) + 0x10));
  (**(code **)(**(int **)(this + 0xdc) + 0x18))
            (*(int **)(this + 0xdc),*(undefined4 *)(*(int *)pCVar4 + 0xc),
             *(undefined4 *)(*(int *)(this + 0xd4) + 0x10));
  piVar3 = *(int **)(this + 0xd4);
  pcVar6 = *(code **)(*piVar3 + 0x14);
  iVar7 = *(int *)(*(int *)(this + 0xd0) + 8);
  iVar5 = *(int *)(*(int *)(this + 0xd0) + 0x10);
  iVar1 = SmDev();
  (*pcVar6)(piVar3,0,iVar7 + iVar5 + *(int *)(DAT_000d76cc + iVar1 * 4 + 0xd75de));
  piVar3 = *(int **)(this + 0xd8);
  pcVar6 = *(code **)(*piVar3 + 0x14);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(DAT_000d76d0 + 0xd75ea));
  iVar7 = *(int *)(*(int *)(this + 0xd0) + 8);
  iVar5 = *(int *)(*(int *)(this + 0xd0) + 0x10);
  iVar1 = SmDev();
  (*pcVar6)(piVar3,uVar2,iVar7 + iVar5 + *(int *)(DAT_000d76d4 + iVar1 * 4 + 0xd761e));
  piVar3 = *(int **)(this + 0xdc);
  pcVar6 = *(code **)(*piVar3 + 0x14);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(DAT_000d76d8 + 0xd762a));
  iVar7 = *(int *)(*(int *)(this + 0xd0) + 8);
  iVar5 = *(int *)(*(int *)(this + 0xd0) + 0x10);
  iVar1 = SmDev();
  (*pcVar6)(piVar3,uVar2,iVar7 + iVar5 + *(int *)(DAT_000d76dc + iVar1 * 4 + 0xd765e));
  (**(code **)(**(int **)(this + 0xe4) + 0x18))
            (*(int **)(this + 0xe4),*(undefined4 *)(*(int *)(this + 0xe0) + 0xc),
             *(int *)(*(int *)(this + 0xd4) + 8) + *(int *)(*(int *)(this + 0xd4) + 0x10));
  layout(this);
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  return;
}


