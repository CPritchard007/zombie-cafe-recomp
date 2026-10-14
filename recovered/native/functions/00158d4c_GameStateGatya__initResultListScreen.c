/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00158d4c GameStateGatya::initResultListScreen */

/* GameStateGatya::initResultListScreen() */

void __thiscall GameStateGatya::initResultListScreen(GameStateGatya *this)

{
  char cVar1;
  CImage *pCVar2;
  ImageElement *pIVar3;
  int iVar4;
  ZCImageButton *this_00;
  int iVar5;
  Character *pCVar6;
  uchar uVar7;
  Character CVar8;
  code *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  GameStateGatya *pGVar13;
  float extraout_s0;
  float extraout_s0_00;
  float fVar14;
  undefined8 uVar15;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_30;
  String aSStack_20 [12];
  
  piVar11 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar11 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xf,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  *(ImageElement **)(this + 0x1e8) = pIVar3;
  uVar15 = (*pcVar9)(piVar11,pIVar3);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x1e8),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  ImageElement::setColor(*(ImageElement **)(this + 0x1e8),0xff000000);
  piVar11 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar11 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001590b0),0x22,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  *(ImageElement **)(this + 0x1f8) = pIVar3;
  (*pcVar9)(piVar11,pIVar3);
  iVar5 = DAT_001590b4;
  piVar11 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar11 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001590b4),0x19,false);
  iVar4 = SmDev();
  uVar10 = *(undefined4 *)(DAT_001590b8 + iVar4 * 4 + 0x158e50);
  pIVar3 = (ImageElement *)operator_new(0x98);
  uVar16 = 0x12;
  uVar17 = 1;
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0,extraout_s1,(uchar)uVar10,false);
  *(ImageElement **)(this + 0x1ec) = pIVar3;
  (*pcVar9)(piVar11,pIVar3,pcVar9,0x1ec,uVar16,uVar17);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x26,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  *(ImageElement **)(this + 0x204) = pIVar3;
  iVar4 = SmDev();
  iVar5 = DAT_001590c0;
  uVar10 = __mulsf3(*(undefined4 *)(DAT_001590bc + iVar4 * 4 + 0x158eca),
                    *(undefined4 *)(this + 0xf10));
  *(undefined4 *)(pIVar3 + 0x68) = uVar10;
  iVar12 = *(int *)(this + 0x204);
  iVar4 = SmDev();
  uVar10 = __mulsf3(*(undefined4 *)(DAT_001590c4 + iVar4 * 4 + 0x158e80),
                    *(undefined4 *)(this + iVar5));
  *(undefined4 *)(iVar12 + 0x6c) = uVar10;
  piVar11 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar11 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001590b4),3,false);
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'$',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x208) = this_00;
  (*pcVar9)(piVar11,this_00);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001590b4),0x17,false);
  iVar5 = SmDev();
  uVar10 = *(undefined4 *)(DAT_001590c8 + iVar5 * 4 + 0x158f34);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_00,extraout_s1_00,(uchar)uVar10,false);
  *(ImageElement **)(this + 500) = pIVar3;
  pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),9,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
  iVar5 = DAT_001590cc;
  *(ImageElement **)(this + 0x1f0) = pIVar3;
  local_30 = 0;
  pGVar13 = this;
  do {
    if (*(int *)(*(int *)(this + 0xeb0) + 4) + 1 <= local_30) {
      selectCharacter(this,0);
      *(undefined4 *)(this + DAT_001590e4) = 0;
      *(undefined4 *)(this + DAT_001590e8) = 0;
      *(undefined4 *)(this + 0xe50) = 0;
      this[DAT_001590ec] = (GameStateGatya)0x0;
      *(undefined4 *)(this + DAT_001590f0) = 0;
      this[0xe40] = (GameStateGatya)0x1;
      return;
    }
    iVar12 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0xeb0) + 8) + local_30 * 4) * 4 +
                     *(int *)(*(int *)(this + 0xc) + DAT_001590d0));
    String::String(aSStack_20,(char *)(iVar5 + 0x158f34));
    pCVar6 = (Character *)operator_new(0x6c);
    Character::Character(pCVar6,iVar12,2,1,aSStack_20);
    String::~String(aSStack_20);
    iVar4 = SmDev();
    fVar14 = (float)__mulsf3(*(undefined4 *)(DAT_001590d4 + iVar4 * 4 + 0x158f92),
                             *(undefined4 *)(this + DAT_001590c0));
    uVar10 = createCharacterInstance((Character *)this,fVar14);
    iVar4 = DAT_001590d8;
    *(undefined4 *)(pGVar13 + 0x214) = uVar10;
    *(undefined4 *)(pCVar6 + 0x28) =
         *(undefined4 *)(*(int *)(*(int *)(this + iVar4) + 8) + local_30 * 4);
    CVar8 = pCVar6[0x36];
    if ((byte)CVar8 == 0) {
      uVar7 = '\x01';
    }
    else {
      uVar7 = *(uchar *)(DAT_001590dc + (uint)(byte)CVar8 * 0x24 + 0x158ff1);
      CVar8 = (Character)0x0;
    }
    CharacterInstance::setCurrentAnimation
              (*(CharacterInstance **)(pGVar13 + 0x214),uVar7,'\x01',(bool)CVar8);
    cVar1 = *(char *)(iVar12 + 0xb40);
    if (cVar1 == '\x05') {
      pCVar2 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001590b4),0x27,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
LAB_00159034:
      *(ImageElement **)(pGVar13 + DAT_001590e0) = pIVar3;
    }
    else if (cVar1 == '\x06') {
      pCVar2 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x1d,false);
      pIVar3 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar3,pCVar2,'\x12',true);
      goto LAB_00159034;
    }
    pGVar13 = pGVar13 + 4;
    local_30 = local_30 + 1;
  } while( true );
}


