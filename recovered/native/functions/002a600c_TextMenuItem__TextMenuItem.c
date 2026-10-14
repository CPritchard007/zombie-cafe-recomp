/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a600c TextMenuItem::TextMenuItem */

/* TextMenuItem::TextMenuItem(String, CapcomFont*, int, int, int, int, int, unsigned char) */

undefined8 __thiscall
TextMenuItem::TextMenuItem
          (TextMenuItem *this,String *param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6,int param_7,int param_8,uchar param_9)

{
  MenuItem::MenuItem((MenuItem *)this,param_5,param_6,param_7,param_8,param_9);
  *(int *)this = *(int *)(DAT_002a605c + 0x2a6034) + 8;
  String::String((String *)(this + 0x68),param_2);
  *(undefined4 *)(this + 0x70) = param_3;
  *(undefined4 *)(this + 0x1c) = param_4;
  return CONCAT44(param_8,this);
}


