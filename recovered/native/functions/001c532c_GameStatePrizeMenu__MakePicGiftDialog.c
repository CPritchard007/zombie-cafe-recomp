/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c532c GameStatePrizeMenu::MakePicGiftDialog */

/* GameStatePrizeMenu::MakePicGiftDialog(PicGiftBoxInfo*) */

undefined8 __thiscall
GameStatePrizeMenu::MakePicGiftDialog(GameStatePrizeMenu *this,PicGiftBoxInfo *param_1)

{
  PicGiftDialog *this_00;
  int iVar1;
  
  if (*(int *)(this + 0x74) != 0) {
    (**(code **)(**(int **)(this + 0x18) + 0x34))();
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  iVar1 = *(int *)param_1;
  this_00 = (PicGiftDialog *)operator_new(0xd8);
  iVar1 = (iVar1 == 0x19) + 1;
  PicGiftDialog::PicGiftDialog
            (this_00,(ZombieCafeGameState *)this,*(Cafe **)(this + 0x14),param_1,iVar1);
  *(PicGiftDialog **)(this + 0x74) = this_00;
  (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
  (**(code **)(**(int **)(this + 0x74) + 0x14))
            (*(int **)(this + 0x74),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder
            (*(ScreenElement **)(this + 0x74),(int)**(char **)(DAT_001c53bc + 0x1c5396));
  (**(code **)(**(int **)(this + 0x18) + 0x2c))(*(int **)(this + 0x18),*(undefined4 *)(this + 0x74))
  ;
  PicGiftDialog::show(*(PicGiftDialog **)(this + 0x74),(_func_void_void_ptr *)0x0,this);
  return CONCAT44(param_1,iVar1);
}


