/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af168 CCGFX::DrawScreenRect */

/* CCGFX::DrawScreenRect(unsigned int, int, int, unsigned int, unsigned int) */

void CCGFX::DrawScreenRect(uint param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x3f800000;
  local_14 = 0;
  local_40 = __floatunsisf(param_4);
  local_30 = __floatunsisf(param_5);
  local_1c = __floatsisf(param_2);
  local_18 = __floatsisf(param_3);
  iVar1 = DAT_002af268;
  SetModelView((ccMat3x4 *)&local_40);
  SetColor(param_1);
  piVar2 = *(int **)(iVar1 + 0x2af1b4);
  if (*piVar2 == 0) {
    glEnableClientState(DAT_002af26c);
    glVertexPointer(2,DAT_002af274,0,DAT_002af270 + 0x2af200);
    glDisableClientState(DAT_002af278);
    glDisable(DAT_002af27c);
    glDisableClientState(DAT_002af280);
  }
  else if (*piVar2 == 1) {
    glUniformMatrix4fv(piVar2[0x91],1,0,piVar2 + 0x2a);
    glVertexAttribPointer(0,2,DAT_002af274,0,0,DAT_002af284 + 0x2af23a);
    glEnableVertexAttribArray(0);
    glVertexAttrib4f(1,piVar2[0x5f],piVar2[0x60],piVar2[0x61],piVar2[0x62]);
    glDisableVertexAttribArray(1);
  }
  glDrawArrays(5,0,4);
  SetColor(0xffffffff);
  if (*piVar2 == 0) {
    glEnableClientState(DAT_002af278);
  }
  return;
}


