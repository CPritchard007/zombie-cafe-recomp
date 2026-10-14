/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002472a0 Vector<CapcomDate>::Vector */

/* Vector<CapcomDate>::Vector() */

Vector<CapcomDate> * __thiscall Vector<CapcomDate>::Vector(Vector<CapcomDate> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x50);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 3);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


