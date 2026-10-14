/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ba50 GameStateCafe::MakePicGiftDialog */

/* GameStateCafe::MakePicGiftDialog(PicGiftBoxInfo*) */

undefined8 __thiscall GameStateCafe::MakePicGiftDialog(GameStateCafe *this,PicGiftBoxInfo *param_1)

{
  PicGiftDialog *this_00;
  undefined4 uVar1;
  
  (**(code **)(*(int *)this + 0x68))();
  this_00 = (PicGiftDialog *)operator_new(0xd8);
  uVar1 = 0;
  PicGiftDialog::PicGiftDialog
            (this_00,(ZombieCafeGameState *)this,*(Cafe **)(this + 0x14),param_1,0);
  *(PicGiftDialog **)(this + 0x138) = this_00;
  (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
  FUN_00118458(*(undefined4 *)(this + 0x138),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder
            (*(ScreenElement **)(this + 0x138),(int)**(char **)(DAT_0011bac0 + 0x11ba96));
  (**(code **)(**(int **)(this + 0x78) + 0x2c))
            (*(int **)(this + 0x78),*(undefined4 *)(this + 0x138));
  PicGiftDialog::show(*(PicGiftDialog **)(this + 0x138),
                      *(_func_void_void_ptr **)(DAT_0011bac4 + 0x11bab0),this);
  return CONCAT44(param_1,uVar1);
}


