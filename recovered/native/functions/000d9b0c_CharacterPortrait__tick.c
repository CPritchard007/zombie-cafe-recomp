/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d9b0c CharacterPortrait::tick */

/* CharacterPortrait::tick(long) */

void __thiscall CharacterPortrait::tick(CharacterPortrait *this,long param_1)

{
  int *piVar1;
  int iVar2;
  String *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int local_98;
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::tick((long)this);
  piVar1 = *(int **)(this + 0x6c);
  if (((piVar1 != (int *)0x0) &&
      ((**(code **)(*piVar1 + 0x1c))(piVar1,param_1), this[0x9d] != (CharacterPortrait)0x0)) &&
     (iVar2 = (**(code **)(**(int **)(*(int *)(this + 0x6c) + 0x90) + 0x1c))(), iVar2 != 0)) {
    CharacterInstance::setCurrentAnimation
              (*(CharacterInstance **)(this + 0x6c),(uchar)this[0x9e],'\x01',false);
  }
  iVar2 = *(int *)(*(int *)(this + 0x6c) + 0x8c);
  if (*(char *)(iVar2 + 5) == '\0') {
    iVar2 = *(int *)(*(int *)(this + 0x90) + DAT_000d9ddc);
    iVar7 = *(int *)(*(int *)(this + 0x90) + 0x680);
    local_98 = *(int *)(iVar7 * 4 + **(int **)(DAT_000d9de0 + 0xd9b74));
  }
  else {
    iVar7 = *(int *)(iVar2 + 0x28);
    iVar2 = *(int *)(iVar2 + 0x2c);
    local_98 = *(int *)(DAT_000d9de4 + iVar7 * 4 + 0xd9b9c);
  }
  if (*(int *)(this + 0x74) != iVar2) {
    piVar1 = *(int **)(this + 0x7c);
    if (iVar2 < local_98) {
      pcVar6 = *(code **)(*piVar1 + 0x44);
      String::valueOf((long)aSStack_88);
      String::String(aSStack_80,(char *)(DAT_000d9dec + 0xd9be2));
      String::operator+(aSStack_78,aSStack_88,aSStack_80);
      String::valueOf((long)aSStack_70);
      String::operator+(aSStack_68,aSStack_78,aSStack_70);
      String::String(aSStack_60,(char *)(DAT_000d9df0 + 0xd9c08));
      String::operator+(aSStack_58,aSStack_68,aSStack_60);
      (*pcVar6)(piVar1,aSStack_58);
      String::~String(aSStack_58);
      String::~String(aSStack_60);
      String::~String(aSStack_68);
      String::~String(aSStack_70);
      String::~String(aSStack_78);
      String::~String(aSStack_80);
      pSVar3 = aSStack_88;
    }
    else {
      pcVar6 = *(code **)(*piVar1 + 0x44);
      String::String(aSStack_90,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x90) + 0x4b0) + 8) +
                     **(int **)(DAT_000d9de8 + 0xd9bb4) * 8));
      (*pcVar6)(piVar1,aSStack_90);
      pSVar3 = aSStack_90;
    }
    String::~String(pSVar3);
    if (iVar2 < *(int *)(this + 0x74)) {
      ProgressBar::setValue(*(ProgressBar **)(this + 0x70),0,true);
    }
    *(int *)(this + 0x74) = iVar2;
    ProgressBar::setMaximumValue(*(ProgressBar **)(this + 0x70),local_98);
    ProgressBar::setValue(*(ProgressBar **)(this + 0x70),iVar2,false);
  }
  if (*(int *)(this + 0x78) != iVar7) {
    piVar1 = *(int **)(this + 0x84);
    pcVar6 = *(code **)(*piVar1 + 0x44);
    if (iVar7 < *(int *)(DAT_000d9df4 +
                         (uint)*(byte *)(**(int **)(*(int *)(this + 0x6c) + 0x8c) + 0xb40) * 4 +
                        0xd9cc2)) {
      String::valueOf((int)aSStack_48);
      (*pcVar6)(piVar1,aSStack_48);
      pSVar3 = aSStack_48;
    }
    else {
      String::String(aSStack_50,(char *)(DAT_000d9df8 + 0xd9ca0));
      (*pcVar6)(piVar1,aSStack_50);
      pSVar3 = aSStack_50;
    }
    String::~String(pSVar3);
    piVar1 = *(int **)(this + 0x8c);
    pcVar6 = *(code **)(*piVar1 + 0x44);
    String::String(aSStack_40,(char *)(DAT_000d9dfc + 0xd9cd0));
    uVar4 = Character::getNextMaxEnergy();
    uVar5 = Character::getMaxEnergy();
    __subsf3(uVar4,uVar5);
    __fixsfsi();
    String::valueOf((int)aSStack_38);
    String::operator+(aSStack_30,aSStack_40,aSStack_38);
    String::String(aSStack_28,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x90) + 0x4b0) + 8) +
                   **(int **)(DAT_000d9e00 + 0xd9d1e) * 8));
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    (*pcVar6)(piVar1,aSStack_20);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    *(int *)(this + 0x78) = iVar7;
  }
  return;
}


