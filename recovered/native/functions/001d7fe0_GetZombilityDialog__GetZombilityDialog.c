/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d7fe0 GetZombilityDialog::GetZombilityDialog */

/* GetZombilityDialog::GetZombilityDialog(CharacterDetails*, unsigned char, Character*) */

void __thiscall
GetZombilityDialog::GetZombilityDialog
          (GetZombilityDialog *this,CharacterDetails *param_1,uchar param_2,Character *param_3)

{
  int iVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  ScreenElement *pSVar3;
  ZCImageButton *this_01;
  CharacterInstance *pCVar4;
  GetZombilityDialog GVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  uVar6 = (uint)param_2;
  iVar9 = DAT_001d836c + 0x1d7fee;
  local_1c = **(int **)(iVar9 + DAT_001d8370);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar9 + DAT_001d8374) + 8;
  iVar1 = CapcomApp::getInstance();
  uVar8 = *(undefined4 *)(iVar1 + 4);
  *(CharacterDetails **)(this + 0x68) = param_1;
  *(undefined4 *)(this + 0x60) = uVar8;
  iVar10 = **(int **)(iVar9 + DAT_001d8378);
  iVar1 = SmDev();
  uVar8 = FontManager::addFont(iVar10,SUB41(*(undefined4 *)(DAT_001d837c + iVar1 * 4 + 0x1d8078),0))
  ;
  *(undefined4 *)(this + 100) = uVar8;
  pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),2,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,'!',true);
  *(ImageElement **)(this + 0x6c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  (**(code **)(*(int *)this + 0x18))
            (this,(int)*(short *)(*(int *)(this + 0x6c) + 0xc),
             (int)*(short *)(*(int *)(this + 0x6c) + 0x10));
  String::String(aSStack_134,(char *)(DAT_001d8380 + 0x1d807e));
  iVar10 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001d8384 + iVar1 * 4 + 0x1d80fa) + 0x136) * 4 + iVar10);
  pSVar3 = (ScreenElement *)operator_new(0xc0);
  puVar7 = *(undefined4 **)(iVar9 + DAT_001d8388);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar3,aSStack_134,uVar8,*puVar7,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x70) = pSVar3;
  ScreenElement::addChild((ScreenElement *)this,pSVar3);
  String::~String(aSStack_134);
  String::String(aSStack_154,(String *)(DAT_001d838c + 0x1d80fc + uVar6 * 0x24));
  String::String(aSStack_14c,(char *)(DAT_001d8390 + 0x1d80ec));
  iVar1 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_14c,aSStack_154,*(int *)(DAT_001d8394 + iVar1 * 4 + 0x1d8100));
  String::String(aSStack_12c,aSStack_14c);
  pSVar3 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar3,aSStack_12c,*(undefined4 *)(this + 100),
             **(undefined4 **)(iVar9 + DAT_001d8398),1,1,0x11,0);
  *(ScreenElement **)(this + 0x74) = pSVar3;
  ScreenElement::addChild((ScreenElement *)this,pSVar3);
  String::~String(aSStack_12c);
  if (*(int *)(this + 0x74) != 0) {
    L_PrintLog((char *)(DAT_001d839c + 0x1d814e),(char *)(DAT_001d83a0 + 0x1d8150));
    piVar11 = *(int **)(iVar9 + DAT_001d83a4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x74));
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
    sprintf(acStack_11c,(char *)(DAT_001d83a8 + 0x1d817a),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(DAT_001d83ac + 0x1d8186),acStack_11c);
  }
  String::String(aSStack_144,(String *)(DAT_001d83b0 + uVar6 * 0x24 + 0x1d81bc));
  String::String(aSStack_13c,(char *)(DAT_001d83b4 + 0x1d81a4));
  iVar1 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_13c,aSStack_144,*(int *)(DAT_001d83b8 + iVar1 * 4 + 0x1d81b8));
  String::String(aSStack_124,aSStack_13c);
  pSVar3 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar3,aSStack_124,*(undefined4 *)(this + 100),*puVar7,1,1,0x11,
             0);
  *(ScreenElement **)(this + 0x78) = pSVar3;
  ScreenElement::addChild((ScreenElement *)this,pSVar3);
  String::~String(aSStack_124);
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_001d83bc + 0x1d8204),(char *)(DAT_001d83c0 + 0x1d8206));
    piVar11 = *(int **)(iVar9 + DAT_001d83a4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_11c,(char *)(DAT_001d83c4 + 0x1d8230),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(DAT_001d83c8 + 0x1d823c),acStack_11c);
  }
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001d83cc),6,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x7c) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  pCVar4 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar4,param_3,(CFPathFinder *)0x0);
  *(CharacterInstance **)(this + 0x80) = pCVar4;
  iVar1 = DAT_001d83d0 + 0x1d8292 + uVar6 * 0x24;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    GVar5 = *(GetZombilityDialog *)(iVar1 + 0x31);
  }
  else {
    GVar5 = (GetZombilityDialog)0x0;
  }
  this[0x84] = GVar5;
  CharacterInstance::setCurrentAnimation(pCVar4,(uchar)this[0x84],'\x01',true);
  pCVar4 = *(CharacterInstance **)(this + 0x80);
  fVar12 = (float)SmDev();
  CharacterInstance::setScale(pCVar4,fVar12);
  layout();
  String::~String(aSStack_13c);
  String::~String(aSStack_144);
  String::~String(aSStack_14c);
  String::~String(aSStack_154);
  if (local_1c != **(int **)(iVar9 + DAT_001d8370)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


