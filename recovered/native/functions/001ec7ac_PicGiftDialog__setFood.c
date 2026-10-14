/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ec7ac PicGiftDialog::setFood */

/* PicGiftDialog::setFood(int, int) */

void PicGiftDialog::setFood(int param_1,int param_2)

{
  int *piVar1;
  CImage *pCVar2;
  ImageElement *this;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    (**(code **)(*(int *)param_1 + 0x34))();
    piVar1 = *(int **)(param_1 + 0x98);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  pcVar6 = *(code **)(*(int *)param_1 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(param_1 + 0x60) + DAT_001ec86c),
                      (int)*(short *)(*(int *)(*(int *)(param_1 + 0x60) + 0x4e8) + param_2 * 0x1c +
                                     0x14),false);
  this = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this,pCVar2,'\x12',true);
  puVar5 = (undefined4 *)(param_1 + 0x98);
  *puVar5 = this;
  (*pcVar6)(param_1,this);
  iVar3 = SmDev();
  uVar4 = __mulsf3(*(undefined4 *)(DAT_001ec870 + iVar3 * 4 + 0x1ec890),DAT_001ec874);
  uVar7 = __mulsf3(uVar4,*(undefined4 *)(param_1 + 0xa4));
  ImageElement::setScale((ImageElement *)*puVar5,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  iVar3 = *(int *)(param_1 + 0x78);
  (**(code **)(*(int *)*puVar5 + 0x14))
            ((int *)*puVar5,*(int *)(iVar3 + 0xc) / 2 + *(int *)(iVar3 + 4),
             *(int *)(iVar3 + 0x10) / 2 + *(int *)(iVar3 + 8));
  return;
}


