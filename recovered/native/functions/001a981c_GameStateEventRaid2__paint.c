/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a981c GameStateEventRaid2::paint */

/* GameStateEventRaid2::paint(CapcomGraphics*) */

void __thiscall GameStateEventRaid2::paint(GameStateEventRaid2 *this,CapcomGraphics *param_1)

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
  glScalef(*(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x44),0x3f800000);
  Cafe::paint(*(Cafe **)(this + 0x80),param_1);
  CapcomGraphics::finishBatch();
  glPopMatrix();
  CapcomGraphics::translate((long)param_1);
  (**(code **)(**(int **)(this + 0x88) + 0xc))(*(int **)(this + 0x88),param_1);
  return;
}


