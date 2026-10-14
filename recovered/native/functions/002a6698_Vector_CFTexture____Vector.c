/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6698 Vector<CFTexture*>::Vector */

/* Vector<CFTexture*>::Vector() */

Vector<CFTexture*> * __thiscall Vector<CFTexture*>::Vector(Vector<CFTexture*> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


