/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bde7a CFPathFinder::~CFPathFinder */

/* CFPathFinder::~CFPathFinder() */

CFPathFinder * __thiscall CFPathFinder::~CFPathFinder(CFPathFinder *this)

{
  CCPathFinding::Free(*(void **)this);
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x14));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc));
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  return this;
}


