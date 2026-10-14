/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298bd4 ByteArrayInputStream::read */

/* ByteArrayInputStream::read(unsigned char*, int, int) */

size_t __thiscall
ByteArrayInputStream::read(ByteArrayInputStream *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(this + 0xc) < *(int *)(this + 0x14)) {
    iVar1 = (**(code **)(*(int *)this + 8))();
    if (iVar1 < param_3) {
      param_3 = (**(code **)(*(int *)this + 8))(this);
    }
    memcpy(param_1 + param_2,(void *)(*(int *)(this + 8) + *(int *)(this + 0xc)),param_3);
  }
  else {
    param_3 = 0xffffffff;
  }
  return param_3;
}


