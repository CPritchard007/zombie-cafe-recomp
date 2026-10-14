/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4710 Vector<EftKeyData>::Vector */

/* Vector<EftKeyData>::Vector() */

Vector<EftKeyData> * __thiscall Vector<EftKeyData>::Vector(Vector<EftKeyData> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(400);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this * 0x28);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


