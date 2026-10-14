/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0da0 String::String */

/* String::String(String const&) */

void __thiscall String::String(String *this,String *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  *(int *)this = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + 1;
  }
  *(undefined2 *)(this + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(this + 6) = *(undefined2 *)(param_1 + 6);
  return;
}


