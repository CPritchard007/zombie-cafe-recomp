/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010eaca Vector<int>::Vector */

/* Vector<int>::Vector() */

Vector<int> * __thiscall Vector<int>::Vector(Vector<int> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


