/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00213474 Vector<ZCImageButton*>::Vector */

/* Vector<ZCImageButton*>::Vector() */

Vector<ZCImageButton*> * __thiscall Vector<ZCImageButton*>::Vector(Vector<ZCImageButton*> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


