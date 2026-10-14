/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6ba8 TrueTypeTextElement::findBreaks */

/* TrueTypeTextElement::findBreaks() */

void __thiscall TrueTypeTextElement::findBreaks(TrueTypeTextElement *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(TrueTypeTextElement **)(*(int *)(this + 0x68) + 0x15c) = this + 0x98;
  uVar4 = *(undefined4 *)(this + 0xc);
  if (this[0x7d] == (TrueTypeTextElement)0x0) {
    if (this[0xb0] != (TrueTypeTextElement)0x0) {
      uVar1 = __floatsisf(uVar4);
      __subsf3(uVar1,*(undefined4 *)(this + 0xb8));
      uVar1 = __fixsfsi();
      *(undefined4 *)(this + 0xc) = uVar1;
    }
    if (this[0xa0] != (TrueTypeTextElement)0x0) {
      uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
      uVar3 = (int)*(short *)(this + 0xaa) >> 0x1f;
      uVar2 = __floatsisf((int)*(short *)(this + 0xaa) + uVar3 ^ uVar3);
      uVar2 = __addsf3(uVar2,*(undefined4 *)(this + 0xac));
      __subsf3(uVar1,uVar2);
      uVar1 = __fixsfsi();
      *(undefined4 *)(this + 0xc) = uVar1;
    }
  }
  TextElement::findBreaks((TextElement *)this);
  if (this[0x7d] == (TrueTypeTextElement)0x0) {
    *(undefined4 *)(this + 0xc) = uVar4;
  }
  cache(this);
  return;
}


