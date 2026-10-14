/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb824 CharacterCommandBar::setCharacter */

/* CharacterCommandBar::setCharacter(CharacterInstance*) */

void __thiscall
CharacterCommandBar::setCharacter(CharacterCommandBar *this,CharacterInstance *param_1)

{
  String *this_00;
  int iVar1;
  code *pcVar2;
  ProgressBar *pPVar3;
  int *piVar4;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(CharacterInstance **)(this + 100) = param_1;
  this[0x68] = *(CharacterCommandBar *)(*(int *)(param_1 + 0x8c) + 5);
  piVar4 = *(int **)(this + 0x6c);
  pcVar2 = *(code **)(*piVar4 + 0x44);
  String::String(aSStack_30,(String *)(*(int *)(param_1 + 0x8c) + 8));
  (*pcVar2)(piVar4,aSStack_30);
  String::~String(aSStack_30);
  if (this[0x68] == (CharacterCommandBar)0x1) {
    *(undefined4 *)(*(int *)(this + 0x70) + 0x8c) = DAT_000cb908;
    piVar4 = *(int **)(this + 0x70);
    pcVar2 = *(code **)(*piVar4 + 0x44);
    String::String(aSStack_28,(String *)(**(int **)(param_1 + 0x8c) + DAT_000cb90c));
    (*pcVar2)(piVar4,aSStack_28);
    this_00 = aSStack_28;
  }
  else {
    *(undefined4 *)(*(int *)(this + 0x70) + 0x8c) = DAT_000cb910;
    piVar4 = *(int **)(this + 0x70);
    pcVar2 = *(code **)(*piVar4 + 0x44);
    String::String(aSStack_20,0);
    (*pcVar2)(piVar4,aSStack_20);
    this_00 = aSStack_20;
  }
  String::~String(this_00);
  this[0x69] = (CharacterCommandBar)0x0;
  pPVar3 = *(ProgressBar **)(this + 0xb0);
  Character::getMaxEnergy();
  iVar1 = __fixsfsi();
  ProgressBar::setMaximumValue(pPVar3,iVar1);
  pPVar3 = *(ProgressBar **)(this + 0xb0);
  iVar1 = __fixsfsi(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x40));
  ProgressBar::setValue(pPVar3,iVar1,true);
  layout(this);
  return;
}


