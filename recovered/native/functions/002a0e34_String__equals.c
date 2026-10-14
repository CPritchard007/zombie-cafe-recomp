/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0e34 String::equals */

/* String::equals(String) */

undefined4 __thiscall String::equals(String *this,String *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  iVar4 = 0;
  if (*(short *)(this + 6) == *(short *)(param_2 + 6)) {
    for (; iVar4 < *(short *)(this + 6); iVar4 = iVar4 + 1) {
      iVar2 = charAt(this,iVar4);
      iVar3 = charAt(param_2,iVar4);
      if (iVar2 != iVar3) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


