/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b6d8 CapcomTrueTypeFont::getLineHeight */

/* CapcomTrueTypeFont::getLineHeight() */

void __thiscall CapcomTrueTypeFont::getLineHeight(CapcomTrueTypeFont *this)

{
  undefined4 uVar1;
  
  uVar1 = __floatsisf((*(int *)(this + 0x10) - *(int *)(this + 0x14)) + *(int *)(this + 0x18));
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x158));
  __addsf3(uVar1,*(undefined4 *)(*(int *)(this + 0x15c) + 0x28));
  return;
}


