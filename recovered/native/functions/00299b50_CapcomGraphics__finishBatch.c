/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299b50 CapcomGraphics::finishBatch */

/* CapcomGraphics::finishBatch() */

undefined8 CapcomGraphics::finishBatch(void)

{
  CapcomGraphics *pCVar1;
  CapcomGraphics *in_r0;
  undefined4 in_r1;
  int in_r2;
  uint *puVar2;
  CapcomGraphics *pCVar3;
  CapcomGraphics *local_20;
  undefined4 uStack_1c;
  int local_18 [2];
  
  local_20 = in_r0;
  uStack_1c = in_r1;
  if (*(int *)(in_r0 + 0x20) != -1) {
    local_18[0] = in_r2;
    activate(in_r0);
    CFTexture::CFTexture((CFTexture *)&local_20,(ccTexture2D *)0x0);
    pCVar1 = local_20;
    pCVar3 = *(CapcomGraphics **)(in_r0 + 0x40);
    CFTexture::~CFTexture((CFTexture *)&local_20);
    if (pCVar3 != pCVar1) {
      puVar2 = *(uint **)(in_r0 + 0x40);
      if (puVar2 != (uint *)0x0) {
        puVar2 = (uint *)puVar2[1];
      }
      setSourceTexture(in_r0,*puVar2);
      glTexCoordPointer(2,DAT_00299bf4,0,*(undefined4 *)(in_r0 + 0x3c));
    }
    CFTexture::CFTexture((CFTexture *)local_18,(ccTexture2D *)0x0);
    prepareForVertexDraw(in_r0,(bool)('\x01' - (*(int *)(in_r0 + 0x40) == local_18[0])));
    CFTexture::~CFTexture((CFTexture *)local_18);
    glVertexPointer(2,DAT_00299bf4,0,*(undefined4 *)(in_r0 + 0x30));
    glDrawElements(5,*(int *)(in_r0 + 0x20) + 1,DAT_00299bf8,*(undefined4 *)(in_r0 + 0x24));
    *(undefined4 *)(in_r0 + 0x20) = 0xffffffff;
    *(undefined4 *)(in_r0 + 0x2c) = 0xffffffff;
    *(undefined4 *)(in_r0 + 0x38) = 0xffffffff;
    CFTexture::releaseRef((CFTexture *)(in_r0 + 0x40));
    CFTexture::init((CFTexture *)(in_r0 + 0x40),(ccTexture2D *)0x0);
  }
  return CONCAT44(uStack_1c,local_20);
}


