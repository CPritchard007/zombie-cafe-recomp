/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f0a8 OutputStream::write */

/* OutputStream::write(unsigned char*, int) */

void __thiscall OutputStream::write(OutputStream *this,uchar *param_1,int param_2)

{
  int iVar1;
  
  L_PrintLog((char *)(DAT_0029f0d4 + 0x29f0b8),(char *)(DAT_0029f0d8 + 0x29f0ba));
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    (**(code **)(*(int *)this + 0x10))(this,param_1[iVar1]);
  }
  return;
}


