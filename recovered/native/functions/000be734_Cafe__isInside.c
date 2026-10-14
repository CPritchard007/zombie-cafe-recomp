/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be734 Cafe::isInside */

/* Cafe::isInside(int) */

void __thiscall Cafe::isInside(Cafe *this,int param_1)

{
  if ((-1 < param_1) &&
     (param_1 < **(int **)(DAT_000be760 + 0xbe746) * **(int **)(DAT_000be764 + 0xbe748))) {
    CafeTile::isInside(*(CafeTile **)(param_1 * 4 + *(int *)this));
  }
  return;
}


