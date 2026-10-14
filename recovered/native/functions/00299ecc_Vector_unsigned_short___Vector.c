/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299ecc Vector<unsigned_short>::Vector */

/* Vector<unsigned short>::Vector() */

Vector<unsigned_short> * __thiscall Vector<unsigned_short>::Vector(Vector<unsigned_short> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x14);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 1);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


