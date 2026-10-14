/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aef18 CCGFX::Draw2DColorShape */

/* CCGFX::Draw2DColorShape(ccVec2*, unsigned int*, int, int) */

void CCGFX::Draw2DColorShape(ccVec2 *param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_002aefc4;
  SetModelView((ccMat3x4 *)0x0);
  SetColor(0xffffffff);
  piVar2 = *(int **)(iVar1 + 0x2aef34);
  if (*piVar2 == 0) {
    glVertexPointer(2,DAT_002aefc8,param_4,param_1);
    glEnableClientState(DAT_002aefcc);
    glColorPointer(4,DAT_002aefd0,param_4,param_2);
    glEnableClientState(DAT_002aefd4);
  }
  else if (*piVar2 == 1) {
    glUniformMatrix4fv(piVar2[0x91],1,0,piVar2 + 0x2a);
    glVertexAttribPointer(0,2,DAT_002aefc8,0,param_4,param_1);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1,4,DAT_002aefd0,1,param_4,param_2);
    glEnableVertexAttribArray(1);
  }
  glDrawArrays(5,0,param_3);
  if (*piVar2 == 0) {
    glDisableClientState(DAT_002aefd4);
  }
  return;
}


