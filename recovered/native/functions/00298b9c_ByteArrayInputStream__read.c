/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298b9c ByteArrayInputStream::read */

/* ByteArrayInputStream::read() */

uint __thiscall ByteArrayInputStream::read(ByteArrayInputStream *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 < *(int *)(this + 0x14)) {
    uVar1 = (uint)*(byte *)(*(int *)(this + 8) + iVar2);
    *(int *)(this + 0xc) = iVar2 + 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


