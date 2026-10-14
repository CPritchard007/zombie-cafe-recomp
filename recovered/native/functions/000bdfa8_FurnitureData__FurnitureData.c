/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdfa8 FurnitureData::FurnitureData */

/* FurnitureData::FurnitureData(DataInputStream*, int, CImage***, ImageMap**) */

FurnitureData * __thiscall
FurnitureData::FurnitureData
          (FurnitureData *this,DataInputStream *param_1,int param_2,CImage ***param_3,
          ImageMap **param_4)

{
  FurnitureData FVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  CImage *this_00;
  ImageMap *pIVar10;
  int iVar11;
  code *pcVar12;
  FurnitureData *pFVar13;
  FurnitureData *pFVar14;
  int iVar15;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String((String *)(this + 0x2c));
  String::String((String *)(this + 100));
  *(int *)(this + 0x24) = param_2;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x28] = FVar1;
  DataInputStream::readUTF();
  String::operator=((String *)(this + 0x2c),aSStack_28);
  String::~String(aSStack_28);
  uVar5 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x34) = uVar5;
  FVar1 = (FurnitureData)DataInputStream::readBoolean(param_1);
  this[0x38] = FVar1;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x39] = FVar1;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x3a] = FVar1;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x3c) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x3e) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x40) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x42) = uVar2;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x44] = FVar1;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x45] = FVar1;
  uVar5 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x48) = uVar5;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x4c) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x4e) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x50) = uVar2;
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)(this + 0x52) = uVar2;
  uVar5 = DataInputStream::readFloat();
  *(undefined4 *)(this + 0x54) = uVar5;
  uVar5 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x58) = uVar5;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x5c] = FVar1;
  uVar5 = DataInputStream::readFloat();
  *(undefined4 *)(this + 0x60) = uVar5;
  DataInputStream::readUTF();
  String::operator=((String *)(this + 100),aSStack_20);
  String::~String(aSStack_20);
  uVar5 = DataInputStream::readFloat();
  *(undefined4 *)(this + 0x6c) = uVar5;
  FVar1 = (FurnitureData)DataInputStream::readBoolean(param_1);
  this[0x70] = FVar1;
  uVar5 = DataInputStream::readFloat();
  *(undefined4 *)(this + 0x74) = uVar5;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x78] = FVar1;
  FVar1 = (FurnitureData)DataInputStream::readByte(param_1);
  this[0x79] = FVar1;
  uVar5 = DataInputStream::readFloat();
  *(undefined4 *)(this + 0x7c) = uVar5;
  iVar15 = 0;
  pFVar14 = this + 0x3c;
  *(CImage ***)this = param_3[(byte)this[0x5c]];
  iVar11 = DAT_000be2cc + 0xbe120;
  pFVar13 = this;
  do {
    *(undefined4 *)(pFVar13 + 0x14) = **(undefined4 **)(DAT_000be2d0 + 0xbe126);
    *(undefined4 *)(pFVar13 + 4) = 0;
    if (this[0x44] == (FurnitureData)0x6) {
      this_00 = *(CImage **)(*(short *)pFVar14 * 4 + *(int *)this);
      uVar5 = CImage::getWidth(this_00);
      CImage::getHeight(this_00);
      uVar6 = __floatsisf();
      __mulsf3(uVar6,DAT_000be2d4);
      sVar3 = __fixsfsi();
      uVar5 = __floatsisf(uVar5);
      __mulsf3(uVar5,DAT_000be2d4);
      sVar4 = __fixsfsi();
      *(uint *)(pFVar13 + 4) = ((int)sVar4 >> 1) << 0x10 | (int)sVar3 >> 1 & 0xffffU;
    }
    *(undefined4 *)(pFVar13 + 0x14) = 0;
    uVar9 = (uint)*(byte *)(iVar15 + iVar11);
    pIVar10 = param_4[(byte)this[0x5c]];
    pcVar12 = *(code **)(pIVar10 + 8);
    iVar7 = *(int *)(pIVar10 + 0xc) >> 1;
    if (*(int *)(pIVar10 + 0xc) << 0x1f < 0) {
      pcVar12 = *(code **)(pcVar12 + *(int *)(pIVar10 + iVar7));
    }
    iVar7 = (*pcVar12)(pIVar10 + iVar7,(int)*(short *)pFVar14);
    if (iVar7 != 0) {
      if (iVar7 != 1) {
        uVar8 = ImageMap::getPoint((short)param_4[(byte)this[0x5c]],(uchar)*(short *)pFVar14);
        *(uint *)(pFVar13 + 0x14) = uVar8;
        if (((int)uVar9 < iVar15) &&
           ((int)*(short *)(this + (uVar9 + 0x1c) * 2 + 4) == (int)*(short *)pFVar14)) {
          CImage::getWidth(*(CImage **)
                            (*(short *)(this + (uVar9 + 0x1c) * 2 + 4) * 4 + *(int *)this));
          uVar5 = __floatsisf();
          uVar5 = __mulsf3(uVar5,DAT_000be2d4);
          uVar6 = __floatsisf((int)uVar8 >> 0x10);
          __subsf3(uVar5,uVar6);
          iVar7 = __fixsfsi();
          *(uint *)(pFVar13 + 0x14) = iVar7 << 0x10 | uVar8 & 0xffff;
        }
      }
      uVar8 = ImageMap::getPoint((short)param_4[(byte)this[0x5c]],(uchar)*(short *)pFVar14);
      *(uint *)(pFVar13 + 4) = uVar8;
      if (((int)uVar9 < iVar15) &&
         ((int)*(short *)(this + (uVar9 + 0x1c) * 2 + 4) == (int)*(short *)pFVar14)) {
        CImage::getWidth(*(CImage **)(*(short *)(this + (uVar9 + 0x1c) * 2 + 4) * 4 + *(int *)this))
        ;
        uVar5 = __floatsisf();
        uVar5 = __mulsf3(uVar5,DAT_000be2d4);
        uVar6 = __floatsisf((int)uVar8 >> 0x10);
        __subsf3(uVar5,uVar6);
        iVar7 = __fixsfsi();
        *(uint *)(pFVar13 + 4) = iVar7 << 0x10 | uVar8 & 0xffff;
      }
    }
    iVar15 = iVar15 + 1;
    pFVar13 = pFVar13 + 4;
    pFVar14 = pFVar14 + 2;
  } while (iVar15 != 4);
  return this;
}


