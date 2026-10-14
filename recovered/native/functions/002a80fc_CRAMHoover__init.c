/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a80fc CRAMHoover::init */

/* CRAMHoover::init(char const*, char const*) */

CRAMHoover * CRAMHoover::init(char *param_1,char *param_2)

{
  CRAMHoover *this;
  
  this = (CRAMHoover *)operator_new(DAT_002a8120);
  CRAMHoover(this,param_1,param_2);
  return this;
}


