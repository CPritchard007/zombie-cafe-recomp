/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0bb8 CCBatchRenderer::Flush */

/* CCBatchRenderer::Flush(void*) */

undefined8 __thiscall CCBatchRenderer::Flush(CCBatchRenderer *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  CCBatchRenderer *pCVar3;
  
  iVar1 = DAT_002b0d28;
  if (*(int *)(this + 8) != 0) {
    pCVar3 = this;
    CCMaterial::Activate(*(ccMaterial **)(this + 0x1c));
    CCGFX::SetModelView((ccMat3x4 *)0x0);
    CCGFX::SetColor(0xffffffff);
    piVar2 = *(int **)(iVar1 + 0x2b0bda);
    if (*piVar2 == 0) {
      glVertexPointer(2,DAT_002b0d2c,0,*(undefined4 *)(this + 0x10));
      glEnableClientState(DAT_002b0d30);
      glTexCoordPointer(2,DAT_002b0d2c,0,*(undefined4 *)(this + 0x14));
      glEnableClientState(DAT_002b0d34);
      glColorPointer(4,DAT_002b0d38,0,*(undefined4 *)(this + 0x18));
      glEnableClientState(DAT_002b0d3c);
      if (*(int *)(this + 0x20) != 0) {
        glActiveTexture(DAT_002b0d40);
        glClientActiveTexture(DAT_002b0d40);
        glTexCoordPointer(2,DAT_002b0d2c,0,*(undefined4 *)(this + 0x20));
        glEnableClientState(DAT_002b0d34);
        glDisableClientState(DAT_002b0d3c);
        CCGFX::SetColor(0xffffffff);
        glActiveTexture(DAT_002b0d44);
        glClientActiveTexture(DAT_002b0d44);
      }
    }
    else if (*piVar2 == 1) {
      glUniformMatrix4fv(piVar2[0x91],1,0,piVar2 + 0x2a);
      glVertexAttribPointer(0,2,DAT_002b0d2c,0,0,*(undefined4 *)(this + 0x10));
      glEnableVertexAttribArray(0);
      if ((uint)piVar2[0x76] < 2) {
        glDisableVertexAttribArray(2);
      }
      else {
        glVertexAttribPointer(2,2,DAT_002b0d2c,0,0,*(undefined4 *)(this + 0x14));
        glEnableVertexAttribArray(2);
        if (*(int *)(this + 0x20) != 0) {
          glVertexAttribPointer(4,2,DAT_002b0d2c,0,0,*(int *)(this + 0x20));
          glEnableVertexAttribArray(4);
        }
      }
      pCVar3 = (CCBatchRenderer *)0x0;
      param_1 = *(void **)(this + 0x18);
      glVertexAttribPointer(1,4,DAT_002b0d38,1);
      glEnableVertexAttribArray(1);
    }
    glDrawElements(5,*(int *)(this + 8) * 6 + -2,DAT_002b0d48,*(undefined4 *)(this + 0xc));
    piVar2[0xa1] = *(int *)(this + 8) * 6 + piVar2[0xa1] + -2;
    CCMaterial::Deactivate(*(ccMaterial **)(this + 0x1c));
    if (*piVar2 == 0) {
      glDisableClientState(DAT_002b0d3c);
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    this = pCVar3;
  }
  return CONCAT44(param_1,this);
}


