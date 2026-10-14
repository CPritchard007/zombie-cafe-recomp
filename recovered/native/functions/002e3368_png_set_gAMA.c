/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3368 png_set_gAMA */

undefined8 png_set_gAMA(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_002e3384 + 0x2e3374;
  uVar1 = png_fixed();
  png_set_gAMA_fixed(param_1,param_2,uVar1);
  return CONCAT44(param_2,iVar2);
}


