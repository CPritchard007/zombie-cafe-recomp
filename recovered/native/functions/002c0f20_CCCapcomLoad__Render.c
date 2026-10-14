/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0f20 CCCapcomLoad::Render */

/* CCCapcomLoad::Render(void*, unsigned int, unsigned int, float, bool) */

void CCCapcomLoad::Render(void *param_1,uint param_2,uint param_3,float param_4,bool param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char in_stack_00000000;
  
  if (*(int *)((int)param_1 + 0x340) == 0) {
    uVar2 = CCGetTimeMS();
    *(undefined4 *)((int)param_1 + 0x340) = uVar2;
  }
  iVar1 = DAT_002c101c;
  CCGFX::SetColor(0xffffffff);
  CCMaterial::Activate((ccMaterial *)((int)param_1 + 0x38));
  piVar3 = *(int **)(iVar1 + 0x2c0f50);
  if (*piVar3 == 0) {
    glDisableClientState(DAT_002c1020);
    glVertexPointer(2,DAT_002c1024,0,(int)param_1 + 0xd4);
    glEnableClientState(DAT_002c1028);
    glClientActiveTexture(DAT_002c102c);
    glTexCoordPointer(2,DAT_002c1024,0,(int)param_1 + 0xf4);
    glEnableClientState(DAT_002c1030);
  }
  else if (*piVar3 == 1) {
    glUniformMatrix4fv(piVar3[0x91],1,0,piVar3 + 0x2a);
    glVertexAttribPointer(0,2,DAT_002c1024,0,0,(int)param_1 + 0xd4);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(2,2,DAT_002c1024,0,0,(int)param_1 + 0xf4);
    glEnableVertexAttribArray(2);
    glVertexAttrib4f(1,piVar3[0x5f],piVar3[0x60],piVar3[0x61],piVar3[0x62]);
    glDisableVertexAttribArray(1);
  }
  if (in_stack_00000000 != '\0') {
    glDrawArrays(5,0,4);
  }
  CCMaterial::Deactivate((ccMaterial *)((int)param_1 + 0x38));
  return;
}


