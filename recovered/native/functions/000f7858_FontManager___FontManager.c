/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7858 FontManager::~FontManager */

/* FontManager::~FontManager() */

FontManager * __thiscall FontManager::~FontManager(FontManager *this)

{
  CapcomTrueTypeFont *this_00;
  int iVar1;
  FontManager *pFVar2;
  
  iVar1 = 4;
  pFVar2 = this;
  do {
    this_00 = *(CapcomTrueTypeFont **)pFVar2;
    pFVar2 = pFVar2 + 4;
    if (this_00 != (CapcomTrueTypeFont *)0x0) {
      CapcomTrueTypeFont::~CapcomTrueTypeFont(this_00);
      operator_delete(this_00);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return this;
}


