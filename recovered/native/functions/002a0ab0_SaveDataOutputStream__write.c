/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0ab0 SaveDataOutputStream::write */

/* SaveDataOutputStream::write(unsigned char) */

void __thiscall SaveDataOutputStream::write(SaveDataOutputStream *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  *(uchar *)(*(int *)(this + 0xc) + iVar1) = param_1;
  *(int *)(this + 0x10) = iVar1 + 1;
  return;
}


