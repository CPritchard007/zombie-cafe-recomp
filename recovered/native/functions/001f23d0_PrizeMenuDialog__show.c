/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f23d0 PrizeMenuDialog::show */

/* PrizeMenuDialog::show() */

void __thiscall PrizeMenuDialog::show(PrizeMenuDialog *this)

{
  puts((char *)(DAT_001f23fc + 0x1f23da));
  (**(code **)(*(int *)this + 0x20))(this,1);
  clearItemElements(this);
  populateItemElements(this);
  updateTitle(this);
  return;
}


