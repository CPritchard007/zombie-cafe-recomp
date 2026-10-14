/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c0d4 CapcomTrueTypeFont::~CapcomTrueTypeFont */

/* CapcomTrueTypeFont::~CapcomTrueTypeFont() */

CapcomTrueTypeFont * __thiscall CapcomTrueTypeFont::~CapcomTrueTypeFont(CapcomTrueTypeFont *this)

{
  undefined4 *puVar1;
  javaObjectWrapper *this_00;
  
  puVar1 = *(undefined4 **)(this + 4);
  *(int *)this = *(int *)(DAT_0029c104 + 0x29c0e0) + 8;
  if (puVar1 != (undefined4 *)0x0) {
    this_00 = (javaObjectWrapper *)*puVar1;
    if (this_00 != (javaObjectWrapper *)0x0) {
      javaObjectWrapper::~javaObjectWrapper(this_00);
      operator_delete(this_00);
    }
    operator_delete(puVar1);
  }
  return this;
}


