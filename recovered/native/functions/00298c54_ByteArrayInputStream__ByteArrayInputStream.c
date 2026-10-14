/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298c54 ByteArrayInputStream::ByteArrayInputStream */

/* ByteArrayInputStream::ByteArrayInputStream(unsigned char*, int, bool) */

ByteArrayInputStream * __thiscall
ByteArrayInputStream::ByteArrayInputStream
          (ByteArrayInputStream *this,uchar *param_1,int param_2,bool param_3)

{
  int iVar1;
  
  InputStream::InputStream((InputStream *)this);
  iVar1 = DAT_00298c7c;
  this[4] = (ByteArrayInputStream)param_3;
  *(uchar **)(this + 8) = param_1;
  iVar1 = *(int *)(iVar1 + 0x298c6c);
  *(int *)(this + 0x14) = param_2;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


