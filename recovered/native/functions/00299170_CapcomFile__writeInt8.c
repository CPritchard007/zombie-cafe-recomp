/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299170 CapcomFile::writeInt8 */

/* CapcomFile::writeInt8(int) */

void __thiscall CapcomFile::writeInt8(CapcomFile *this,int param_1)

{
  CCAssetManager::appendFile((char *)(DAT_00299198 + 0x29917e),(void *)(param_1 & 0xff),1);
  L_PrintLog((char *)(DAT_0029919c + 0x29918a),(char *)(DAT_002991a0 + 0x29918c));
  *(int *)(this + 8) = *(int *)(this + 8) + 4;
  return;
}


