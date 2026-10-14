/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f070 OutputStream::write */

/* OutputStream::write(unsigned char*, int, int) */

undefined8 __thiscall OutputStream::write(OutputStream *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  
  L_PrintLog((char *)(DAT_0029f0a0 + 0x29f080),(char *)(DAT_0029f0a4 + 0x29f082));
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (**(code **)(*(int *)this + 0x10))(this,param_1[iVar1 + param_2]);
  }
  return CONCAT44(param_3,this);
}


