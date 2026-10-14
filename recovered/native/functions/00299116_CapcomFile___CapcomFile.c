/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299116 CapcomFile::~CapcomFile */

/* CapcomFile::~CapcomFile() */

CapcomFile * __thiscall CapcomFile::~CapcomFile(CapcomFile *this)

{
  free(*(void **)this);
  *(undefined4 *)this = 0;
  close(this);
  return this;
}


