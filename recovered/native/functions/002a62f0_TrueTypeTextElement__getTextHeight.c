/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a62f0 TrueTypeTextElement::getTextHeight */

/* TrueTypeTextElement::getTextHeight() */

void __thiscall TrueTypeTextElement::getTextHeight(TrueTypeTextElement *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 1;
  L_PrintLog((char *)(DAT_002a6378 + 0x2a6300),(char *)(DAT_002a6374 + 0x2a62fe));
  if (*(int *)(this + 0x70) != 0) {
    uVar5 = *(int *)(*(int *)(this + 0x70) + 4) + 2;
  }
  iVar6 = uVar5 - 1;
  if (this[0x84] != (TrueTypeTextElement)0x0) {
    uVar4 = (uint)(byte)this[0x86];
    uVar5 = uVar5 - uVar4 * (byte)this[0x85];
    if ((int)uVar4 < (int)uVar5) {
      iVar6 = uVar4 * ((byte)this[0x85] + 1) + -1;
      uVar5 = uVar4;
    }
  }
  uVar1 = (**(code **)(**(int **)(this + 0x68) + 8))();
  uVar2 = CFTexture::getHeight(*(CFTexture **)(iVar6 * 4 + *(int *)(this + 0x94)));
  uVar3 = __floatsisf(uVar5);
  uVar2 = __floatsisf(uVar2);
  uVar1 = __addsf3(uVar1,uVar2);
  __mulsf3(uVar3,uVar1);
  __fixsfsi();
  return;
}


