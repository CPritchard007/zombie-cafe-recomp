/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016a038 GameStateMap::addAmpouleRaidShop */

/* GameStateMap::addAmpouleRaidShop() */

void __thiscall GameStateMap::addAmpouleRaidShop(GameStateMap *this)

{
  int iVar1;
  CImage *pCVar2;
  ZCImageButton *this_00;
  TrueTypeTextElement *pTVar3;
  BitmapTextElement *pBVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0016a2fc + 0x16a044);
  local_1c = *piVar6;
  iVar1 = ZombieCafe::isAmpouleRaid_Advent(*(ZombieCafe **)(this + 0xc));
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x328) = 0;
  }
  else {
    iVar1 = ZombieCafe::getAmpouleRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
    *(int *)(this + 0x360) = iVar1 + 1;
    this[0x364] = (GameStateMap)0x0;
    this[0x378] = (GameStateMap)0x0;
    this[DAT_0016a300] = (GameStateMap)0x0;
    piVar7 = *(int **)(this + 0x14);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x29,false);
    this_00 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(this_00,'$',pCVar2,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x328) = this_00;
    (*pcVar5)(piVar7,this_00);
    piVar7 = *(int **)(this + 0x14);
    uVar8 = *(undefined4 *)(this + DAT_0016a304);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    String::String(aSStack_144,(char *)(DAT_0016a308 + 0x16a0cc));
    pTVar3 = (TrueTypeTextElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement(pTVar3,aSStack_144,uVar8,0xffffffff,0,0,0x12,0);
    *(TrueTypeTextElement **)(this + 0x348) = pTVar3;
    (*pcVar5)(piVar7,pTVar3);
    iVar1 = DAT_0016a30c;
    String::~String(aSStack_144);
    iVar9 = DAT_0016a310;
    piVar7 = *(int **)(iVar1 + 0x16a10e);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0x348));
    L_PrintLog((char *)(iVar9 + 0x16a11e),(char *)(DAT_0016a314 + 0x16a122));
    sprintf(acStack_11c,(char *)(DAT_0016a318 + 0x16a130),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(iVar9 + 0x16a11e),acStack_11c);
    piVar7 = *(int **)(this + 0x348);
    pcVar5 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_13c,(char *)(DAT_0016a31c + 0x16a148));
    (*pcVar5)(piVar7,aSStack_13c);
    String::~String(aSStack_13c);
    *(undefined4 *)(this + 0x32c) = 0;
    *(undefined4 *)(this + 0x334) = 0;
    *(undefined4 *)(this + 0x338) = 0;
    *(undefined4 *)(this + 0x33c) = 0;
    *(undefined4 *)(this + 0x340) = 0;
    *(undefined1 *)(*(int *)(this + 0x348) + 0x7f) = 0x11;
    TrueTypeTextElement::setBaseTransform
              (*(TrueTypeTextElement **)(this + 0x348),(ccMat2x3 *)(this + 0x3f0));
    piVar7 = *(int **)(this + 0x348);
    pcVar5 = *(code **)(*piVar7 + 0x18);
    uVar8 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x328) + 0xc));
    iVar1 = SmDev();
    __addsf3(uVar8,*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0016a320 + 0x16a1b0)));
    uVar8 = __fixsfsi();
    (*pcVar5)(piVar7,uVar8,*(undefined4 *)(*(int *)(this + 0x328) + 0x10));
    iVar1 = SmDev();
    if ((iVar1 == 3) || (iVar1 = SmDev(), iVar1 == 4)) {
      *(undefined1 *)(*(int *)(this + 0x348) + 0xc4) = 0;
    }
    piVar7 = *(int **)(this + 0x14);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    Vector<String>::elementAt((int)aSStack_134);
    String::valueOf((int)aSStack_12c);
    String::operator+(aSStack_124,aSStack_134,aSStack_12c);
    iVar9 = *(int *)(this + 0xc);
    iVar1 = SmDev();
    uVar8 = *(undefined4 *)((*(int *)(DAT_0016a328 + iVar1 * 4 + 0x16a248) + 0x136) * 4 + iVar9);
    pBVar4 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement
              (pBVar4,aSStack_124,uVar8,0xffffffff,0xff000000,0,0,0x11,0,0);
    *(BitmapTextElement **)(this + 0x34c) = pBVar4;
    (*pcVar5)(piVar7,pBVar4);
    String::~String(aSStack_124);
    String::~String(aSStack_12c);
    String::~String(aSStack_134);
    *(undefined1 *)(*(int *)(this + 0x34c) + 0x7f) = 0x11;
    BitmapTextElement::setBaseTransform
              (*(BitmapTextElement **)(this + 0x34c),(ccMat2x3 *)(this + 0x3d8));
    (**(code **)(**(int **)(this + 0x34c) + 0x18))
              (*(int **)(this + 0x34c),*(undefined4 *)(*(int *)(this + 0x328) + 0xc),
               *(undefined4 *)(*(int *)(this + 0x328) + 0x10));
    *(undefined4 *)(this + 0x374) = 0;
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


