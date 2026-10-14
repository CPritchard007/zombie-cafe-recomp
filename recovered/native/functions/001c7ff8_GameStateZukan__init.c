/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7ff8 GameStateZukan::init */

/* GameStateZukan::init() */

undefined4 __thiscall GameStateZukan::init(GameStateZukan *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ScreenElement *this_00;
  CImage *pCVar4;
  ImageElement *pIVar5;
  BitmapTextElement *pBVar6;
  ZCImageButton *pZVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  GameStateZukan *pGVar12;
  int iVar13;
  int *piVar14;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar15;
  int local_88;
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar1 = DAT_001c83dc + 0x1c8006;
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  this[0x7c] = (GameStateZukan)0x1;
  iVar13 = **(int **)(iVar1 + DAT_001c83e0);
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar13,SUB41(*(undefined4 *)(DAT_001c83e4 + iVar2 * 4 + 0x1c8042),0))
  ;
  *(undefined4 *)(this + 0x78) = uVar3;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  iVar2 = DAT_001c83e8;
  *(ScreenElement **)(this + 0x1c) = this_00;
  printf((char *)(iVar2 + 0x1c805c),2);
  iVar2 = DAT_001c83ec;
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),2,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x24) = pIVar5;
  (*pcVar8)(piVar11,pIVar5);
  uVar3 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),4,false);
  piVar11 = *(int **)(this + 0x1c);
  *(undefined4 *)(this + 0x74) = uVar3;
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x74),'\x12',true);
  *(ImageElement **)(this + 0x34) = pIVar5;
  (*pcVar8)(piVar11,pIVar5);
  uVar3 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),6,false);
  piVar11 = *(int **)(this + 0x1c);
  *(undefined4 *)(this + 0x70) = uVar3;
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x70),'\x12',true);
  *(ImageElement **)(this + 0x2c) = pIVar5;
  (*pcVar8)(piVar11,pIVar5);
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),9,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0x20) = pIVar5;
  (*pcVar8)(piVar11,pIVar5);
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  Vector<String>::elementAt((int)aSStack_74);
  iVar13 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_001c83f4 + iVar2 * 4 + 0x1c8186) + 0x136) * 4 + iVar13);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_74,uVar3,**(undefined4 **)(iVar1 + DAT_001c83f8),1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x58) = pBVar6;
  (*pcVar8)(piVar11,pBVar6);
  String::~String(aSStack_74);
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  String::String(aSStack_6c,(char *)(DAT_001c83fc + 0x1c81a8));
  iVar1 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_001c8400 + iVar2 * 4 + 0x1c8200) + 0x136) * 4 + iVar1);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_6c,uVar3,0xff000000,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x5c) = pBVar6;
  (*pcVar8)(piVar11,pBVar6);
  String::~String(aSStack_6c);
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),7,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x11',true);
  *(ImageElement **)(this + 0x30) = pIVar5;
  (*pcVar8)(piVar11,pIVar5);
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),1,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 100) = pZVar7;
  (*pcVar8)(piVar11,pZVar7);
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),0,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\"',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = pZVar7;
  uVar15 = (*pcVar8)(piVar11,pZVar7);
  uVar15 = ImageButton::setScale
                     (*(ImageButton **)(this + 100),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20)
                     );
  ImageButton::setScale
            (*(ImageButton **)(this + 0x68),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xc4) = pZVar7;
  pcVar8 = *(code **)(*(int *)pZVar7 + 0x2c);
  Vector<String>::elementAt((int)aSStack_64);
  iVar1 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_001c8408 + iVar2 * 4 + 0x1c8374) + 0x136) * 4 + iVar1);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_64,uVar3,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 200) = pBVar6;
  (*pcVar8)(pZVar7,pBVar6);
  pGVar12 = this + 0xc4;
  String::~String(aSStack_64);
  FUN_001c7944(*(undefined4 *)(this + 200),
               ((int)*(short *)(*(int *)pGVar12 + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)pGVar12 + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)pGVar12 + 0x20))(*(int **)pGVar12,0);
  (**(code **)(**(int **)(this + 0x1c) + 0x2c))(*(int **)(this + 0x1c),*(undefined4 *)pGVar12);
  piVar11 = *(int **)(this + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c83ec),3,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x6c) = pZVar7;
  iVar2 = 0;
  (*pcVar8)(piVar11,pZVar7);
  iVar1 = 0;
  local_88 = 0;
  do {
    if ((int)(uint)*(ushort *)(*(int *)(this + 0xc) + DAT_001c868c) <= iVar2) {
      piVar11 = *(int **)(this + 0x1c);
      pcVar8 = *(code **)(*piVar11 + 0x2c);
      Vector<String>::elementAt((int)aSStack_5c);
      iVar13 = *(int *)(this + 0xc);
      iVar2 = SmDev();
      uVar3 = *(undefined4 *)((*(int *)(DAT_001c8694 + iVar2 * 4 + 0x1c8540) + 0x136) * 4 + iVar13);
      pBVar6 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar6,aSStack_5c,uVar3,DAT_001c8698,1,1,0x11,0,0);
      *(BitmapTextElement **)(this + 0x60) = pBVar6;
      (*pcVar8)(piVar11,pBVar6);
      String::~String(aSStack_5c);
      StringBuffer::StringBuffer(aSStack_34);
      Vector<String>::elementAt((int)aSStack_54);
      StringBuffer::append(aSStack_34,aSStack_54);
      String::~String(aSStack_54);
      piVar11 = (int *)__divsi3(iVar1 * 100,local_88 << 1);
      String::valueOf((int)aSStack_4c);
      StringBuffer::append(aSStack_34,aSStack_4c);
      String::~String(aSStack_4c);
      String::String(aSStack_44,(char *)(DAT_001c869c + 0x1c858a));
      StringBuffer::append(aSStack_34,aSStack_44);
      String::~String(aSStack_44);
      piVar14 = *(int **)(this + 0x60);
      pcVar8 = *(code **)(*piVar14 + 0x44);
      StringBuffer::toString();
      (*pcVar8)(piVar14,aSStack_3c);
      String::~String(aSStack_3c);
      Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),0x1b,piVar11);
      printf((char *)(DAT_001c86a0 + 0x1c85ca),local_88);
      printf((char *)(DAT_001c86a4 + 0x1c85d6),
             (uint)*(ushort *)(*(int *)(this + 0xc) + DAT_001c868c));
      CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
      return 1;
    }
    iVar13 = *(int *)(iVar2 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001c8680));
    if (*(short *)(iVar13 + DAT_001c8684) != 0) {
      for (iVar9 = 0; iVar9 <= *(int *)(this + 0xd0); iVar9 = iVar9 + 1) {
        if (*(int *)(iVar9 * 4 + *(int *)(this + 0xd4)) == iVar13) goto LAB_001c84c2;
      }
      if ((*(int *)(iVar13 + 0x560) != 0) && (*(int *)(iVar13 + DAT_001c8688) != 0)) {
        iVar10 = *(int *)(this + 0xcc);
        iVar9 = *(int *)(this + 0xd0) + 2;
        if (iVar10 < iVar9) {
          if (iVar9 + iVar10 * -2 < 0 != SBORROW4(iVar9,iVar10 * 2)) {
            iVar9 = iVar10 * 2;
          }
          Vector<CharacterData*>::resize((Vector<CharacterData*> *)(this + 0xcc),iVar9,-1);
        }
        iVar9 = *(int *)(this + 0xd0);
        *(int *)(this + 0xd0) = iVar9 + 1;
        *(int *)((iVar9 + 1) * 4 + *(int *)(this + 0xd4)) = iVar13;
        iVar9 = ZombieCafe::getZukanUnlock(*(ZombieCafe **)(this + 0xc),iVar2);
        iVar13 = *(int *)(this + 0xd8);
        iVar10 = *(int *)(this + 0xdc) + 2;
        if (iVar13 < iVar10) {
          iVar13 = iVar13 * 2;
          if (iVar13 < iVar10) {
            iVar13 = iVar10;
          }
          Vector<unsigned_char>::resize((Vector<unsigned_char> *)(this + 0xd8),iVar13,-1);
        }
        iVar13 = *(int *)(this + 0xdc);
        *(int *)(this + 0xdc) = iVar13 + 1;
        *(char *)(*(int *)(this + 0xe0) + iVar13 + 1) = (char)iVar9;
        if ((iVar9 == 1) || (iVar9 == 2)) {
          iVar1 = iVar1 + 1;
        }
        else if (iVar9 == 3) {
          iVar1 = iVar1 + 2;
        }
        local_88 = local_88 + 1;
      }
    }
LAB_001c84c2:
    iVar2 = iVar2 + 1;
  } while( true );
}


