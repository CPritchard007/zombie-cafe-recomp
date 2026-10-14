/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00188072 CImage::getRefCount */

/* CImage::getRefCount() */

int * __thiscall CImage::getRefCount(CImage *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
  }
  return piVar1;
}


