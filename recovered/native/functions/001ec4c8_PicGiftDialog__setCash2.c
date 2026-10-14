/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ec4c8 PicGiftDialog::setCash2 */

/* PicGiftDialog::setCash2() */

void __thiscall PicGiftDialog::setCash2(PicGiftDialog *this)

{
  int *piVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  int iVar3;
  code *pcVar4;
  
  if (*(int *)(this + 0x98) != 0) {
    (**(code **)(*(int *)this + 0x34))();
    piVar1 = *(int **)(this + 0x98);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
  pcVar4 = *(code **)(*(int *)this + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001ec550),0x74,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,'\x12',true);
  *(ImageElement **)(this + 0x98) = this_00;
  (*pcVar4)(this,this_00);
  iVar3 = *(int *)(this + 0x78);
  piVar1 = *(int **)(this + 0x98);
  (**(code **)(*piVar1 + 0x14))
            (piVar1,*(int *)(iVar3 + 0xc) / 2 + *(int *)(iVar3 + 4),
             *(int *)(iVar3 + 0x10) / 2 + *(int *)(iVar3 + 8));
  return;
}


