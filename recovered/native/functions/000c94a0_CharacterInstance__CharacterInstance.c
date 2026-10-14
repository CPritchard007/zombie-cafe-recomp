/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c94a0 CharacterInstance::CharacterInstance */

/* CharacterInstance::CharacterInstance(Character*, CFPathFinder*) */

CharacterInstance * __thiscall
CharacterInstance::CharacterInstance
          (CharacterInstance *this,Character *param_1,CFPathFinder *param_2)

{
  ushort uVar1;
  CapcomApp *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  Character local_1c;
  
  *(CharacterInstance **)(this + 0x10) = this + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x24) = 0;
  iVar6 = DAT_000c9670;
  this[0x2e] = (CharacterInstance)0x0;
  this[0x1c] = (CharacterInstance)0x1;
  iVar3 = DAT_000c9674;
  iVar6 = iVar6 + 0xc94c6;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(int *)this = *(int *)(iVar6 + iVar3) + 8;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  Vector<ToonAnimation::ReplacementImage>::Vector
            ((Vector<ToonAnimation::ReplacementImage> *)(this + 0x5c));
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(CharacterInstance **)(this + 0x74) = this + 0x6c;
  *(Character **)(this + 0x8c) = param_1;
  *(CFPathFinder **)(this + 0x80) = param_2;
  local_3c = 0;
  this[0x68] = *(CharacterInstance *)(param_1 + 4);
  for (; local_3c < *(int *)(*(int *)param_1 + DAT_000c9678 + 4) + 1; local_3c = local_3c + 1) {
    Vector<CharacterData::ReplacementImageWithForm>::elementAt((int)&local_30);
    if (local_1c == param_1[4]) {
      Vector<ToonAnimation::ReplacementImage>::addElement
                ((Vector<ToonAnimation::ReplacementImage> *)(this + 0x5c),local_30,local_2c,local_28
                 ,local_24,local_20);
    }
  }
  *(undefined4 *)(this + 0x90) = 0;
  this[0x34] = (CharacterInstance)0xff;
  setCurrentAnimation(this,'\x01',(uchar)param_1[0x4c],true);
  this[0x84] = (CharacterInstance)0x0;
  this[0xb0] = (CharacterInstance)0x0;
  *(undefined4 *)(this + 0xb4) = 0;
  this[0xb8] = (CharacterInstance)0x0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  *(undefined4 *)(this + 0x88) = 0;
  this[0xc4] = (CharacterInstance)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  uVar4 = **(undefined4 **)(iVar6 + DAT_000c967c);
  *(undefined4 *)(this + 0x38) = uVar4;
  *(undefined4 *)(this + 0x44) = uVar4;
  uVar4 = getBoundingBox(this);
  *(undefined4 *)(this + 0x20) = uVar4;
  *(int *)(this + 0x94) = (int)*(short *)(this + 0x2c);
  *(undefined4 *)(this + 0x98) = 0;
  this[0xa8] = (CharacterInstance)0x0;
  this[0xa9] = (CharacterInstance)0x0;
  uVar4 = Character::getMaxEnergy();
  uVar4 = __divsf3(uVar4,DAT_000c9680);
  __divsf3(uVar4,DAT_000c9680);
  uVar4 = __fixsfsi();
  *(undefined4 *)(this + 0x50) = uVar4;
  pCVar2 = (CapcomApp *)CapcomApp::getInstance();
  uVar4 = CapcomApp::getUptime(pCVar2);
  *(undefined4 *)(this + 0x58) = uVar4;
  *(undefined4 *)(this + 0x54) = uVar4;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined2 *)(this + 0xa0) = 0;
  uVar1 = *(ushort *)(*(int *)param_1 + DAT_000c9684);
  iVar3 = Character::getAdditionFocus(param_1);
  iVar5 = **(int **)(iVar6 + DAT_000c9688);
  iVar6 = CapcomMath::random(**(int **)(iVar6 + DAT_000c968c));
  *(int *)(this + 0xa4) = iVar5 * ((int)((iVar3 + (uint)uVar1) * 0x10000) >> 0x10) + iVar6;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xc5] = (CharacterInstance)0x0;
  this[0xc6] = (CharacterInstance)0x0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  this[199] = (CharacterInstance)0x0;
  this[0xd4] = (CharacterInstance)0x0;
  return this;
}


