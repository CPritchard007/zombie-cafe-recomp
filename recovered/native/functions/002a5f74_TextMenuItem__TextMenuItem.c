/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5f74 TextMenuItem::TextMenuItem */

/* TextMenuItem::TextMenuItem(String, CapcomFont*, int) */

TextMenuItem * __thiscall
TextMenuItem::TextMenuItem(TextMenuItem *this,String *param_2,undefined4 param_3,undefined4 param_4)

{
  MenuItem::MenuItem((MenuItem *)this);
  *(int *)this = *(int *)(DAT_002a5fb4 + 0x2a5f8c) + 8;
  String::String((String *)(this + 0x68),param_2);
  *(undefined4 *)(this + 0x70) = param_3;
  *(undefined4 *)(this + 0x1c) = param_4;
  return this;
}


