/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299608 CapcomGraphics::getScreenSize */

/* CapcomGraphics::getScreenSize() */

undefined8 CapcomGraphics::getScreenSize(void)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
  return CONCAT44(iVar1 >> 0x10,(int)(short)iVar1);
}


