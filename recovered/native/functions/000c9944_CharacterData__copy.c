/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c9944 CharacterData::copy */

/* CharacterData::copy() */

CharacterData * __thiscall CharacterData::copy(CharacterData *this)

{
  CharacterData *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_58;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  String::String(aSStack_48,(String *)(this + DAT_000c9ae4));
  uVar1 = *(undefined4 *)(this + 0x560);
  uVar2 = *(undefined4 *)(this + DAT_000c9aec);
  this_00 = (CharacterData *)operator_new(DAT_000c9ae8);
  CharacterData(this_00,*(undefined2 *)(this + DAT_000c9af0),aSStack_48,this[DAT_000c9af4],
                *(undefined4 *)(this + 0xaf0),*(undefined4 *)(this + 0xaf4),
                *(undefined4 *)(this + 0xaf8),*(undefined4 *)(this + 0xafc),
                *(undefined4 *)(this + 0xb00),*(undefined4 *)(this + 0xb04),this[DAT_000c9af8],
                *(undefined4 *)(this + DAT_000c9afc),uVar1,uVar2,*(undefined4 *)(this + 0xb20),
                this[DAT_000c9b00],this[DAT_000c9b04],*(undefined4 *)(this + 0xb30),
                *(undefined4 *)(this + DAT_000c9b08),*(undefined4 *)(this + DAT_000c9b0c),
                *(undefined4 *)(this + DAT_000c9b10),this[0xb40],
                (int)*(short *)(this + DAT_000c9b14),*(undefined4 *)(this + DAT_000c9b18));
  String::~String(aSStack_48);
  iVar4 = DAT_000c9b1c;
  this_00[0xae0] = (CharacterData)0x1;
  for (iVar3 = 0; iVar3 < *(int *)(this + iVar4 + 4) + 1; iVar3 = iVar3 + 1) {
    Vector<CharacterData::ReplacementImageWithForm>::elementAt((int)&local_30);
    Vector<CharacterData::ReplacementImageWithForm>::addElement
              (this_00 + DAT_000c9b1c,local_30,local_2c,local_28,local_24,local_20,local_1c);
  }
  local_58 = 0;
  do {
    iVar4 = 0;
    do {
      iVar3 = 0;
      do {
        if (*(Data **)(this + iVar3 * 4 + (iVar4 + local_58 * 0x2b) * 0x10) != (Data *)0x0) {
          setAnimationData(this_00,(uchar)local_58,(uchar)iVar4,(uchar)iVar3,
                           *(Data **)(this + iVar3 * 4 + (iVar4 + local_58 * 0x2b) * 0x10));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x2b);
    local_58 = local_58 + 1;
  } while (local_58 != 2);
  String::String(aSStack_40,(String *)(this + 0xb10));
  String::operator=((String *)(this_00 + 0xb10),aSStack_40);
  iVar4 = DAT_000c9b20;
  String::~String(aSStack_40);
  String::String(aSStack_38,(String *)(this + iVar4));
  String::operator=((String *)(this_00 + iVar4),aSStack_38);
  String::~String(aSStack_38);
  return this_00;
}


