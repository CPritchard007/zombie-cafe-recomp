/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015483c Vector<GatyaLotteryData>::Vector */

/* Vector<GatyaLotteryData>::Vector() */

Vector<GatyaLotteryData> * __thiscall
Vector<GatyaLotteryData>::Vector(Vector<GatyaLotteryData> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x50);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 3);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


