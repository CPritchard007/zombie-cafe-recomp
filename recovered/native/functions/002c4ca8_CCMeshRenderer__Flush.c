/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4ca8 CCMeshRenderer::Flush */

/* CCMeshRenderer::Flush(ccMeshRenderer*) */

undefined8 CCMeshRenderer::Flush(ccMeshRenderer *param_1)

{
  int in_r1;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  ccMeshRenderer *pcVar4;
  int local_1c;
  
  puVar2 = (undefined4 *)(DAT_002c4e5c + 0x2c4cb4);
  pcVar4 = param_1;
  CCGFX::SetColor(*(uint *)(param_1 + 0x10));
  piVar3 = (int *)*puVar2;
  if (*piVar3 == 0) {
    glVertexPointer(3,DAT_002c4e60,0,*(undefined4 *)(param_1 + 4));
    glEnableClientState(DAT_002c4e64);
    glTexCoordPointer(2,DAT_002c4e60,0,*(undefined4 *)(param_1 + 0xc));
    glEnableClientState(DAT_002c4e68);
    if ((piVar3[0x75] != 0) && (*(int *)(param_1 + 8) != 0)) {
      glEnable(DAT_002c4e6c);
      glEnableClientState(DAT_002c4e70);
      glNormalPointer(DAT_002c4e60,0,*(undefined4 *)(param_1 + 8));
    }
    local_1c = in_r1;
    if (*(int *)(param_1 + 0x14) != 0) {
      glColorPointer(4,DAT_002c4e74,0);
      glEnableClientState(DAT_002c4e78);
      local_1c = in_r1;
    }
  }
  else {
    local_1c = in_r1;
    if (*piVar3 == 1) {
      glUniformMatrix4fv(piVar3[0x91],1,0,piVar3 + 0x2a);
      if (piVar3[0x75] != 0) {
        glUniformMatrix4fv(piVar3[0x92],1,0,piVar3 + 0x3a);
        glUniformMatrix3fv(piVar3[0x93],1,0,piVar3 + 0x56);
      }
      local_1c = *(int *)(param_1 + 4);
      glVertexAttribPointer(0,3,DAT_002c4e60,0,0);
      glEnableVertexAttribArray(0);
      if (piVar3[0x76] != 0) {
        local_1c = *(int *)(param_1 + 0xc);
        glVertexAttribPointer(2,2,DAT_002c4e60,0,0);
        glEnableVertexAttribArray(2);
      }
      if ((piVar3[0x75] != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
        glVertexAttribPointer(3,3,DAT_002c4e60,0,0);
        glEnableVertexAttribArray(3);
        local_1c = iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        pcVar4 = (ccMeshRenderer *)piVar3[0x62];
        glVertexAttrib4f(1,piVar3[0x5f],piVar3[0x60],piVar3[0x61]);
        glDisableVertexAttribArray(1);
      }
      else {
        pcVar4 = (ccMeshRenderer *)0x0;
        glVertexAttribPointer(1,4,DAT_002c4e74,1);
        glEnableVertexAttribArray(1);
        local_1c = iVar1;
      }
    }
  }
  glDrawArrays(4,0,*(int *)param_1 * 3);
  piVar3[0xa1] = piVar3[0xa1] + *(int *)param_1 * 3;
  if (*piVar3 == 0) {
    if ((piVar3[0x75] != 0) && (*(int *)(param_1 + 8) != 0)) {
      glDisable(DAT_002c4e6c);
      glDisableClientState(DAT_002c4e70);
    }
    glDisableClientState(DAT_002c4e78);
  }
  CCGFX::SetColor(0xffffffff);
  return CONCAT44(local_1c,pcVar4);
}


