/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001181d8 GameStateCafe::hideToxinBuyingWaitNotice */

/* GameStateCafe::hideToxinBuyingWaitNotice() */

void __thiscall GameStateCafe::hideToxinBuyingWaitNotice(GameStateCafe *this)

{
  NoticeDialog::setHide(*(NoticeDialog **)(this + 0xd4));
  return;
}


