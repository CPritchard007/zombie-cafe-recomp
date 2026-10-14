/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a27ca BitmapTextElement::getTextHeight */

/* BitmapTextElement::getTextHeight() */

void BitmapTextElement::getTextHeight(void)

{
  uchar uVar1;
  int in_r0;
  int iVar2;
  char *pcVar3;
  float extraout_s0;
  float extraout_s1;
  String aSStack_18 [8];
  
  String::String(aSStack_18,(String *)(in_r0 + 0x60));
  iVar2 = operator==(aSStack_18,0);
  String::~String(aSStack_18);
  if (iVar2 == 0) {
    pcVar3 = *(char **)(in_r0 + 0xb8);
    uVar1 = __floatsisf(*(undefined4 *)(in_r0 + 0xc));
    CCTextRenderer::GetWrappedStringHeight
              (*(void **)(in_r0 + 0x6c),pcVar3,extraout_s0,extraout_s1,uVar1,false);
    __fixsfsi();
  }
  return;
}


