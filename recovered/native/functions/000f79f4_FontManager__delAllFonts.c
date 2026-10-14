/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f79f4 FontManager::delAllFonts */

/* FontManager::delAllFonts() */

void __thiscall FontManager::delAllFonts(FontManager *this)

{
  CapcomTrueTypeFont *this_00;
  int iVar1;
  
  iVar1 = 4;
  L_PrintLog((char *)(DAT_000f7a2c + 0xf7a04),(char *)(DAT_000f7a28 + 0xf7a02));
  do {
    this_00 = *(CapcomTrueTypeFont **)this;
    if (this_00 != (CapcomTrueTypeFont *)0x0) {
      CapcomTrueTypeFont::~CapcomTrueTypeFont(this_00);
      operator_delete(this_00);
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 0x10) = 0;
    }
    iVar1 = iVar1 + -1;
    this = this + 4;
  } while (iVar1 != 0);
  return;
}


