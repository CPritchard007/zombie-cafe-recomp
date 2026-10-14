/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ba30 CapcomTrueTypeFont::getStringWidth */

/* CapcomTrueTypeFont::getStringWidth(String, int, int) */

undefined4 __thiscall
CapcomTrueTypeFont::getStringWidth(CapcomTrueTypeFont *this,String *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  CapcomTrueTypeFontRef *this_00;
  
  this_00 = *(CapcomTrueTypeFontRef **)(this + 4);
  if ((this_00 == (CapcomTrueTypeFontRef *)0x0) || (*(int *)this_00 == 0)) {
    __android_log_print(6,DAT_0029ba6c + 0x29ba4c,DAT_0029ba70 + 0x29ba4e);
    uVar1 = 0;
  }
  else {
    pcVar2 = (char *)String::getBytes(param_2);
    CapcomTrueTypeFontRef::getStringWidth(this_00,pcVar2,param_3,param_4);
    uVar1 = __floatsisf();
  }
  return uVar1;
}


