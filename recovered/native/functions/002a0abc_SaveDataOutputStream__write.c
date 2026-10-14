/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0abc SaveDataOutputStream::write */

/* SaveDataOutputStream::write(unsigned char*, int) */

void __thiscall SaveDataOutputStream::write(SaveDataOutputStream *this,uchar *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    iVar2 = *(int *)(this + 0x10);
    *(uchar *)(*(int *)(this + 0xc) + iVar2) = param_1[iVar1];
    *(int *)(this + 0x10) = iVar2 + 1;
  }
  return;
}


