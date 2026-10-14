/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c874e Vector<ToonAnimation::ReplacementImage>::Vector */

/* Vector<ToonAnimation::ReplacementImage>::Vector() */

Vector<ToonAnimation::ReplacementImage> * __thiscall
Vector<ToonAnimation::ReplacementImage>::Vector(Vector<ToonAnimation::ReplacementImage> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(200);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this * 0x14);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


