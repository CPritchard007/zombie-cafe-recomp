/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b130 CapcomRectangleFont::getStringWidth */

/* CapcomRectangleFont::getStringWidth(String, int, int) */

undefined4 __thiscall
CapcomRectangleFont::getStringWidth
          (CapcomRectangleFont *this,String *param_2,int param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  sVar1 = *(short *)(param_2 + 6);
  uVar4 = 0;
  for (; (param_3 < sVar1 && (param_3 != param_4)); param_3 = param_3 + 1) {
    uVar2 = String::charAt(param_2,param_3);
    uVar2 = (*(code *)**(undefined4 **)this)(this,uVar2);
    uVar3 = __floatsisf(*(undefined1 *)(*(int *)(this + 4) + 4));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar4 = __addsf3(uVar4,uVar2);
  }
  return uVar4;
}


