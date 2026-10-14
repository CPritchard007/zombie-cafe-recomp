/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dc830 HudElement::setGatyaButtonImage */

/* HudElement::setGatyaButtonImage() */

void __thiscall HudElement::setGatyaButtonImage(HudElement *this)

{
  int iVar1;
  int *piVar2;
  PackedImage *this_00;
  CImage *pCVar3;
  int iVar4;
  HudElement *pHVar5;
  ImageButton *this_01;
  
  iVar1 = DAT_001dc898;
  pHVar5 = this + 0xa0;
  piVar2 = *(int **)(*(int *)pHVar5 + 0x60);
  if (**(char **)(DAT_001dc894 + 0x1dc83c) == '\0') {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(*(int *)pHVar5 + 0x60) = 0;
    }
    this_01 = *(ImageButton **)(this + 0xa0);
    iVar4 = 0xf5;
    this_00 = *(PackedImage **)(*(int *)(this + 0x60) + iVar1);
  }
  else {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(*(int *)pHVar5 + 0x60) = 0;
    }
    this_01 = *(ImageButton **)(this + 0xa0);
    iVar4 = 0x112;
    this_00 = *(PackedImage **)(*(int *)(this + 0x60) + iVar1);
  }
  pCVar3 = (CImage *)PackedImage::getImage(this_00,iVar4,false);
  ImageButton::setImageAndResize(this_01,pCVar3);
  return;
}


