/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299262 CapcomFile::openForRead */

/* CapcomFile::openForRead() */

void __thiscall CapcomFile::openForRead(CapcomFile *this)

{
  int iVar1;
  
  if (this[4] != (CapcomFile)0x0) {
    close(this);
  }
  iVar1 = fileExist(*(char **)this);
  if (iVar1 != 0) {
    this[4] = (CapcomFile)0x1;
  }
  return;
}


