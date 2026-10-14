/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019e892 GameStateEventRaid::paint */

/* GameStateEventRaid::paint(CapcomGraphics*) */

void __thiscall GameStateEventRaid::paint(GameStateEventRaid *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  CapcomGraphics::setColor(param_1,0xff,0,0,0);
  iVar1 = *(int *)(*(int *)(this + 0xc) + 0x10);
  __floatsisf(iVar1 >> 0x10);
  uVar2 = __floatsisf((int)(short)iVar1);
  CapcomGraphics::fillRect
            (param_1,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,extraout_s3);
  CapcomGraphics::translate((long)param_1);
  glPushMatrix();
  glScalef(*(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x2c),0x3f800000);
  Cafe::paint(*(Cafe **)(this + 0x5c),param_1);
  CapcomGraphics::finishBatch();
  glPopMatrix();
  CapcomGraphics::translate((long)param_1);
  (**(code **)(**(int **)(this + 100) + 0xc))(*(int **)(this + 100),param_1);
  return;
}


