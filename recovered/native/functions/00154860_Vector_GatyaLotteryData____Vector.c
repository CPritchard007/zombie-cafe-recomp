/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00154860 Vector<GatyaLotteryData>::~Vector */

/* Vector<GatyaLotteryData>::~Vector() */

Vector<GatyaLotteryData> * __thiscall
Vector<GatyaLotteryData>::~Vector(Vector<GatyaLotteryData> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


