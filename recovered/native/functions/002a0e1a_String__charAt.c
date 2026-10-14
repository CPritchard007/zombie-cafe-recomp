/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0e1a String::charAt */

/* String::charAt(int) const */

undefined1 __thiscall String::charAt(String *this,int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 < *(short *)(this + 6)) {
    uVar1 = *(undefined1 *)(**(int **)this + param_1 + (int)*(short *)(this + 4));
  }
  return uVar1;
}


