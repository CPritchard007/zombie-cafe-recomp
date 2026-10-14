/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a14b0 String::operator= */

/* String::TEMPNAMEPLACEHOLDERVALUE(String) */

String * __thiscall String::operator=(String *this,int *param_2)

{
  int iVar1;
  
  releaseRef(this);
  iVar1 = *param_2;
  *(int *)this = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + 1;
  }
  *(short *)(this + 4) = (short)param_2[1];
  *(undefined2 *)(this + 6) = *(undefined2 *)((int)param_2 + 6);
  return this;
}


