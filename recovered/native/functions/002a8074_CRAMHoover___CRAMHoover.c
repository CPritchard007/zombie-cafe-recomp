/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8074 CRAMHoover::~CRAMHoover */

/* CRAMHoover::~CRAMHoover() */

CRAMHoover * __thiscall CRAMHoover::~CRAMHoover(CRAMHoover *this)

{
  *(int *)this = *(int *)(DAT_002a8098 + 0x2a807e) + 8;
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x10) = 0;
  }
  free(*(void **)(this + 4));
  return this;
}


