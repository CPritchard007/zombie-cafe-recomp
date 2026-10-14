/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aecec CCGFX::Draw2DMultiTexture */

/* CCGFX::Draw2DMultiTexture(ccVec2*, ccVec2 const*, ccVec2 const*, int) */

void CCGFX::Draw2DMultiTexture(ccVec2 *param_1,ccVec2 *param_2,ccVec2 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_002aee24;
  SetModelView((ccMat3x4 *)0x0);
  SetColor(0xffffffff);
  piVar2 = *(int **)(iVar1 + 0x2aed08);
  if (*piVar2 == 0) {
    glTexParameterf(DAT_002aee28,0x2800,DAT_002aee2c);
    glTexParameterf(DAT_002aee28,DAT_002aee30,DAT_002aee2c);
    glTexParameterf(DAT_002aee28,DAT_002aee34,DAT_002aee38);
    glTexParameterf(DAT_002aee28,DAT_002aee3c,DAT_002aee38);
    glTexParameterf(DAT_002aee28,DAT_002aee40,DAT_002aee44);
    glVertexPointer(2,DAT_002aee48,0,param_1);
    glEnableClientState(DAT_002aee4c);
    glTexCoordPointer(2,DAT_002aee48,0,param_2);
    glClientActiveTexture(DAT_002aee50);
    glEnableClientState(DAT_002aee54);
    glClientActiveTexture(DAT_002aee58);
    glTexCoordPointer(2,DAT_002aee48,0,param_3);
    glEnableClientState(DAT_002aee54);
    glClientActiveTexture(DAT_002aee50);
  }
  else if (*piVar2 == 1) {
    glUniformMatrix4fv(piVar2[0x91],1,0,piVar2 + 0x2a);
    glVertexAttribPointer(0,2,DAT_002aee48,0,0,param_1);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(2,2,DAT_002aee48,0,0,param_2);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(4,2,DAT_002aee48,0,0,param_3);
    glEnableVertexAttribArray(4);
    glVertexAttrib4f(1,piVar2[0x5f],piVar2[0x60],piVar2[0x61],piVar2[0x62]);
    glDisableVertexAttribArray(1);
  }
  glDrawArrays(5,0,param_4);
  return;
}


