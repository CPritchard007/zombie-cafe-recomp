/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbc88 CCTextRenderer::Flush */

/* CCTextRenderer::Flush(void*, unsigned int) */

void CCTextRenderer::Flush(void *param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if ((*(int *)((int)param_1 + 0x120) == 0) && (*(int *)((int)param_1 + 4) != 0)) {
    CCMaterial::Activate((ccMaterial *)((int)param_1 + 0x50));
    if (param_2 != 0) {
      CCGFX::SetModelView((ccMat3x4 *)0x0);
    }
    puVar1 = (undefined4 *)(DAT_002bbdc0 + 0x2bbcc4);
    CCGFX::SetColor(0xffffffff);
    piVar2 = (int *)*puVar1;
    if (*piVar2 == 0) {
      glVertexPointer(3,DAT_002bbdc4,0,*(undefined4 *)((int)param_1 + 0xf0));
      glEnableClientState(DAT_002bbdc8);
      glTexCoordPointer(2,DAT_002bbdc4,0,*(undefined4 *)((int)param_1 + 0xf4));
      glEnableClientState(DAT_002bbdcc);
      glColorPointer(4,DAT_002bbdd0,0,*(undefined4 *)((int)param_1 + 0xf8));
      glEnableClientState(DAT_002bbdd4);
    }
    else if (*piVar2 == 1) {
      glUniformMatrix4fv(piVar2[0x91],1,0,piVar2 + 0x2a);
      glVertexAttribPointer(0,3,DAT_002bbdc4,0,0,*(undefined4 *)((int)param_1 + 0xf0));
      glEnableVertexAttribArray(0);
      glVertexAttribPointer(2,2,DAT_002bbdc4,0,0,*(undefined4 *)((int)param_1 + 0xf4));
      glEnableVertexAttribArray(2);
      glVertexAttribPointer(1,4,DAT_002bbdd0,1,0,*(undefined4 *)((int)param_1 + 0xf8));
      glEnableVertexAttribArray(1);
    }
    glDrawElements(5,*(int *)((int)param_1 + 4) * 6 + -2,DAT_002bbdd8,
                   *(undefined4 *)((int)param_1 + 0xec));
    piVar2[0xa1] = *(int *)((int)param_1 + 4) * 6 + piVar2[0xa1] + -2;
    CCMaterial::Deactivate((ccMaterial *)((int)param_1 + 0x50));
    if (*piVar2 == 0) {
      glDisableClientState(DAT_002bbdd4);
    }
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  return;
}


