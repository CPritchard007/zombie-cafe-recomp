/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a278e BitmapTextElement::getStringWidth */

/* BitmapTextElement::getStringWidth() */

void BitmapTextElement::getStringWidth(void)

{
  int in_r0;
  int iVar1;
  String aSStack_18 [12];
  
  String::String(aSStack_18,(String *)(in_r0 + 0x60));
  iVar1 = operator!=(aSStack_18,0);
  String::~String(aSStack_18);
  if (iVar1 != 0) {
    CCTextRenderer::GetStringWidth(*(void **)(in_r0 + 0x6c),*(char **)(in_r0 + 0xb8));
    __fixsfsi();
  }
  return;
}


