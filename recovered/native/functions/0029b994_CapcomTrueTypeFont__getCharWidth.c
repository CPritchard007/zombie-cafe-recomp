/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b994 CapcomTrueTypeFont::getCharWidth */

/* CapcomTrueTypeFont::getCharWidth(char) */

undefined4 CapcomTrueTypeFont::getCharWidth(char param_1)

{
  CapcomTrueTypeFontRef *this;
  undefined4 uVar1;
  char in_r1;
  
  this = *(CapcomTrueTypeFontRef **)(param_1 + 4);
  if ((this == (CapcomTrueTypeFontRef *)0x0) || (*(int *)this == 0)) {
    __android_log_print(6,DAT_0029b9c0 + 0x29b9ac,DAT_0029b9c4 + 0x29b9ae);
    uVar1 = 0;
  }
  else {
    CapcomTrueTypeFontRef::getCharWidth(this,in_r1);
    uVar1 = __floatsisf();
  }
  return uVar1;
}


