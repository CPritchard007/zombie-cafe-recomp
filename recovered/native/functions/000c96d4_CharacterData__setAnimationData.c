/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c96d4 CharacterData::setAnimationData */

/* CharacterData::setAnimationData(unsigned char, unsigned char, unsigned char,
   ToonAnimation::Data*) */

void __thiscall
CharacterData::setAnimationData
          (CharacterData *this,uchar param_1,uchar param_2,uchar param_3,Data *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int local_48;
  Vector<ToonAnimation::ReplacementImage> aVStack_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar5 = (uint)param_3;
  uVar3 = (uint)param_2;
  *(Data **)(this + (((uint)param_1 * 0x2b + uVar3) * 4 + uVar5) * 4) = param_4;
  Vector<ToonAnimation::ReplacementImage>::Vector(aVStack_3c);
  iVar6 = DAT_000c97d0;
  for (local_48 = 0; local_48 < *(int *)(this + iVar6 + 4) + 1; local_48 = local_48 + 1) {
    Vector<CharacterData::ReplacementImageWithForm>::elementAt((int)&local_30);
    Vector<ToonAnimation::ReplacementImage>::addElement
              (aVStack_3c,local_30,local_2c,local_28,local_24,local_20);
  }
  if ((*(int *)(this + (uVar3 * 4 + uVar5 + 0xb0) * 8) == 0 &&
       *(int *)(this + (uVar3 * 4 + uVar5 + 0xb0) * 8 + 4) == 0) && (uVar5 - 1 < 2)) {
    iVar6 = (param_1 + 0x15a) * 4;
    if (uVar3 == 6) {
      uVar7 = ToonAnimation::Data::calculateBoundingBox
                        (param_4,*(CImage ***)(this + iVar6),*(int *)(*(int *)param_4 + 0x1c) + -1,
                         (Vector *)aVStack_3c);
      iVar6 = uVar5 + 200;
    }
    else {
      uVar7 = ToonAnimation::Data::calculateBoundingBox
                        (param_4,*(CImage ***)(this + iVar6),0,(Vector *)aVStack_3c);
      iVar6 = uVar3 * 4 + uVar5 + 0xb0;
    }
    *(undefined8 *)(this + iVar6 * 8) = uVar7;
    uVar2 = *(uint *)(this + (uVar3 * 4 + uVar5 + 0xb0) * 8 + 4);
    uVar4 = *(uint *)(this + (uVar3 * 4 + uVar5 + 0xb0) * 8);
    bVar1 = *(byte *)(DAT_000c97d4 + 0xc979c + uVar5);
    *(uint *)(this + (uVar3 * 4 + (uint)bVar1 + 0xb0) * 8) = uVar4;
    *(uint *)(this + (uVar3 * 4 + (uint)bVar1 + 0xb0) * 8 + 4) =
         uVar2 & 0xffff | (((int)uVar2 >> 0x10) + (uVar4 >> 0x10)) * -0x10000;
  }
  Vector<ToonAnimation::ReplacementImage>::~Vector(aVStack_3c);
  return;
}


