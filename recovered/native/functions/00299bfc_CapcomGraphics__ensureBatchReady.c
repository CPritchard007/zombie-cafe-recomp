/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299bfc CapcomGraphics::ensureBatchReady */

/* CapcomGraphics::ensureBatchReady(CFTexture) */

void __thiscall CapcomGraphics::ensureBatchReady(CapcomGraphics *this,int *param_2)

{
  if (*(int *)(this + 0x40) != *param_2) {
    if (*(int *)(this + 0x20) != -1) {
      finishBatch();
    }
    CFTexture::releaseRef((CFTexture *)(this + 0x40));
    CFTexture::init((CFTexture *)(this + 0x40),(CFTexture *)param_2);
  }
  return;
}


