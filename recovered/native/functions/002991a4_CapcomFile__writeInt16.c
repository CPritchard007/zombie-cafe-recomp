/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002991a4 CapcomFile::writeInt16 */

/* CapcomFile::writeInt16(int) */

void __thiscall CapcomFile::writeInt16(CapcomFile *this,int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (this[5] != (CapcomFile)0x0) {
    uVar1 = uVar1 >> 8 | (uVar1 << 0x18) >> 0x10;
  }
  CCAssetManager::appendFile((char *)(DAT_002991dc + 0x2991c4),(void *)(int)(short)uVar1,2);
  L_PrintLog((char *)(DAT_002991e0 + 0x2991d0),(char *)(DAT_002991e4 + 0x2991d2));
  *(int *)(this + 8) = *(int *)(this + 8) + 4;
  return;
}


