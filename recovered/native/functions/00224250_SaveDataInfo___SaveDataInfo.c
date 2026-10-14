/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00224250 SaveDataInfo::~SaveDataInfo */

/* SaveDataInfo::~SaveDataInfo() */

SaveDataInfo * __thiscall SaveDataInfo::~SaveDataInfo(SaveDataInfo *this)

{
  ~SaveDataInfo(this);
  operator_delete(this);
  return this;
}


