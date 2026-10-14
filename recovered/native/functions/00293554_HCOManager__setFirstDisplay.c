/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293554 HCOManager::setFirstDisplay */

/* HCOManager::setFirstDisplay(bool) */

void __thiscall HCOManager::setFirstDisplay(HCOManager *this,bool param_1)

{
  if (this[0xc] != (HCOManager)param_1) {
    this[0xc] = (HCOManager)param_1;
    save();
  }
  return;
}


