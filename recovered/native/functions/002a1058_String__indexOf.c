/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1058 String::indexOf */

/* String::indexOf(String, int) */

undefined8 __thiscall String::indexOf(String *this,String *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_3) && (param_3 < *(short *)(this + 6))) {
    for (; param_3 <= (int)*(short *)(this + 6) - (int)*(short *)(param_2 + 6);
        param_3 = param_3 + 1) {
      iVar3 = 0;
      while( true ) {
        if (*(short *)(param_2 + 6) <= iVar3) goto LAB_002a10aa;
        iVar1 = charAt(this,iVar3 + param_3);
        iVar2 = charAt(param_2,iVar3);
        if (iVar1 != iVar2) break;
        iVar3 = iVar3 + 1;
      }
    }
  }
  param_3 = -1;
LAB_002a10aa:
  return CONCAT44(this,param_3);
}


