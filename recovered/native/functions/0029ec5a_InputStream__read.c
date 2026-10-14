/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ec5a InputStream::read */

/* InputStream::read(unsigned char*, int, int) */

undefined8 __thiscall InputStream::read(InputStream *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_3 < 1) || (uVar2 = (uint)(param_1 == (uchar *)0x0), uVar2 != 0)) {
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = (**(code **)(*(int *)this + 0x18))(this);
      if (iVar1 == -1) break;
      param_1[uVar2 + param_2] = (uchar)iVar1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_3);
  }
  return CONCAT44(this,uVar2);
}


