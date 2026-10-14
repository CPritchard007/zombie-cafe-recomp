/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6084 TextMenuItem::~TextMenuItem */

/* TextMenuItem::~TextMenuItem() */

TextMenuItem * __thiscall TextMenuItem::~TextMenuItem(TextMenuItem *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(DAT_002a60d0 + 0x2a6094);
  *(int *)this = *(int *)(DAT_002a60cc + 0x2a6090) + 8;
  iVar2 = *piVar1;
  clearBreaks(this);
  String::~String((String *)(this + 0x68));
  *(int *)this = iVar2 + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


