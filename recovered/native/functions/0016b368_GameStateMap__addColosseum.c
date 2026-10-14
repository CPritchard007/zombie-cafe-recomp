/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016b368 GameStateMap::addColosseum */

/* GameStateMap::addColosseum() */

void __thiscall GameStateMap::addColosseum(GameStateMap *this)

{
  CImage *pCVar1;
  ZCImageButton *this_00;
  TrueTypeTextElement *pTVar2;
  BitmapTextElement *pBVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_0016b5d8 + 0x16b374);
  local_1c = *piVar5;
  if (**(char **)(DAT_0016b5dc + 0x16b380) == '\0') {
    *(undefined4 *)(this + 0x184) = 0;
  }
  else {
    iVar6 = *(int *)(this + 0xc);
    if (*(int *)(iVar6 + 0x680) < 8) {
      *(undefined4 *)(this + 0x184) = 0;
    }
    else {
      *(undefined4 *)(this + 0x1bc) = 99;
      this[0x1c0] = (GameStateMap)0x0;
      this[0x1d4] = (GameStateMap)0x0;
      this[DAT_0016b5e0] = (GameStateMap)0x0;
      piVar7 = *(int **)(this + 0x14);
      pcVar4 = *(code **)(*piVar7 + 0x2c);
      pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar6 + 0x7f8),0x25,false);
      this_00 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(this_00,'$',pCVar1,(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(this + 0x184) = this_00;
      (*pcVar4)(piVar7,this_00);
      piVar7 = *(int **)(this + 0x14);
      uVar8 = *(undefined4 *)(this + 0x458);
      pcVar4 = *(code **)(*piVar7 + 0x2c);
      String::String(aSStack_12c,(char *)(DAT_0016b5e4 + 0x16b412));
      pTVar2 = (TrueTypeTextElement *)operator_new(0xe4);
      TrueTypeTextElement::TrueTypeTextElement(pTVar2,aSStack_12c,uVar8,0xffffffff,0,0,0x12,0);
      *(TrueTypeTextElement **)(this + 0x1a4) = pTVar2;
      (*pcVar4)(piVar7,pTVar2);
      iVar6 = DAT_0016b5e8;
      String::~String(aSStack_12c);
      iVar9 = DAT_0016b5ec;
      piVar7 = *(int **)(iVar6 + 0x16b450);
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar7,*(TrueTypeTextElement **)(this + 0x1a4));
      L_PrintLog((char *)(iVar9 + 0x16b460),(char *)(DAT_0016b5f0 + 0x16b464));
      sprintf(acStack_11c,(char *)(DAT_0016b5f4 + 0x16b472),*(int *)(*piVar7 + 4) + 1);
      L_PrintLog((char *)(iVar9 + 0x16b460),acStack_11c);
      *(undefined4 *)(this + 0x188) = 0;
      *(undefined4 *)(this + 400) = 0;
      *(undefined4 *)(this + 0x194) = 0;
      *(undefined4 *)(this + 0x198) = 0;
      *(undefined4 *)(this + 0x19c) = 0;
      *(undefined1 *)(*(int *)(this + 0x1a4) + 0x7f) = 0x11;
      TrueTypeTextElement::setBaseTransform
                (*(TrueTypeTextElement **)(this + 0x1a4),(ccMat2x3 *)(this + 0x3d8));
      piVar7 = *(int **)(this + 0x1a4);
      pcVar4 = *(code **)(*piVar7 + 0x18);
      uVar8 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x184) + 0xc));
      iVar6 = SmDev();
      __addsf3(uVar8,*(undefined4 *)(iVar6 * 4 + *(int *)(DAT_0016b5f8 + 0x16b4d8)));
      uVar8 = __fixsfsi();
      (*pcVar4)(piVar7,uVar8,*(undefined4 *)(*(int *)(this + 0x184) + 0x10));
      iVar6 = SmDev();
      if ((iVar6 == 3) || (iVar6 = SmDev(), iVar6 == 4)) {
        *(undefined1 *)(*(int *)(this + 0x1a4) + 0xc4) = 0;
      }
      piVar7 = *(int **)(this + 0x14);
      pcVar4 = *(code **)(*piVar7 + 0x2c);
      String::String(aSStack_124,(char *)(DAT_0016b5fc + 0x16b516));
      iVar9 = *(int *)(this + 0xc);
      iVar6 = SmDev();
      uVar8 = *(undefined4 *)((*(int *)(DAT_0016b600 + iVar6 * 4 + 0x16b54e) + 0x136) * 4 + iVar9);
      pBVar3 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                (pBVar3,aSStack_124,uVar8,0xffffffff,0xff000000,0,0,0x11,0,0);
      *(BitmapTextElement **)(this + 0x1a8) = pBVar3;
      (*pcVar4)(piVar7,pBVar3);
      String::~String(aSStack_124);
      *(undefined1 *)(*(int *)(this + 0x1a8) + 0x7f) = 0x11;
      BitmapTextElement::setBaseTransform
                (*(BitmapTextElement **)(this + 0x1a8),(ccMat2x3 *)(this + 0x3d8));
      (**(code **)(**(int **)(this + 0x1a8) + 0x18))
                (*(int **)(this + 0x1a8),*(undefined4 *)(*(int *)(this + 0x184) + 0xc),
                 *(undefined4 *)(*(int *)(this + 0x184) + 0x10));
      *(undefined4 *)(this + 0x1d0) = 0;
    }
  }
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


