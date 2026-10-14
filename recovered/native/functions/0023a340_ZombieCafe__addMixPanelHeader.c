/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a340 ZombieCafe::addMixPanelHeader */

/* ZombieCafe::addMixPanelHeader() */

void __thiscall ZombieCafe::addMixPanelHeader(ZombieCafe *this)

{
  char *pcVar1;
  
  CRAMHoover::addEventIntProperty(*(char **)(this + 0x840),DAT_0023a398 + 0x23a356);
  CRAMHoover::addEventIntProperty(*(char **)(this + 0x840),DAT_0023a3a0 + 0x23a364);
  CRAMHoover::addEventIntProperty(*(char **)(this + 0x840),DAT_0023a3a8 + 0x23a372);
  pcVar1 = *(char **)(this + 0x840);
  getToxin(this);
  CRAMHoover::addEventIntProperty(pcVar1,DAT_0023a3ac + 0x23a386);
  CRAMHoover::addEventIntProperty(*(char **)(this + 0x840),DAT_0023a3b0 + 0x23a392);
  return;
}


