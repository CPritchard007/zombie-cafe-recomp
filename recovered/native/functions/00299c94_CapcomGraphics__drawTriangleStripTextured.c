/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299c94 CapcomGraphics::drawTriangleStripTextured */

/* CapcomGraphics::drawTriangleStripTextured(CFTexture, unsigned int, void const*, unsigned int,
   void const*, unsigned int, void const*, int) */

void __thiscall
CapcomGraphics::drawTriangleStripTextured
          (CapcomGraphics *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  finishBatch();
  prepareForVertexDraw(this,true);
  puVar1 = (uint *)*param_2;
  if (puVar1 != (uint *)0x0) {
    puVar1 = (uint *)puVar1[1];
  }
  setSourceTexture(this,*puVar1);
  glVertexPointer(2,param_3,0,param_4,uVar2);
  glTexCoordPointer(2,param_5,0,param_6);
  glDrawElements(5,param_9,param_7,param_8);
  return;
}


