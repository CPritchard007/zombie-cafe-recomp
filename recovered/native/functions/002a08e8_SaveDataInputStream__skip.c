/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a08e8 SaveDataInputStream::skip */

/* SaveDataInputStream::skip(int) */

int __thiscall SaveDataInputStream::skip(SaveDataInputStream *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 8))();
  if (iVar1 < param_1) {
    param_1 = (**(code **)(*(int *)this + 8))(this);
  }
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_1;
  return param_1;
}


