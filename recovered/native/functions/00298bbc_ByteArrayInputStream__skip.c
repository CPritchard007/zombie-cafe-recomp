/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298bbc ByteArrayInputStream::skip */

/* ByteArrayInputStream::skip(int) */

int __thiscall ByteArrayInputStream::skip(ByteArrayInputStream *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (*(int *)(this + 0x14) <= iVar1 + param_1) {
    param_1 = *(int *)(this + 0x14) - iVar1;
  }
  *(int *)(this + 0xc) = iVar1 + param_1;
  return param_1;
}


