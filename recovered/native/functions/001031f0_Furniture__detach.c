/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001031f0 Furniture::detach */

/* Furniture::detach() */

undefined4 __thiscall Furniture::detach(Furniture *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(this + 0x3c) = 0;
  return uVar1;
}


