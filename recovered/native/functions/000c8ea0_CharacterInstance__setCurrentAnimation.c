/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8ea0 CharacterInstance::setCurrentAnimation */

/* CharacterInstance::setCurrentAnimation(unsigned char, unsigned char, bool) */

void __thiscall
CharacterInstance::setCurrentAnimation
          (CharacterInstance *this,uchar param_1,uchar param_2,bool param_3)

{
  CharacterInstance CVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  float fVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CharacterInstance local_1c;
  
  if (param_2 == 0xff) {
    param_2 = *(uchar *)(*(int *)(this + 0x8c) + 0x4c);
  }
  if (((this[0x34] != (CharacterInstance)param_1) ||
      (*(uchar *)(*(int *)(this + 0x8c) + 0x4c) != param_2)) || (param_3)) {
    iVar5 = 0;
    if (*(CharacterInstance *)(*(int *)(this + 0x8c) + 4) != this[0x68]) {
      for (; piVar2 = *(int **)(this + 0x8c), iVar5 < *(int *)(*piVar2 + DAT_000c9058 + 4) + 1;
          iVar5 = iVar5 + 1) {
        Vector<CharacterData::ReplacementImageWithForm>::elementAt((int)&local_30);
        if (local_1c == this[0x68]) {
          stopReplacementInAnimation(this,local_30);
        }
      }
      this[0x68] = *(CharacterInstance *)(piVar2 + 1);
      for (iVar5 = 0; iVar5 < *(int *)(**(int **)(this + 0x8c) + DAT_000c9058 + 4) + 1;
          iVar5 = iVar5 + 1) {
        Vector<CharacterData::ReplacementImageWithForm>::elementAt((int)&local_30);
        if (local_1c == this[0x68]) {
          Vector<ToonAnimation::ReplacementImage>::addElement
                    (this + 0x5c,local_30,local_2c,local_28,local_24,local_20);
        }
      }
    }
    this[0x34] = (CharacterInstance)param_1;
    *(uchar *)(*(int *)(this + 0x8c) + 0x4c) = param_2;
    puVar3 = *(undefined4 **)(this + 0x8c);
    iVar5 = CharacterData::createAnimation
                      ((CharacterData *)*puVar3,*(uchar *)(puVar3 + 1),param_1,
                       *(uchar *)(puVar3 + 0x13));
    piVar2 = *(int **)(this + 0x90);
    if (iVar5 == 0) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      pcVar4 = *(code **)(*piVar2 + 0x18);
    }
    else {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      *(int *)(this + 0x90) = iVar5;
      CVar1 = this[0x34];
      if (((CVar1 == (CharacterInstance)0x13) || (CVar1 == (CharacterInstance)0x0)) ||
         ((CVar1 == (CharacterInstance)0x9 ||
          ((CVar1 == (CharacterInstance)0x4 || (CVar1 == (CharacterInstance)0x3)))))) {
        fVar6 = (float)Character::getSpeedMultiplier(*(Character **)(this + 0x8c));
        ToonAnimation::setSpeedMultiplier(fVar6);
        *(byte *)(*(int *)(this + 0x90) + 6) = *(byte *)(*(int *)(this + 0x90) + 6) | 1;
      }
      for (iVar5 = 0; iVar5 < *(int *)(this + 0x60) + 1; iVar5 = iVar5 + 1) {
        piVar2 = (int *)(*(int *)(this + 100) + iVar5 * 0x14);
        local_30 = *piVar2;
        local_2c = piVar2[1];
        local_28 = piVar2[2];
        local_24 = piVar2[3];
        local_20 = piVar2[4];
        Vector<ToonAnimation::ReplacementImage>::addElement
                  (*(int **)(this + 0x90) + 0xc,local_30,local_2c,local_28,local_24,local_20);
      }
      pcVar4 = *(code **)(**(int **)(this + 0x90) + 0x14);
    }
    (*pcVar4)();
  }
  return;
}


