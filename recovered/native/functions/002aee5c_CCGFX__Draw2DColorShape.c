/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aee5c CCGFX::Draw2DColorShape */

/* CCGFX::Draw2DColorShape(ccVec2*, unsigned int, int) */

void CCGFX::Draw2DColorShape(ccVec2 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  SetModelView((ccMat3x4 *)0x0);
  iVar1 = DAT_002aef08;
  SetColor(param_2);
  piVar2 = *(int **)(iVar1 + 0x2aee78);
  if (*piVar2 == 0) {
    glVertexPointer(2,DAT_002aef0c,0,param_1);
    glEnableClientState(DAT_002aef10);
    glDisableClientState(DAT_002aef14);
  }
  else if (*piVar2 == 1) {
    glUniformMatrix4fv(piVar2[0x91],1,0,piVar2 + 0x2a);
    glVertexAttribPointer(0,2,DAT_002aef0c,0,0,param_1);
    glEnableVertexAttribArray(0);
    glVertexAttrib4f(1,piVar2[0x5f],piVar2[0x60],piVar2[0x61],piVar2[0x62]);
    glDisableVertexAttribArray(1);
  }
  glDrawArrays(5,0,param_3);
  if (*piVar2 == 0) {
    glDisableClientState(DAT_002aef14);
  }
  return;
}


