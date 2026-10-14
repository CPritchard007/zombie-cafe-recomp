/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001795fc GameStatePowerup::endPowerup */

/* GameStatePowerup::endPowerup() */

void __thiscall GameStatePowerup::endPowerup(GameStatePowerup *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(undefined4 *)(this + DAT_00179768) = 0;
  *(undefined1 *)(*(int *)(this + 0xfc) + 0x86) = 0;
  (**(code **)(**(int **)(this + 0xfc) + 0x20))();
  execPowerup();
  String::String(aSStack_58);
  String::String(aSStack_50);
  String::String(aSStack_48,(String *)(*(int *)(*(int *)(this + 0x490) + 0x8c) + 8));
  String::operator=(aSStack_58,aSStack_48);
  String::~String(aSStack_48);
  String::valueOf((int)aSStack_40);
  String::String(aSStack_38,(char *)(DAT_0017976c + 0x179660));
  String::operator+(aSStack_30,aSStack_40,aSStack_38);
  String::operator=(aSStack_50,aSStack_30);
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  String::~String(aSStack_40);
  iVar1 = Character::getSameZombiePowerupNum(*(Character **)(*(int *)(this + 0x490) + 0x8c));
  if (*(short *)(this + 0x96) < iVar1) {
    String::String(aSStack_28,(char *)(DAT_00179770 + 0x1796a4));
    String::operator+=(aSStack_50,aSStack_28);
    String::~String(aSStack_28);
  }
  uVar2 = *(undefined4 *)(this + 0x528);
  uVar3 = *(undefined4 *)(*(int *)(this + 0x490) + 0x8c);
  String::String(aSStack_20,aSStack_50);
  PUResultDialog::setCharacter
            (uVar2,uVar3,*(undefined4 *)(this + 0x78),*(undefined4 *)(this + 0x7c),
             *(undefined4 *)(this + 0x80),*(undefined4 *)(this + 0x84),*(undefined4 *)(this + 0x88),
             *(undefined4 *)(this + 0x8c),*(undefined4 *)(this + 0x90),*(undefined4 *)(this + 0x94),
             aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x528) + 0x20))(*(int **)(this + 0x528),1);
  fVar4 = (float)afterExecPowerup(this);
  fVar4 = (float)ZombieCafe::stopMusic(fVar4);
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,2,fVar4,false);
  String::~String(aSStack_50);
  String::~String(aSStack_58);
  return;
}


