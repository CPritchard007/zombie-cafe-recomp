/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f73f4 NoticeDialog::tick */

/* NoticeDialog::tick(long) */

undefined8 __thiscall NoticeDialog::tick(NoticeDialog *this,long param_1)

{
  int iVar1;
  float extraout_s0;
  undefined8 uVar2;
  NoticeDialog *local_10;
  
  local_10 = this;
  if (this[0x14] != (NoticeDialog)0x0) {
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(*(ZombieCafe **)(this + 0x60));
    if (iVar1 != 0) {
      uVar2 = L_PrintLog((char *)(DAT_001f744c + 0x1f7410),(char *)(DAT_001f7450 + 0x1f7412));
      local_10 = (NoticeDialog *)0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x68),
                         *(int *)(*(int *)(this + 0x60) + DAT_001f7454) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_001f7454),(float)uVar2,
                         (float)((ulonglong)uVar2 >> 0x20));
      if (iVar1 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0);
        setHide(this);
      }
    }
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_001f7458) = 1;
  }
  return CONCAT44(param_1,local_10);
}


