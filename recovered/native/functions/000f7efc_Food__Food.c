/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7efc Food::Food */

/* Food::Food(FurnitureData*, FoodStack*, unsigned char) */

Food * __thiscall Food::Food(Food *this,FurnitureData *param_1,FoodStack *param_2,uchar param_3)

{
  FoodStack *this_00;
  int iVar1;
  undefined4 uVar2;
  
  Furniture::Furniture((Furniture *)this,param_1);
  *(int *)this = *(int *)(DAT_000f7f80 + 0xf7f10) + 8;
  this[0x40] = (Food)0x1;
  *(undefined4 *)(this + 100) = 0;
  if (100 < param_3) {
    param_3 = 'd';
  }
  this[0x6c] = (Food)param_3;
  if (param_2 != (FoodStack *)0x0) {
    this_00 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(this_00,(uchar)*param_2,(uchar)param_2[8]);
    *(FoodStack **)(this + 100) = this_00;
    iVar1 = CapcomApp::getInstance();
    uVar2 = PackedImage::getImage
                      (*(PackedImage **)(*(int *)(iVar1 + 4) + DAT_000f7f84),
                       (int)*(short *)(*(int *)(*(int *)(iVar1 + 4) + 0x4e8) +
                                       (uint)*(ushort *)param_2 * 0x1c + 0x14),true);
    *(undefined4 *)(this + 0x68) = uVar2;
  }
  return this;
}


