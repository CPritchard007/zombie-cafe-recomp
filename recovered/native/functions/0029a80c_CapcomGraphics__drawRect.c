/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a80c CapcomGraphics::drawRect */

/* CapcomGraphics::drawRect(float, float, float, float) */

void __thiscall
CapcomGraphics::drawRect
          (CapcomGraphics *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_28 = __addsf3(in_r1,in_r3);
  local_20 = local_28;
  local_1c = __addsf3(in_r2,in_stack_00000000);
  local_14 = local_1c;
  finishBatch();
  prepareForVertexDraw(this,false);
  glVertexPointer(2,DAT_0029a868,0,local_30);
  uVar1 = getAscendingIndices(this,4);
  glDrawElements(2,4,DAT_0029a86c,uVar1);
  return;
}


