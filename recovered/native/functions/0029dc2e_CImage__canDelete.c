/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dc2e CImage::canDelete */

/* CImage::canDelete() */

int __thiscall CImage::canDelete(CImage *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return (uint)(puVar1 < (undefined4 *)0x2) - ((int)puVar1 >> 0x1f);
}


