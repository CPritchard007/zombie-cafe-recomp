/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166900 GameStateMap::addEventRaid3Shop */

/* GameStateMap::addEventRaid3Shop() */

void __thiscall GameStateMap::addEventRaid3Shop(GameStateMap *this)

{
  CImage *pCVar1;
  ZCImageButton *this_00;
  TrueTypeTextElement *pTVar2;
  BitmapTextElement *pBVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if ((**(char **)(DAT_00166b54 + 0x16690c) == '\0') ||
     (iVar5 = *(int *)(this + 0xc), *(int *)(iVar5 + 0x680) < 8)) {
    *(undefined4 *)(this + 0x2d4) = 0;
  }
  else {
    *(undefined4 *)(this + 0x30c) = 0;
    this[0x310] = (GameStateMap)0x0;
    this[0x324] = (GameStateMap)0x0;
    this[DAT_00166b58] = (GameStateMap)0x0;
    piVar6 = *(int **)(this + 0x14);
    pcVar4 = *(code **)(*piVar6 + 0x2c);
    pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar5 + 0x7f8),0x25,false);
    this_00 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(this_00,'$',pCVar1,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x2d4) = this_00;
    (*pcVar4)(piVar6,this_00);
    piVar6 = *(int **)(this + 0x14);
    uVar7 = *(undefined4 *)(this + DAT_00166b5c);
    pcVar4 = *(code **)(*piVar6 + 0x2c);
    String::String(aSStack_40,(char *)(DAT_00166b60 + 0x16698e));
    pTVar2 = (TrueTypeTextElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement(pTVar2,aSStack_40,uVar7,0xffffffff,0,0,0x12,0);
    *(TrueTypeTextElement **)(this + 0x2f4) = pTVar2;
    (*pcVar4)(piVar6,pTVar2);
    String::~String(aSStack_40);
    piVar6 = *(int **)(this + 0x2f4);
    pcVar4 = *(code **)(*piVar6 + 0x44);
    String::String(aSStack_38,(char *)(DAT_00166b64 + 0x1669d6));
    (*pcVar4)(piVar6,aSStack_38);
    String::~String(aSStack_38);
    *(undefined4 *)(this + 0x2d8) = 0;
    *(undefined4 *)(this + 0x2e0) = 0;
    *(undefined4 *)(this + 0x2e4) = 0;
    *(undefined4 *)(this + 0x2e8) = 0;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(undefined1 *)(*(int *)(this + 0x2f4) + 0x7f) = 0x11;
    TrueTypeTextElement::setBaseTransform
              (*(TrueTypeTextElement **)(this + 0x2f4),(ccMat2x3 *)(this + 0x3d8));
    piVar6 = *(int **)(this + 0x2f4);
    pcVar4 = *(code **)(*piVar6 + 0x18);
    uVar7 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x2d4) + 0xc));
    iVar5 = SmDev();
    __addsf3(uVar7,*(undefined4 *)(iVar5 * 4 + *(int *)(DAT_00166b68 + 0x166a3e)));
    uVar7 = __fixsfsi();
    (*pcVar4)(piVar6,uVar7,*(undefined4 *)(*(int *)(this + 0x2d4) + 0x10));
    iVar5 = SmDev();
    if ((iVar5 == 3) || (iVar5 = SmDev(), iVar5 == 4)) {
      *(undefined1 *)(*(int *)(this + 0x2f4) + 0xc4) = 0;
    }
    piVar6 = *(int **)(this + 0x14);
    pcVar4 = *(code **)(*piVar6 + 0x2c);
    Vector<String>::elementAt((int)aSStack_30);
    String::valueOf((int)aSStack_28);
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    iVar8 = *(int *)(this + 0xc);
    iVar5 = SmDev();
    uVar7 = *(undefined4 *)((*(int *)(DAT_00166b70 + iVar5 * 4 + 0x166ad6) + 0x136) * 4 + iVar8);
    pBVar3 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar3,aSStack_20,uVar7,0xffffffff,0xff000000,0,0,0x11,0,0)
    ;
    *(BitmapTextElement **)(this + 0x2f8) = pBVar3;
    (*pcVar4)(piVar6,pBVar3);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    *(undefined4 *)(this + 800) = 0;
  }
  return;
}


