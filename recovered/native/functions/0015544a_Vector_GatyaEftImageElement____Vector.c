/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015544a Vector<GatyaEftImageElement*>::Vector */

/* Vector<GatyaEftImageElement*>::Vector() */

Vector<GatyaEftImageElement*> * __thiscall
Vector<GatyaEftImageElement*>::Vector(Vector<GatyaEftImageElement*> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


