/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016a32c GameStateMap::addEventRaid2Shop */

/* GameStateMap::addEventRaid2Shop() */

void __thiscall GameStateMap::addEventRaid2Shop(GameStateMap *this)

{
  int iVar1;
  int iVar2;
  CImage *pCVar3;
  ZCImageButton *this_00;
  TrueTypeTextElement *pTVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0016a514 + 0x16a338);
  local_1c = *piVar6;
  iVar2 = ZombieCafe::isEventRaid2_Advent(*(ZombieCafe **)(this + 0xc));
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x280) = 0;
  }
  else {
    *(undefined4 *)(this + 0x2b8) = 0;
    this[700] = (GameStateMap)0x0;
    this[0x2d0] = (GameStateMap)0x0;
    this[DAT_0016a518] = (GameStateMap)0x0;
    *(undefined4 *)(this + 0x2a4) = 0;
    piVar7 = *(int **)(this + 0x14);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x25,false);
    this_00 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(this_00,'$',pCVar3,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x280) = this_00;
    (*pcVar5)(piVar7,this_00);
    piVar7 = *(int **)(this + 0x14);
    uVar8 = *(undefined4 *)(this + DAT_0016a51c);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    String::String(aSStack_12c,(char *)(DAT_0016a520 + 0x16a3be));
    pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement(pTVar4,aSStack_12c,uVar8,0xffffffff,0,0,0x12,0);
    *(TrueTypeTextElement **)(this + 0x2a0) = pTVar4;
    (*pcVar5)(piVar7,pTVar4);
    iVar2 = DAT_0016a524;
    String::~String(aSStack_12c);
    iVar1 = DAT_0016a528;
    piVar7 = *(int **)(iVar2 + 0x16a400);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0x2a0));
    L_PrintLog((char *)(iVar1 + 0x16a410),(char *)(DAT_0016a52c + 0x16a414));
    sprintf(acStack_11c,(char *)(DAT_0016a530 + 0x16a422),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(iVar1 + 0x16a410),acStack_11c);
    piVar7 = *(int **)(this + 0x2a0);
    pcVar5 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_124,(char *)(DAT_0016a534 + 0x16a43a));
    (*pcVar5)(piVar7,aSStack_124);
    String::~String(aSStack_124);
    *(undefined4 *)(this + 0x284) = 0;
    *(undefined4 *)(this + 0x28c) = 0;
    *(undefined4 *)(this + 0x290) = 0;
    *(undefined4 *)(this + 0x294) = 0;
    *(undefined4 *)(this + 0x298) = 0;
    *(undefined1 *)(*(int *)(this + 0x2a0) + 0x7f) = 0x11;
    TrueTypeTextElement::setBaseTransform
              (*(TrueTypeTextElement **)(this + 0x2a0),(ccMat2x3 *)(this + 0x3d8));
    piVar7 = *(int **)(this + 0x2a0);
    pcVar5 = *(code **)(*piVar7 + 0x18);
    uVar8 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x280) + 0xc));
    iVar2 = SmDev();
    __addsf3(uVar8,*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_0016a538 + 0x16a4a2)));
    uVar8 = __fixsfsi();
    (*pcVar5)(piVar7,uVar8,*(undefined4 *)(*(int *)(this + 0x280) + 0x10));
    iVar2 = SmDev();
    if ((iVar2 == 3) || (iVar2 = SmDev(), iVar2 == 4)) {
      *(undefined1 *)(*(int *)(this + 0x2a0) + 0xc4) = 0;
    }
    *(undefined4 *)(this + 0x2cc) = 0;
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


