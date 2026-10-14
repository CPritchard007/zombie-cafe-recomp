/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b454 CapcomRectangleFont::getCharWidth */

/* CapcomRectangleFont::getCharWidth(char) */

undefined4 __thiscall CapcomRectangleFont::getCharWidth(CapcomRectangleFont *this,char param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == ' ') {
    uVar1 = *(undefined1 *)(*(int *)(this + 4) + 3);
LAB_0029b48a:
    uVar3 = __floatunsisf(uVar1);
  }
  else {
    if (((param_1 != '\r') && (param_1 != '\n')) && (iVar2 = getCharIndex(this,param_1), -1 < iVar2)
       ) {
      iVar4 = *(int *)(this + 4);
      if (*(byte *)(iVar4 + iVar2) != 0) {
        uVar1 = *(undefined1 *)
                 (iVar4 + (uint)*(byte *)(iVar4 + iVar2) * 0x80 + (uint)*(byte *)(iVar4 + iVar2 + 1)
                  + *(int *)(this + 0xc) + 1);
        goto LAB_0029b48a;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


