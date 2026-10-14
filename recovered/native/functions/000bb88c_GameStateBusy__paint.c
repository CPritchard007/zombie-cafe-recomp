/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb88c GameStateBusy::paint */

/* GameStateBusy::paint(CapcomGraphics*) */

undefined8 __thiscall GameStateBusy::paint(GameStateBusy *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  
  (**(code **)(**(int **)(this + 0x14) + 4))();
  CapcomGraphics::finishBatch();
  CapcomGraphics::setColor(param_1,**(int **)(DAT_000bb8d4 + 0xbb8aa));
  iVar2 = *(int *)(*(int *)(this + 0xc) + 0x10);
  __floatsisf(iVar2 >> 0x10);
  uVar1 = __floatsisf((int)(short)iVar2);
  CapcomGraphics::fillRect(param_1,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  return CONCAT44(param_1,uVar1);
}


