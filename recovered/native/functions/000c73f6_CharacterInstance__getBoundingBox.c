/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c73f6 CharacterInstance::getBoundingBox */

/* CharacterInstance::getBoundingBox() */

undefined8 __thiscall CharacterInstance::getBoundingBox(CharacterInstance *this)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = CharacterData::getBoundingBox
                    ((CharacterData *)**(undefined4 **)(this + 0x8c),(uchar)this[0x34],
                     *(uchar *)(*(undefined4 **)(this + 0x8c) + 0x13));
  uVar6 = *(undefined4 *)(this + 0x38);
  uVar1 = __floatsisf((int)((longlong)uVar8 >> 0x30));
  __mulsf3(uVar1,uVar6);
  iVar2 = __fixsfsi();
  uVar7 = *(undefined4 *)(this + 0x44);
  uVar1 = __floatsisf((int)(short)uVar8);
  __mulsf3(uVar1,uVar7);
  uVar3 = __fixsfsi();
  uVar1 = __floatsisf((int)(short)((ulonglong)uVar8 >> 0x20));
  __mulsf3(uVar1,uVar7);
  uVar4 = __fixsfsi();
  uVar1 = __floatsisf((int)uVar8 >> 0x10);
  __mulsf3(uVar1,uVar6);
  iVar5 = __fixsfsi();
  return CONCAT44(uVar4 & 0xffff | iVar2 << 0x10,iVar5 << 0x10 | uVar3 & 0xffff);
}


