/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e5d08 LotteryDialog::resetKujiCostDisplay */

/* LotteryDialog::resetKujiCostDisplay() */

undefined8 __thiscall LotteryDialog::resetKujiCostDisplay(LotteryDialog *this)

{
  CImage *pCVar1;
  ImageElement *this_00;
  undefined4 uVar2;
  int iVar3;
  LotteryDialog *pLVar4;
  LotteryDialog *pLVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 uVar8;
  LotteryDialog *local_1c;
  
  pLVar4 = this + 0x170;
  local_1c = this + 0x1ac;
  do {
    if (*(int *)pLVar4 != 0) {
      (**(code **)(*(int *)this + 0x34))(this);
      if (*(int **)(*(int *)pLVar4 + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)pLVar4 + 100) + 4))();
      }
      if (*(int **)pLVar4 != (int *)0x0) {
        (**(code **)(**(int **)pLVar4 + 4))();
      }
      *(undefined4 *)pLVar4 = 0;
    }
    pLVar5 = pLVar4 + -0x78;
    if (*(int *)pLVar5 != 0) {
      (**(code **)(*(int *)this + 0x34))(this);
      if (*(int **)pLVar5 != (int *)0x0) {
        (**(code **)(**(int **)pLVar5 + 4))();
      }
      *(undefined4 *)pLVar5 = 0;
    }
    pLVar5 = pLVar4 + -0x3c;
    if (*(int *)pLVar5 != 0) {
      (**(code **)(*(int *)this + 0x34))(this);
      if (*(int **)(*(int *)pLVar5 + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)pLVar5 + 100) + 4))();
      }
      if (*(int **)pLVar5 != (int *)0x0) {
        (**(code **)(**(int **)pLVar5 + 4))();
      }
      *(undefined4 *)pLVar5 = 0;
    }
    pLVar4 = pLVar4 + 4;
  } while (pLVar4 != local_1c);
  resetButtonDisplay(this,5,0);
  resetButtonDisplay(this,6,1);
  resetButtonDisplay(this,7,2);
  resetButtonDisplay(this,8,3);
  resetButtonDisplay(this,9,4);
  resetButtonDisplay(this,10,5);
  resetButtonDisplay(this,0xb,6);
  resetButtonDisplay(this,0xc,8);
  resetButtonDisplay(this,0xd,9);
  resetButtonDisplay(this,0xe,10);
  iVar3 = *(int *)(*(int *)(this + 0x264) * 4 + *(int *)(DAT_001e5e9c + 0x1e5e0a));
  if (iVar3 != -1) {
    pcVar7 = *(code **)(*(int *)this + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x60) + DAT_001e5ea0),iVar3,false);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,pCVar1,'\x12',true);
    *(ImageElement **)(this + 0x138) = this_00;
    (*pcVar7)(this,this_00);
    piVar6 = *(int **)(this + 0x138);
    local_1c = *(LotteryDialog **)(*piVar6 + 0x14);
    uVar8 = *(undefined4 *)(*(int *)(this + 0x84) + 4);
    uVar2 = __floatsisf(*(undefined4 *)(this + 0xc));
    uVar2 = __mulsf3(uVar2,0x3f000000);
    iVar3 = SmDev();
    __addsf3(uVar2,*(undefined4 *)(iVar3 * 4 + DAT_001e5ea4 + 0x1e5e72));
    uVar2 = __fixsfsi();
    (*(code *)local_1c)(piVar6,uVar8,uVar2);
    (**(code **)(**(int **)(this + 0x138) + 0x20))(*(int **)(this + 0x138),0);
  }
  return CONCAT44(local_1c,this);
}


