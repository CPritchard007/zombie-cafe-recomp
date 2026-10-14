/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a87c CapcomGraphics::drawLine */

/* CapcomGraphics::drawLine(float, float, float, float, float) */

undefined8 __thiscall
CapcomGraphics::drawLine
          (CapcomGraphics *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_stack_00000004;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = in_r1;
  local_14 = in_r2;
  finishBatch();
  prepareForVertexDraw(this,false);
  glVertexPointer(2,DAT_0029a8c0,0,&local_18);
  glLineWidth(in_stack_00000004);
  uVar1 = getAscendingIndices(this,2);
  glDrawElements(1,2,DAT_0029a8c4,uVar1);
  return CONCAT44(local_14,local_18);
}


