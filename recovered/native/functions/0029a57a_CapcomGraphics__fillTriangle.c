/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a57a CapcomGraphics::fillTriangle */

/* CapcomGraphics::fillTriangle(float, float, float, float, float, float) */

void __thiscall
CapcomGraphics::fillTriangle
          (CapcomGraphics *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  CFTexture aCStack_28 [8];
  float local_20 [6];
  
  CFTexture::CFTexture(aCStack_28,(ccTexture2D *)0x0);
  ensureBatchReady(this,aCStack_28);
  CFTexture::~CFTexture(aCStack_28);
  createBatchIndices(this,3);
  Vector<float>::copyInto((Vector<float> *)(this + 0x28),local_20,6);
  return;
}


