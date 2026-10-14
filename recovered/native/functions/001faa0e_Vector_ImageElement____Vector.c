/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001faa0e Vector<ImageElement*>::Vector */

/* Vector<ImageElement*>::Vector() */

Vector<ImageElement*> * __thiscall Vector<ImageElement*>::Vector(Vector<ImageElement*> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


