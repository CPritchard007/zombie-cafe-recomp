/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a55c8 TextElement::getTextHeight */

/* TextElement::getTextHeight() */

void __thiscall TextElement::getTextHeight(TextElement *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (*(int *)(this + 0x70) != 0) {
    uVar4 = *(int *)(*(int *)(this + 0x70) + 4) + 2;
  }
  if (this[0x84] != (TextElement)0x0) {
    uVar3 = (uint)(byte)this[0x86];
    uVar4 = uVar4 - uVar3 * (byte)this[0x85];
    if ((int)uVar3 < (int)uVar4) {
      uVar4 = uVar3;
    }
  }
  uVar1 = (**(code **)(**(int **)(this + 0x68) + 8))();
  uVar2 = __floatsisf(uVar4);
  __mulsf3(uVar2,uVar1);
  __fixsfsi();
  return;
}


