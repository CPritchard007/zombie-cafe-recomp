/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0db8 String::String */

/* String::String(String const&, int, int) */

void __thiscall String::String(String *this,String *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1;
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    *(undefined2 *)(this + 4) = 0;
    *(undefined2 *)(this + 6) = 0;
  }
  else {
    *(short *)(iVar2 + 4) = *(short *)(iVar2 + 4) + 1;
    sVar1 = *(short *)(param_1 + 4);
    *(short *)(this + 6) = (short)param_3;
    *(short *)(this + 4) = (short)param_2 + sVar1;
  }
  return;
}


