/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6b60 CharacterData::CharacterData */

/* CharacterData::CharacterData(unsigned short, String, bool, CharacterStats, unsigned char, float,
   PackedImage*, PackedImage*, int, unsigned char, unsigned char, float, int, float, float, unsigned
   char, short, float) */

CharacterData * __thiscall
CharacterData::CharacterData
          (CharacterData *this,undefined2 param_1,String *param_3,CharacterData param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,CharacterData param_11,undefined4 param_12,
          PackedImage *param_13,PackedImage *param_14,undefined4 param_15,CharacterData param_16,
          CharacterData param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
          undefined4 param_21,CharacterData param_22,undefined2 param_23,undefined4 param_24)

{
  void *__s;
  undefined4 uVar1;
  int iVar2;
  CharacterData *pCVar3;
  String *this_00;
  String aSStack_20 [12];
  
  this_00 = (String *)(this + DAT_000c6d64);
  String::String(this_00);
  String::String((String *)(this + 0xb10));
  String::String((String *)(this + DAT_000c6d68));
  String::String((String *)(this + DAT_000c6d6c));
  String::String((String *)(this + 0xb50));
  iVar2 = DAT_000c6d70;
  *(undefined4 *)(this + DAT_000c6d70) = 10;
  __s = operator_new__(0xf0);
  *(void **)(this + iVar2 + 8) = __s;
  memset(__s,0,*(int *)(this + iVar2) * 0x18);
  *(undefined4 *)(this + iVar2 + 4) = 0xffffffff;
  *(undefined2 *)(this + DAT_000c6d74) = param_1;
  String::String(aSStack_20,param_3);
  String::operator=(this_00,aSStack_20);
  String::~String(aSStack_20);
  this[DAT_000c6d78] = param_4;
  *(undefined4 *)(this + 0xaf0) = param_5;
  *(undefined4 *)(this + 0xaf4) = param_6;
  *(undefined4 *)(this + 0xaf8) = param_7;
  *(undefined4 *)(this + 0xafc) = param_8;
  *(undefined4 *)(this + 0xb00) = param_9;
  *(undefined4 *)(this + 0xb04) = param_10;
  this[DAT_000c6d7c] = param_11;
  *(undefined4 *)(this + DAT_000c6d80) = param_12;
  iVar2 = DAT_000c6d84;
  *(PackedImage **)(this + 0x560) = param_13;
  *(PackedImage **)(this + iVar2) = param_14;
  *(undefined4 *)(this + 0xb20) = param_15;
  this[DAT_000c6d88] = param_16;
  this[DAT_000c6d8c] = param_17;
  *(undefined4 *)(this + 0xb30) = param_18;
  *(undefined4 *)(this + DAT_000c6d90) = param_19;
  *(undefined4 *)(this + DAT_000c6d94) = param_20;
  *(undefined4 *)(this + DAT_000c6d98) = param_21;
  this[0xb40] = param_22;
  *(undefined2 *)(this + DAT_000c6d9c) = param_23;
  *(undefined4 *)(this + DAT_000c6da0) = param_24;
  memset(this,0,0x560);
  *(undefined4 *)(this + 0x570) = 0;
  *(undefined4 *)(this + 0x574) = 0;
  this[0xae0] = (CharacterData)0x0;
  if (param_13 == (PackedImage *)0x0) {
    *(undefined4 *)(this + 0x568) = 0;
  }
  else {
    uVar1 = PackedImage::getImages(param_13,true);
    *(undefined4 *)(this + 0x568) = uVar1;
  }
  if (param_14 == (PackedImage *)0x0) {
    *(undefined4 *)(this + DAT_000c6da4) = 0;
  }
  else {
    uVar1 = PackedImage::getImages(param_14,true);
    *(undefined4 *)(this + DAT_000c6da4) = uVar1;
  }
  iVar2 = 0x2b;
  pCVar3 = this;
  do {
    *(undefined4 *)(pCVar3 + 0x580) = 0;
    *(undefined4 *)(pCVar3 + 0x584) = 0;
    *(undefined4 *)(pCVar3 + 0x588) = 0;
    *(undefined4 *)(pCVar3 + 0x58c) = 0;
    *(undefined4 *)(pCVar3 + 0x590) = 0;
    *(undefined4 *)(pCVar3 + 0x594) = 0;
    iVar2 = iVar2 + -1;
    *(undefined4 *)(pCVar3 + 0x598) = 0;
    *(undefined4 *)(pCVar3 + 0x59c) = 0;
    pCVar3 = pCVar3 + 0x20;
  } while (iVar2 != 0);
  *(undefined4 *)(this + DAT_000c6da8) = 0;
  return this;
}


