/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160878 GameStateLoading::paint */

/* GameStateLoading::paint(CapcomGraphics*) */

undefined8 __thiscall GameStateLoading::paint(GameStateLoading *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  uVar2 = CapcomGraphics::setColor(param_1,-0x1000000);
  uVar1 = DAT_001608b8;
  CapcomGraphics::fillRect
            (param_1,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,extraout_s3);
  CapcomGraphics::setColorModulation(param_1,false);
  CapcomGraphics::setColor(param_1,-1);
  (**(code **)(**(int **)(this + 0x28) + 0xc))(*(int **)(this + 0x28),param_1);
  return CONCAT44(param_1,uVar1);
}


