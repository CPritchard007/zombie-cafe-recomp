/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e69c GameStateRaid::paint */

/* GameStateRaid::paint(CapcomGraphics*) */

undefined8 __thiscall GameStateRaid::paint(GameStateRaid *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  
  CapcomGraphics::setColor(param_1,0xff,0,0,0);
  iVar2 = *(int *)(*(int *)(this + 0xc) + 0x10);
  __floatsisf(iVar2 >> 0x10);
  uVar1 = __floatsisf((int)(short)iVar2);
  CapcomGraphics::fillRect(param_1,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  CapcomGraphics::translate((long)param_1);
  glPushMatrix();
  glScalef(*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x98),0x3f800000);
  Cafe::paint(*(Cafe **)(this + 0x78),param_1);
  CapcomGraphics::finishBatch();
  glPopMatrix();
  CapcomGraphics::translate((long)param_1);
  (**(code **)(**(int **)(this + 0x134) + 0xc))(*(int **)(this + 0x134),param_1);
  if (this[0xa0] != (GameStateRaid)0x0) {
    CapcomGraphics::setColor(param_1,DAT_0017e760);
    iVar2 = *(int *)(*(int *)(this + 0xc) + 0x10);
    __floatsisf(iVar2 >> 0x10);
    uVar1 = __floatsisf((int)(short)iVar2);
    CapcomGraphics::fillRect(param_1,extraout_s0_00,extraout_s1_00,extraout_s2_00,extraout_s3_00);
  }
  return CONCAT44(param_1,uVar1);
}


