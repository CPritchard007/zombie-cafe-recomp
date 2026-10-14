/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002991e8 CapcomFile::writeInt32 */

/* CapcomFile::writeInt32(long) */

void __thiscall CapcomFile::writeInt32(CapcomFile *this,long param_1)

{
  if (this[5] != (CapcomFile)0x0) {
    param_1 = (uint)param_1 >> 0x18 |
              (int)(param_1 & 0xff0000U) >> 8 | (param_1 & 0xff00U) << 8 | param_1 << 0x18;
  }
  CCAssetManager::appendFile((char *)(DAT_0029922c + 0x299214),(void *)param_1,4);
  L_PrintLog((char *)(DAT_00299230 + 0x29921e),(char *)(DAT_00299234 + 0x299220));
  *(int *)(this + 8) = *(int *)(this + 8) + 4;
  return;
}


