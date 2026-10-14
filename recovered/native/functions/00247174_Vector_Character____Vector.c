/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247174 Vector<Character*>::Vector */

/* Vector<Character*>::Vector() */

Vector<Character*> * __thiscall Vector<Character*>::Vector(Vector<Character*> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


