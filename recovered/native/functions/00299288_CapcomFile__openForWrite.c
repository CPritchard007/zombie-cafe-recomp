/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299288 CapcomFile::openForWrite */

/* CapcomFile::openForWrite() */

int __thiscall CapcomFile::openForWrite(CapcomFile *this)

{
  int iVar1;
  
  if (this[4] != (CapcomFile)0x0) {
    close(this);
  }
  iVar1 = fileExist(*(char **)this);
  if (iVar1 != 0) {
    removeFile(*(char **)this);
  }
  iVar1 = createFile(*(char **)this);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 8) = 0;
    this[4] = (CapcomFile)0x2;
    iVar1 = 1;
  }
  return iVar1;
}


