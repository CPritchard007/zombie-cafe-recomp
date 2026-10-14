/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a08c6 SaveDataInputStream::read */

/* SaveDataInputStream::read() */

undefined1 __thiscall SaveDataInputStream::read(SaveDataInputStream *this)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(*(int *)(this + 8) + *(int *)(this + 0xc));
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return uVar1;
}


