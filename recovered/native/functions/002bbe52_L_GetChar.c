/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbe52 L_GetChar */

/* L_GetChar(STextRenderer*, char const*, unsigned int*) */

undefined4 L_GetChar(STextRenderer *param_1,char *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_3 = 0xffffffff;
  uVar2 = (uint)(byte)*param_2;
  if (uVar2 < 0x81) {
    *param_3 = uVar2;
    uVar1 = 1;
  }
  else if ((uVar2 + 0x3e & 0xff) < 0x1e) {
    uVar2 = L_GetTwoByteMultiChar(param_2);
    *param_3 = uVar2;
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
    if ((uVar2 + 0x20 & 0xff) < 0x10) {
      uVar2 = L_GetThreeByteMultiChar(param_2);
      *param_3 = uVar2;
      uVar1 = 3;
    }
  }
  return uVar1;
}


