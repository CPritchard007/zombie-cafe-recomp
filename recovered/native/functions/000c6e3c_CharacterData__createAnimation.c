/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6e3c CharacterData::createAnimation */

/* CharacterData::createAnimation(unsigned char, unsigned char, unsigned char) const */

undefined8 __thiscall
CharacterData::createAnimation(CharacterData *this,uchar param_1,uchar param_2,uchar param_3)

{
  ToonAnimation *this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float extraout_s0;
  float extraout_s0_00;
  
  uVar5 = (uint)param_3;
  uVar3 = (uint)param_2;
  uVar1 = (uint)param_1;
  iVar2 = ((uVar1 * 0x2b + uVar3) * 4 + uVar5) * 4;
  if (*(int *)(this + iVar2) == 0) {
    uVar4 = 0xff;
    if (uVar5 < 4) {
      uVar4 = (uint)*(byte *)(DAT_000c6ee4 + 0xc6e84 + uVar5);
    }
    iVar2 = ((uVar1 * 0x2b + uVar3) * 4 + uVar4) * 4;
    this_00 = *(ToonAnimation **)(this + iVar2);
    if (this_00 == (ToonAnimation *)0x0) goto LAB_000c6ece;
    this_00 = (ToonAnimation *)operator_new(0x3c);
    ToonAnimation::ToonAnimation
              (this_00,*(Data **)(this + iVar2),*(PackedImage **)(this + (uVar1 + 0x158) * 4),
               extraout_s0_00);
    this_00[7] = (ToonAnimation)0x1;
  }
  else {
    this_00 = (ToonAnimation *)operator_new(0x3c);
    ToonAnimation::ToonAnimation
              (this_00,*(Data **)(this + iVar2),*(PackedImage **)(this + (uVar1 + 0x158) * 4),
               extraout_s0);
  }
  if ((uVar3 < 0x19) && ((1 << uVar3 & DAT_000c6ee8) != 0)) {
    this_00[4] = (ToonAnimation)0x0;
  }
LAB_000c6ece:
  return CONCAT44(this,this_00);
}


