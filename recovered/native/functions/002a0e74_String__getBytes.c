/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0e74 String::getBytes */

/* String::getBytes() const */

undefined1 * __thiscall String::getBytes(String *this)

{
  undefined1 *puVar1;
  int iVar2;
  size_t __n;
  
  __n = (size_t)*(short *)(this + 6);
  puVar1 = (undefined1 *)malloc(__n + 1);
  if (0 < (int)__n) {
    if ((*(int **)this != (int *)0x0) && (iVar2 = **(int **)this, iVar2 != 0)) {
      memcpy(puVar1,(void *)(iVar2 + *(short *)(this + 4)),__n);
      puVar1[*(short *)(this + 6)] = 0;
      return puVar1;
    }
    free(puVar1);
  }
  puVar1 = (undefined1 *)malloc(1);
  *puVar1 = 0;
  return puVar1;
}


