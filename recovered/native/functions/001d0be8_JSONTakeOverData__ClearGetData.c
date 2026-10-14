/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0be8 JSONTakeOverData::ClearGetData */

/* JSONTakeOverData::ClearGetData() */

void __thiscall JSONTakeOverData::ClearGetData(JSONTakeOverData *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    *(undefined4 *)this = 0;
  }
  return;
}


