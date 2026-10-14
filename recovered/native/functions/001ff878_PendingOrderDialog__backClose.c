/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ff878 PendingOrderDialog::backClose */

/* PendingOrderDialog::backClose() */

void __thiscall PendingOrderDialog::backClose(PendingOrderDialog *this)

{
  float fVar1;
  
  if (this[0x14] != (PendingOrderDialog)0x0) {
    fVar1 = (float)L_PrintLog((char *)(DAT_001ff8ac + 0x1ff88c),(char *)(DAT_001ff8b0 + 0x1ff88e));
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_001ff8b4) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0x60),fVar1);
    (**(code **)(*(int *)this + 0x20))(this,0);
  }
  return;
}


