/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ec430 PicGiftDialog::setCash */

/* PicGiftDialog::setCash() */

void __thiscall PicGiftDialog::setCash(PicGiftDialog *this)

{
  int *piVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  int iVar3;
  PicGiftDialog *pPVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (*(int *)(this + 0x98) != 0) {
    (**(code **)(*(int *)this + 0x34))();
    piVar1 = *(int **)(this + 0x98);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
  pcVar5 = *(code **)(*(int *)this + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001ec4c4),0x1d,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,'\x12',true);
  pPVar4 = this + 0x98;
  *(ImageElement **)pPVar4 = this_00;
  uVar6 = (*pcVar5)(this,this_00);
  ImageElement::setScale(*(ImageElement **)pPVar4,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  iVar3 = *(int *)(this + 0x78);
  (**(code **)(**(int **)pPVar4 + 0x14))
            (*(int **)pPVar4,*(int *)(iVar3 + 0xc) / 2 + *(int *)(iVar3 + 4),
             *(int *)(iVar3 + 0x10) / 2 + *(int *)(iVar3 + 8));
  return;
}


