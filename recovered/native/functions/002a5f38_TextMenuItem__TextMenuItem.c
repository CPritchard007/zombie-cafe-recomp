/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5f38 TextMenuItem::TextMenuItem */

/* TextMenuItem::TextMenuItem() */

TextMenuItem * __thiscall TextMenuItem::TextMenuItem(TextMenuItem *this)

{
  MenuItem::MenuItem((MenuItem *)this);
  *(int *)this = *(int *)(DAT_002a5f6c + 0x2a5f4a) + 8;
  String::String((String *)(this + 0x68));
  return this;
}


