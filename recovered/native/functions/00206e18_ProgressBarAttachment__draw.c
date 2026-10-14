/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206e18 ProgressBarAttachment::draw */

/* ProgressBarAttachment::draw(CapcomGraphics*) */

void __thiscall ProgressBarAttachment::draw(ProgressBarAttachment *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  
  CapcomGraphics::setColor(param_1,DAT_00206e88);
  iVar1 = *(int *)(this + 4);
  __floatsisf(iVar1 >> 0x10);
  uVar2 = __floatsisf((int)(short)iVar1);
  CapcomGraphics::fillRect
            (param_1,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,extraout_s3);
  CapcomGraphics::setColor(param_1,DAT_00206e94);
  iVar1 = *(int *)(this + 4);
  __floatsisf(iVar1 >> 0x10);
  __floatsisf((int)(short)iVar1);
  __divsi3(*(int *)(this + 100) * 0x46,*(undefined4 *)(this + 0x68));
  uVar2 = __floatsisf();
  CapcomGraphics::fillRect
            (param_1,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2_00,extraout_s3_00);
  return;
}


