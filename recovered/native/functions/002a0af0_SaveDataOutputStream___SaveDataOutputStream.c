/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0af0 SaveDataOutputStream::~SaveDataOutputStream */

/* SaveDataOutputStream::~SaveDataOutputStream() */

SaveDataOutputStream * __thiscall
SaveDataOutputStream::~SaveDataOutputStream(SaveDataOutputStream *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002a0b2c + 0x2a0b00);
  *(int *)this = *(int *)(DAT_002a0b28 + 0x2a0afc) + 8;
  CCAssetManager::writeFile(*(char **)(this + 4),*(void **)(this + 0xc),*(uint *)(this + 0x10));
  if (*(void **)(this + 0xc) != (void *)0x0) {
    free(*(void **)(this + 0xc));
  }
  *(int *)this = iVar1 + 8;
  return this;
}


