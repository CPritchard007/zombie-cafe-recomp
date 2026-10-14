/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00101576 FriendMenuDialog::paint */

/* FriendMenuDialog::paint(CapcomGraphics*) */

void __thiscall FriendMenuDialog::paint(FriendMenuDialog *this,CapcomGraphics *param_1)

{
  if (((byte)this[0x60] < 5) && ((1 << (sbyte)this[0x60] & 0x16U) != 0)) {
    ScreenElement::paint((ScreenElement *)this,param_1);
  }
  return;
}


