/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dc64c HudElement::updateCardButton */

/* HudElement::updateCardButton() */

void __thiscall HudElement::updateCardButton(HudElement *this)

{
  int iVar1;
  CImage *pCVar2;
  ZCImageButton *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  HudElement *pHVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = ZombieCafe::calUserRankId
                    (*(ZombieCafe **)(this + 0x60),
                     (uint)(byte)(*(ZombieCafe **)(this + 0x60))[DAT_001dc77c]);
  pHVar6 = this + 0xe8;
  if (iVar1 == 0) {
    if (*(int *)pHVar6 != 0) {
      (**(code **)(**(int **)(this + 0xb4) + 0x34))();
      if (*(int **)(*(int *)pHVar6 + 0x60) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)pHVar6 + 0x60) + 4))();
      }
      if (*(int **)(this + 0xe8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xe8) + 4))();
      }
      *(undefined4 *)(this + 0xe8) = 0;
    }
  }
  else {
    if (*(int *)pHVar6 != 0) {
      (**(code **)(**(int **)(this + 0xb4) + 0x34))();
      if (*(int **)(*(int *)pHVar6 + 0x60) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)pHVar6 + 0x60) + 4))();
      }
      if (*(int **)(this + 0xe8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xe8) + 4))();
      }
      *(undefined4 *)(this + 0xe8) = 0;
    }
    if (*(int *)(this + 0xe8) == 0) {
      piVar8 = *(int **)(this + 0xb4);
      pcVar5 = *(code **)(*piVar8 + 0x2c);
      pCVar2 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),iVar1 + 6,false);
      this_00 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(this_00,'!',pCVar2,(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(this + 0xe8) = this_00;
      (*pcVar5)(piVar8,this_00);
      piVar8 = *(int **)(this + 0xe8);
      iVar1 = *(int *)(this + 0x108);
      iVar7 = *piVar8;
      uVar3 = __floatsisf(*(undefined4 *)(iVar1 + 4));
      __addsf3(uVar3,**(undefined4 **)(DAT_001dc780 + 0x1dc738));
      uVar3 = __fixsfsi();
      uVar4 = __floatsisf(*(undefined4 *)(iVar1 + 8));
      __addsf3(uVar4,**(undefined4 **)(DAT_001dc784 + 0x1dc750));
      uVar4 = __fixsfsi();
      (**(code **)(iVar7 + 0x14))(piVar8,uVar3,uVar4);
      CapcomApp::getInstance();
      CapcomApp::getInstance();
    }
  }
  return;
}


