/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018b634 GameStateRoulette::initRoulette */

/* GameStateRoulette::initRoulette() */

void __thiscall GameStateRoulette::initRoulette(GameStateRoulette *this)

{
  GameStateRoulette GVar1;
  CImage *pCVar2;
  ImageElement *pIVar3;
  Character *pCVar4;
  CharacterInstance *this_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  GameStateRoulette *pGVar9;
  float extraout_s0;
  float fVar10;
  float extraout_s1;
  undefined4 uVar11;
  int iVar12;
  GameStateRoulette *local_2c;
  GameStateRoulette *local_24;
  String aSStack_20 [12];
  
  L_PrintLog((char *)(DAT_0018b8e4 + 0x18b644),(char *)(DAT_0018b8e0 + 0x18b642));
  iVar6 = DAT_0018b8e8;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018b8e8),0x17,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  uVar11 = 1;
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x54) = pIVar3;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar6),0x1a,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  iVar12 = DAT_0018b8f0;
  iVar6 = DAT_0018b8ec;
  *(ImageElement **)(this + 0x50) = pIVar3;
  L_PrintLog((char *)(iVar6 + 0x18b69e),(char *)(iVar12 + 0x18b6a0));
  iVar6 = *(int *)(this + 0xc);
  GVar1 = this[DAT_0018b8f4];
  if (GVar1 == (GameStateRoulette)0x0) {
    pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar6 + DAT_0018b8e8),0x1b,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  }
  else {
    if (GVar1 == (GameStateRoulette)0x1) {
      pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar6 + DAT_0018b8e8),0x1c,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
      *(ImageElement **)(this + 0x68) = pIVar3;
      goto LAB_0018b73e;
    }
    if (GVar1 == (GameStateRoulette)0x2) {
      pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar6 + DAT_0018b8e8),0x1d,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
    }
    else {
      pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar6 + DAT_0018b8e8),0x1e,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
    }
  }
  *(ImageElement **)(this + 0x68) = pIVar3;
LAB_0018b73e:
  iVar6 = DAT_0018b900;
  L_PrintLog((char *)(DAT_0018b8f8 + 0x18b748),(char *)(DAT_0018b8fc + 0x18b74a));
  iVar6 = *(int *)(iVar6 + 0x18b750);
  pGVar9 = this + DAT_0018b904;
  iVar12 = 0;
  local_2c = this;
  do {
    iVar7 = ((uint)(byte)this[DAT_0018b8f4] * 0xaa + iVar12) * 4;
    uVar5 = *(uint *)(iVar7 + iVar6);
    if (uVar5 != 0) {
      *(short *)(local_2c + DAT_0018b908) = (short)uVar5;
      *(short *)(pGVar9 + -2) = (short)*(undefined4 *)(iVar7 + iVar6);
      uVar8 = *(undefined4 *)(iVar7 + *(int *)(DAT_0018b90c + 0x18b78a));
      pGVar9[1] = (GameStateRoulette)0x0;
      *pGVar9 = SUB41(uVar8,0);
      iVar7 = ZombieCafe::getSpecialAttackUnit(*(ZombieCafe **)(this + 0xc),uVar5 & 0xffff);
      if (iVar7 == 0) {
        if (4 < (byte)*pGVar9) goto LAB_0018b7f0;
        pCVar2 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018b8e8),0x27,false);
        pIVar3 = (ImageElement *)operator_new(0x98);
        ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
      }
      else {
        pCVar2 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018b8e8),0x35,false);
        pIVar3 = (ImageElement *)operator_new(0x98);
        ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
      }
      *(ImageElement **)(pGVar9 + DAT_0018b910) = pIVar3;
    }
LAB_0018b7f0:
    iVar7 = DAT_0018b91c;
    pGVar9 = pGVar9 + 4;
    iVar12 = iVar12 + 1;
    local_2c = local_2c + 2;
    if (iVar12 == 0xaa) {
      L_PrintLog((char *)(DAT_0018b914 + 0x18b814),(char *)(DAT_0018b918 + 0x18b816));
      iVar6 = 0;
      local_24 = this;
      do {
        if (*(ushort *)(local_24 + DAT_0018b908) != DAT_0018b920) {
          uVar8 = *(undefined4 *)
                   ((uint)*(ushort *)(local_24 + DAT_0018b908) * 4 +
                   *(int *)(*(int *)(this + 0xc) + DAT_0018b924));
          String::String(aSStack_20,(char *)(iVar7 + 0x18b81c));
          pCVar4 = (Character *)operator_new(0x6c);
          Character::Character(pCVar4,uVar8,2,1,aSStack_20,uVar11,pCVar4);
          String::~String(aSStack_20);
          fVar10 = (float)SmDev();
          this_00 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar10);
          *(CharacterInstance **)(this + (iVar6 + 0x24) * 4 + 4) = this_00;
          CharacterInstance::setCurrentAnimation(this_00,'\x01','\x01',false);
          iVar6 = iVar6 + 1;
        }
        local_24 = local_24 + 2;
      } while (local_24 != this + 0x154);
      L_PrintLog((char *)(DAT_0018b92c + 0x18b89c),(char *)(DAT_0018b930 + 0x18b89e));
      *(int *)(this + 0x738) = iVar6;
      selectCharacter(this,0);
      return;
    }
  } while( true );
}


