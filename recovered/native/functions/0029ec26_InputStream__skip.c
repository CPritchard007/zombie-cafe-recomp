/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ec26 InputStream::skip */

/* InputStream::skip(int) */

int __thiscall InputStream::skip(InputStream *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar1 = (**(code **)(*(int *)this + 0x18))(this);
      if (iVar1 == -1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_1);
  }
  return iVar2;
}


