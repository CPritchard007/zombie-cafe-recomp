/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6996 TrueTypeTextElement::recreateCCTexture2DForOnResume */

/* TrueTypeTextElement::recreateCCTexture2DForOnResume() */

void __thiscall TrueTypeTextElement::recreateCCTexture2DForOnResume(TrueTypeTextElement *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x90) + 1; iVar1 = iVar1 + 1) {
    CFTexture::ClearHardwearID(*(CFTexture **)(iVar1 * 4 + *(int *)(this + 0x94)));
  }
  cache(this);
  return;
}


