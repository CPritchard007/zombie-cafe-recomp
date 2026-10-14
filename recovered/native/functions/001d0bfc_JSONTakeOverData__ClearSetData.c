/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0bfc JSONTakeOverData::ClearSetData */

/* JSONTakeOverData::ClearSetData() */

void __thiscall JSONTakeOverData::ClearSetData(JSONTakeOverData *this)

{
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}


