/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a5ca CapcomGraphics::fillRect */

/* CapcomGraphics::fillRect(float, float, float, float) */

void __thiscall
CapcomGraphics::fillRect
          (CapcomGraphics *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  CFTexture aCStack_40 [8];
  float local_38 [2];
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __addsf3(in_r1,in_r3);
  local_30 = uVar1;
  local_24 = __addsf3(in_r2,in_stack_00000000);
  local_20 = uVar1;
  local_1c = local_24;
  CFTexture::CFTexture(aCStack_40,(ccTexture2D *)0x0);
  ensureBatchReady(this,aCStack_40);
  CFTexture::~CFTexture(aCStack_40);
  createBatchIndices(this,4);
  Vector<float>::copyInto((Vector<float> *)(this + 0x28),local_38,8);
  return;
}


