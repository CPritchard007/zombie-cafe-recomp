/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299140 CapcomFile::writeBoolean */

/* CapcomFile::writeBoolean(bool) */

void __thiscall CapcomFile::writeBoolean(CapcomFile *this,bool param_1)

{
  CCAssetManager::appendFile((char *)(DAT_00299164 + 0x29914c),(void *)(uint)param_1,1);
  L_PrintLog((char *)(DAT_00299168 + 0x299156),(char *)(DAT_0029916c + 0x299158));
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}


