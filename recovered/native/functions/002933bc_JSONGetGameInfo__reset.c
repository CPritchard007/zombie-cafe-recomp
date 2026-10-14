/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002933bc JSONGetGameInfo::reset */

/* JSONGetGameInfo::reset() */

void __thiscall JSONGetGameInfo::reset(JSONGetGameInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (*(void **)(this + 0x1c) != (void *)0x0) {
    free(*(void **)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    free(*(void **)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(void **)(this + 0x24) != (void *)0x0) {
    free(*(void **)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(void **)(this + 0x2c) != (void *)0x0) {
    free(*(void **)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
  }
  return;
}


