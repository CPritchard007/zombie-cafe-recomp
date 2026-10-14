/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029bfb0 CapcomTrueTypeFont::CapcomTrueTypeFont */

/* CapcomTrueTypeFont::CapcomTrueTypeFont(String, int, float) */

CapcomTrueTypeFont * __thiscall
CapcomTrueTypeFont::CapcomTrueTypeFont
          (CapcomTrueTypeFont *this,String *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  *(int *)this = *(int *)(DAT_0029c09c + 0x29bfc0) + 8;
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)(DAT_0029c0a0 + 0x29bfd2);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  memset(this + 0x30,0,0x100);
  this[0x130] = (CapcomTrueTypeFont)0x0;
  *(undefined2 *)(this + 0x132) = 0;
  *(undefined2 *)(this + 0x134) = 0;
  *(undefined2 *)(this + 0x136) = 0;
  *(undefined2 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined2 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0x3f800000;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  uVar1 = String::getBytes(param_2);
  iVar2 = javaGetTrueTypeFont(uVar1,param_3);
  piVar3 = (int *)operator_new(4);
  *piVar3 = iVar2;
  *(int **)(this + 4) = piVar3;
  if (*piVar3 == 0) {
    uVar1 = String::getBytes(param_2);
    __android_log_print(6,DAT_0029c0a4 + 0x29c058,DAT_0029c0a8 + 0x29c05a,uVar1,param_3);
  }
  else {
    uVar1 = CapcomTrueTypeFontRef::getAscent();
    *(undefined4 *)(this + 0x10) = uVar1;
    uVar1 = CapcomTrueTypeFontRef::getDescent();
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar1 = CapcomTrueTypeFontRef::getLeading();
    *(undefined4 *)(this + 0x18) = uVar1;
    uVar1 = CapcomTrueTypeFontRef::getUnitsPerEm();
    *(undefined4 *)(this + 0x1c) = uVar1;
    *(undefined4 *)(this + 0x154) = param_4;
    uVar1 = __floatsisf();
    uVar1 = __divsf3(param_4,uVar1);
    *(undefined4 *)(this + 0x158) = uVar1;
  }
  return this;
}


