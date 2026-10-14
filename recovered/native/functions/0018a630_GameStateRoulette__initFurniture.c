/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018a630 GameStateRoulette::initFurniture */

/* GameStateRoulette::initFurniture() */

void __thiscall GameStateRoulette::initFurniture(GameStateRoulette *this)

{
  GameStateRoulette GVar1;
  CImage *pCVar2;
  ImageElement *pIVar3;
  PackedImage *this_00;
  int iVar4;
  InputStream *pIVar5;
  undefined4 uVar6;
  Furniture *this_01;
  GameStateRoulette *pGVar7;
  GameStateRoulette *pGVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float extraout_s0;
  float extraout_s1;
  int local_28;
  String aSStack_20 [12];
  
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadFurnitureImages(*(ZombieCafe **)(this + 0xc));
  iVar4 = DAT_0018a860;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018a860),0x17,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x54) = pIVar3;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x20,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  iVar9 = DAT_0018a864;
  *(ImageElement **)(this + 0x50) = pIVar3;
  GVar1 = this[iVar9];
  this_00 = *(PackedImage **)(*(int *)(this + 0xc) + iVar4);
  if (GVar1 == (GameStateRoulette)0x0) {
    pCVar2 = (CImage *)PackedImage::getImage(this_00,0x21,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  }
  else {
    if (GVar1 == (GameStateRoulette)0x1) {
      pCVar2 = (CImage *)PackedImage::getImage(this_00,0x22,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
      *(ImageElement **)(this + 0x68) = pIVar3;
      goto LAB_0018a6bc;
    }
    if (GVar1 == (GameStateRoulette)0x2) {
      pCVar2 = (CImage *)PackedImage::getImage(this_00,0x23,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
    }
    else {
      pCVar2 = (CImage *)PackedImage::getImage(this_00,0x21,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
    }
  }
  *(ImageElement **)(this + 0x68) = pIVar3;
LAB_0018a6bc:
  iVar10 = ((byte)this[DAT_0018a864] + 8) * 0x2a8;
  pGVar8 = this + DAT_0018a86c;
  iVar9 = 0;
  iVar4 = iVar10 + *(int *)(DAT_0018a868 + 0x18a6ca);
  pGVar7 = this;
  do {
    iVar11 = *(int *)(iVar4 + iVar9);
    if (iVar11 != 0) {
      *(short *)(pGVar7 + DAT_0018a870) = (short)iVar11;
      *(short *)pGVar8 = (short)*(undefined4 *)(iVar4 + iVar9);
      pGVar8[2] = SUB41(*(undefined4 *)(iVar10 + *(int *)(DAT_0018a874 + 0x18a75a) + iVar9),0);
      pGVar8[3] = (GameStateRoulette)0x0;
    }
    iVar9 = iVar9 + 4;
    pGVar7 = pGVar7 + 2;
    pGVar8 = pGVar8 + 4;
  } while (iVar9 != 0x2a8);
  String::String(aSStack_20,*(String **)(DAT_0018a878 + 0x18a77a));
  pIVar5 = (InputStream *)SaveDataInputStream::open(aSStack_20);
  String::~String(aSStack_20);
  uVar6 = Cafe::deserialize(pIVar5,false,(ZombieCafe *)0x0);
  *(undefined4 *)(this + 0xe20) = uVar6;
  if (pIVar5 != (InputStream *)0x0) {
    (**(code **)(*(int *)pIVar5 + 0xc))(pIVar5);
    (**(code **)(*(int *)pIVar5 + 4))(pIVar5);
  }
  local_28 = 0;
  pGVar7 = this;
  pGVar8 = this;
  do {
    if (*(ushort *)(pGVar8 + DAT_0018a870) != DAT_0018a87c) {
      this_01 = (Furniture *)operator_new(100);
      Furniture::Furniture
                (this_01,*(FurnitureData **)
                          ((uint)*(ushort *)(pGVar7 + DAT_0018a86c) * 4 +
                          *(int *)(*(int *)(this + 0xe20) + 0x94)));
      *(Furniture **)(pGVar7 + 0xa20) = this_01;
      if (*(byte *)(*(int *)(this_01 + 0x38) + 0x44) - 5 < 2) {
        iVar4 = SmDev();
        iVar9 = DAT_0018a884 + 0x18a812;
      }
      else {
        iVar4 = SmDev();
        iVar9 = DAT_0018a880 + 0x18a808;
      }
      uVar6 = __mulsf3(*(undefined4 *)(iVar9 + iVar4 * 4 + 0x20),DAT_0018a888);
      *(undefined4 *)(this_01 + 0x60) = uVar6;
      local_28 = local_28 + 1;
    }
    pGVar8 = pGVar8 + 2;
    pGVar7 = pGVar7 + 4;
  } while (pGVar8 != this + 0x154);
  *(int *)(this + DAT_0018a88c) = local_28;
  selectFurniture(this,0);
  return;
}


