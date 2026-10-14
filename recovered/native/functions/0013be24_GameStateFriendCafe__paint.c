/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013be24 GameStateFriendCafe::paint */

/* GameStateFriendCafe::paint(CapcomGraphics*) */

undefined8 __thiscall GameStateFriendCafe::paint(GameStateFriendCafe *this,CapcomGraphics *param_1)

{
  int *piVar1;
  int iVar2;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  GameStateFriendCafe *local_18;
  
  local_18 = this;
  if (this[0xc0] == (GameStateFriendCafe)0x0) {
    CapcomGraphics::translate((long)param_1);
    glPushMatrix();
    glScalef(*(undefined4 *)(this + 0xac),*(undefined4 *)(this + 0xac),0x3f800000);
    Cafe::paint(*(Cafe **)(this + 0x34),param_1);
    CapcomGraphics::finishBatch();
    glPopMatrix();
    CapcomGraphics::translate((long)param_1);
    (**(code **)(**(int **)(this + 0x1d8) + 0xc))(*(int **)(this + 0x1d8),param_1);
    piVar1 = *(int **)(this + 0x9c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,param_1);
    }
    if (this[0xb0] != (GameStateFriendCafe)0x0) {
      CapcomGraphics::setColor(param_1,DAT_0013bed4);
      iVar2 = *(int *)(*(int *)(this + 0xc) + 0x10);
      __floatsisf(iVar2 >> 0x10);
      local_18 = (GameStateFriendCafe *)__floatsisf((int)(short)iVar2);
      CapcomGraphics::fillRect(param_1,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
    }
  }
  return CONCAT44(param_1,local_18);
}


