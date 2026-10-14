/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5fbc TextMenuItem::TextMenuItem */

/* TextMenuItem::TextMenuItem(String, int, int, int, int, unsigned char) */

undefined8 __thiscall
TextMenuItem::TextMenuItem
          (TextMenuItem *this,String *param_2,int param_3,int param_4,int param_5,int param_6,
          uchar param_7)

{
  MenuItem::MenuItem((MenuItem *)this,param_3,param_4,param_5,param_6,param_7);
  *(int *)this = *(int *)(DAT_002a6004 + 0x2a5fe2) + 8;
  String::String((String *)(this + 0x68),param_2);
  return CONCAT44(param_6,this);
}


