/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e0c8 DataInputStream::DataInputStream */

/* DataInputStream::DataInputStream(InputStream*) */

DataInputStream * __thiscall
DataInputStream::DataInputStream(DataInputStream *this,InputStream *param_1)

{
  int iVar1;
  
  InputStream::InputStream((InputStream *)this);
  iVar1 = DAT_0029e0e4;
  *(InputStream **)(this + 4) = param_1;
  *(int *)this = *(int *)(iVar1 + 0x29e0dc) + 8;
  return this;
}


