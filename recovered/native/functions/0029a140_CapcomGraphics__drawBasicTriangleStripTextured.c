/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a140 CapcomGraphics::drawBasicTriangleStripTextured */

/* CapcomGraphics::drawBasicTriangleStripTextured(CFTexture, float const*, float const*, int) */

undefined8 __thiscall
CapcomGraphics::drawBasicTriangleStripTextured
          (CapcomGraphics *this,CFTexture *param_2,float *param_3,float *param_4,int param_5)

{
  CapcomGraphics *pCStack_20;
  CFTexture *pCStack_1c;
  float *pfStack_18;
  
  pCStack_20 = this;
  pCStack_1c = param_2;
  pfStack_18 = param_3;
  CFTexture::CFTexture((CFTexture *)&pCStack_20,param_2);
  ensureBatchReady(this,(CFTexture *)&pCStack_20);
  CFTexture::~CFTexture((CFTexture *)&pCStack_20);
  createBatchIndices(this,param_5);
  Vector<float>::copyInto((Vector<float> *)(this + 0x28),param_3,param_5 * 2);
  Vector<float>::copyInto((Vector<float> *)(this + 0x34),param_4,param_5 * 2);
  return CONCAT44(pCStack_1c,pCStack_20);
}


