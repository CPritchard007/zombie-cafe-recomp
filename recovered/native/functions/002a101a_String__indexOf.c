/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a101a String::indexOf */

/* String::indexOf(char, int) */

int __thiscall String::indexOf(String *this,char param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 < *(short *)(this + 6))) {
    for (; param_2 < *(short *)(this + 6); param_2 = param_2 + 1) {
      iVar1 = charAt(this,param_2);
      if (iVar1 == param_1) {
        return param_2;
      }
    }
  }
  return -1;
}


