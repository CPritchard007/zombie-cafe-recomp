/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a60d4 TextMenuItem::~TextMenuItem */

/* TextMenuItem::~TextMenuItem() */

TextMenuItem * __thiscall TextMenuItem::~TextMenuItem(TextMenuItem *this)

{
  ~TextMenuItem(this);
  operator_delete(this);
  return this;
}


