/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169de4 GameStateMap::addWeekRaidShop */

/* GameStateMap::addWeekRaidShop() */

void __thiscall GameStateMap::addWeekRaidShop(GameStateMap *this)

{
  int iVar1;
  int iVar2;
  CImage *pCVar3;
  ZCImageButton *this_00;
  TrueTypeTextElement *pTVar4;
  ImageElement *this_01;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0016a010 + 0x169df0);
  local_1c = *piVar6;
  iVar2 = ZombieCafe::isWeekRaid_Advent(*(ZombieCafe **)(this + 0xc));
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x37c) = 0;
  }
  else {
    *(undefined4 *)(this + 0x3b4) = 1;
    this[0x3b8] = (GameStateMap)0x0;
    this[0x3cc] = (GameStateMap)0x0;
    this[DAT_0016a014] = (GameStateMap)0x0;
    *(undefined4 *)(this + 0x3a0) = 0;
    *(undefined4 *)(this + 0x3c8) = 0;
    piVar7 = *(int **)(this + 0x14);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    this_00 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(this_00,'$',pCVar3,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x37c) = this_00;
    (*pcVar5)(piVar7,this_00);
    piVar7 = *(int **)(this + 0x14);
    uVar8 = *(undefined4 *)(this + DAT_0016a018);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    String::String(aSStack_12c,(char *)(DAT_0016a01c + 0x169e7e));
    pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement(pTVar4,aSStack_12c,uVar8,0xffffffff,0,0,0x12,0);
    *(TrueTypeTextElement **)(this + 0x39c) = pTVar4;
    (*pcVar5)(piVar7,pTVar4);
    iVar2 = DAT_0016a020;
    String::~String(aSStack_12c);
    iVar1 = DAT_0016a024;
    piVar7 = *(int **)(iVar2 + 0x169ec0);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0x39c));
    L_PrintLog((char *)(iVar1 + 0x169ed0),(char *)(DAT_0016a028 + 0x169ed4));
    sprintf(acStack_11c,(char *)(DAT_0016a02c + 0x169ee2),*(int *)(*piVar7 + 4) + 1);
    L_PrintLog((char *)(iVar1 + 0x169ed0),acStack_11c);
    piVar7 = *(int **)(this + 0x39c);
    pcVar5 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_124,(char *)(DAT_0016a030 + 0x169efa));
    (*pcVar5)(piVar7,aSStack_124);
    String::~String(aSStack_124);
    *(undefined4 *)(this + 0x380) = 0;
    *(undefined4 *)(this + 0x388) = 0;
    *(undefined4 *)(this + 0x38c) = 0;
    *(undefined4 *)(this + 0x390) = 0;
    *(undefined4 *)(this + 0x394) = 0;
    *(undefined1 *)(*(int *)(this + 0x39c) + 0x7f) = 0x11;
    TrueTypeTextElement::setBaseTransform
              (*(TrueTypeTextElement **)(this + 0x39c),(ccMat2x3 *)(this + 0x3f0));
    piVar7 = *(int **)(this + 0x39c);
    pcVar5 = *(code **)(*piVar7 + 0x18);
    uVar8 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x37c) + 0xc));
    iVar2 = SmDev();
    __addsf3(uVar8,*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_0016a034 + 0x169f62)));
    uVar8 = __fixsfsi();
    (*pcVar5)(piVar7,uVar8,*(undefined4 *)(*(int *)(this + 0x37c) + 0x10));
    iVar2 = SmDev();
    if ((iVar2 == 3) || (iVar2 = SmDev(), iVar2 == 4)) {
      *(undefined1 *)(*(int *)(this + 0x39c) + 0xc4) = 0;
    }
    piVar7 = *(int **)(this + 0x14);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x2a,false);
    this_01 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_01,pCVar3,'\f',true);
    *(ImageElement **)(this + 900) = this_01;
    (*pcVar5)(piVar7,this_01);
    (**(code **)(**(int **)(this + 900) + 0x20))(*(int **)(this + 900),1);
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


