/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00149944 GameStateGatya::hideToxinBuyingWaitNotice */

/* GameStateGatya::hideToxinBuyingWaitNotice() */

void __thiscall GameStateGatya::hideToxinBuyingWaitNotice(GameStateGatya *this)

{
  NoticeDialog::setHide(*(NoticeDialog **)(this + 0xf00));
  return;
}


