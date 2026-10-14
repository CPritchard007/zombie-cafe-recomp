/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00222748 ZukanHeadButton::getHeadImage */

/* ZukanHeadButton::getHeadImage(CharacterData*) */

void __thiscall ZukanHeadButton::getHeadImage(ZukanHeadButton *this,CharacterData *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (byte)this[0x60] & 2;
  if (((byte)this[0x60] & 2) != 0) {
    uVar2 = (uint)(*(int *)(param_1 + DAT_00222788) != 0);
  }
  if (((uint)*(ushort *)(param_1 + DAT_0022278c) + DAT_00222790 == 0) ||
     ((uint)*(ushort *)(param_1 + DAT_0022278c) + DAT_00222794 == 0)) {
    uVar1 = 0x1a;
  }
  else {
    uVar1 = (uint)**(byte **)(DAT_00222798 + 0x22277e);
  }
  CharacterData::getImage(param_1,uVar1,uVar2);
  return;
}


