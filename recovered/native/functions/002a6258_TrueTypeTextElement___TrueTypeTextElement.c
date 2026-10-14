/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6258 TrueTypeTextElement::~TrueTypeTextElement */

/* TrueTypeTextElement::~TrueTypeTextElement() */

TrueTypeTextElement * __thiscall
TrueTypeTextElement::~TrueTypeTextElement(TrueTypeTextElement *this)

{
  CFTexture *this_00;
  int iVar1;
  
  *(int *)this = *(int *)(DAT_002a62c0 + 0x2a6264) + 8;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x90) + 1; iVar1 = iVar1 + 1) {
    this_00 = *(CFTexture **)(iVar1 * 4 + *(int *)(this + 0x94));
    if (this_00 != (CFTexture *)0x0) {
      CFTexture::~CFTexture(this_00);
      operator_delete(this_00);
    }
  }
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  if (*(void **)(this + 0x94) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x94));
  }
  TextElement::~TextElement((TextElement *)this);
  return this;
}


