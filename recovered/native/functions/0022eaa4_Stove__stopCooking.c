/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022eaa4 Stove::stopCooking */

/* Stove::stopCooking() */

void __thiscall Stove::stopCooking(Stove *this)

{
  this[0x2e] = (Stove)0x0;
  removeStatusNote(this);
  (**(code **)(*(int *)this + 0x20))(this);
  return;
}


