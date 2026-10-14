/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f79a0 FontManager::delFont */

/* FontManager::delFont(int) */

void __thiscall FontManager::delFont(FontManager *this,int param_1)

{
  int iVar1;
  int iVar2;
  CapcomTrueTypeFont *this_00;
  
  iVar2 = (param_1 + 4) * 4;
  iVar1 = *(int *)(this + iVar2);
  *(int *)(this + iVar2) = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    puts((char *)(DAT_000f79ec + 0xf79ba));
    *(undefined4 *)(this + iVar2) = 0;
  }
  if (*(int *)(this + (param_1 + 4) * 4) == 0) {
    this_00 = *(CapcomTrueTypeFont **)(this + param_1 * 4);
    if (this_00 == (CapcomTrueTypeFont *)0x0) {
      puts((char *)(DAT_000f79f0 + 0xf79e8));
    }
    else {
      CapcomTrueTypeFont::~CapcomTrueTypeFont(this_00);
      operator_delete(this_00);
      *(undefined4 *)(this + param_1 * 4) = 0;
    }
  }
  return;
}


