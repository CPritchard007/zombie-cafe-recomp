/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016f750 GameStateMarketingIntro::paint */

/* GameStateMarketingIntro::paint(CapcomGraphics*) */

undefined8 __thiscall
GameStateMarketingIntro::paint(GameStateMarketingIntro *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  CapcomGraphics::setColor(param_1,-0x1000000);
  iVar1 = *(int *)(iVar1 + 0x10);
  __floatsisf(iVar1 >> 0x10);
  uVar2 = __floatsisf((int)(short)iVar1);
  CapcomGraphics::fillRect(param_1,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  return CONCAT44(param_1,uVar2);
}


