/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002395b0 ZombieCafe::setServerData */

/* ZombieCafe::setServerData(unsigned char*) */

void __thiscall ZombieCafe::setServerData(ZombieCafe *this,uchar *param_1)

{
  if (*(void **)(this + 0x490) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x490));
  }
  *(uchar **)(this + 0x490) = param_1;
  return;
}


