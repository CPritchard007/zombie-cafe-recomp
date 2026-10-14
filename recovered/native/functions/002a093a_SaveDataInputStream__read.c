/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a093a SaveDataInputStream::read */

/* SaveDataInputStream::read(unsigned char*, int) */

size_t __thiscall SaveDataInputStream::read(SaveDataInputStream *this,uchar *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 8))();
  if (iVar1 < param_2) {
    param_2 = (**(code **)(*(int *)this + 8))(this);
  }
  if (param_2 != 0) {
    memcpy(param_1,(void *)(*(int *)(this + 8) + *(int *)(this + 0xc)),param_2);
  }
  return param_2;
}


