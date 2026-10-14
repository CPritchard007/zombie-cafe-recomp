/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af288 CCGFX::DrawScreenFadingRect */

/* CCGFX::DrawScreenFadingRect(unsigned int, int, int, unsigned int, unsigned int) */

void CCGFX::DrawScreenFadingRect(uint param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
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
  
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_1c = 0;
  local_48 = __floatunsisf(param_4);
  local_38 = __floatunsisf(param_5);
  local_24 = __floatsisf(param_2);
  local_20 = __floatsisf(param_3);
  iVar3 = DAT_002af364;
  SetModelView((ccMat3x4 *)&local_48);
  SetColor(param_1);
  uVar2 = DAT_002af36c;
  iVar1 = DAT_002af368;
  iVar3 = *(int *)(iVar3 + 0x2af2d4);
  glUniformMatrix4fv(*(undefined4 *)(iVar3 + 0x244),1,0,iVar3 + 0xa8);
  glVertexAttribPointer(0,2,uVar2,0,0,iVar1 + 0x2af340);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(2,2,uVar2,0,0,iVar1 + 0x2af360);
  glEnableVertexAttribArray(2);
  glVertexAttrib4f(1,*(undefined4 *)(iVar3 + 0x17c),*(undefined4 *)(iVar3 + 0x180),
                   *(undefined4 *)(iVar3 + 0x184),*(undefined4 *)(iVar3 + 0x188));
  glDisableVertexAttribArray(1);
  glDrawArrays(5,0,4);
  SetColor(0xffffffff);
  return;
}


