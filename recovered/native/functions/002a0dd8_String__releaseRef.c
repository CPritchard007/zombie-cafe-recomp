/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0dd8 String::releaseRef */

/* String::releaseRef() */

void __thiscall String::releaseRef(String *this)

{
  void *__ptr;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + -1;
    if (*(short *)(*(undefined4 **)this + 1) < 1) {
      __ptr = (void *)**(undefined4 **)this;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        **(undefined4 **)this = 0;
      }
      operator_delete(*(void **)this);
    }
    *(undefined4 *)this = 0;
  }
  return;
}


