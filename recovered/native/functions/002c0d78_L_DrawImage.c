/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0d78 L_DrawImage */

/* L_DrawImage(ccMaterial*, float const*) */

void L_DrawImage(ccMaterial *param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar1 = __floatunsisf(*(undefined4 *)(iVar6 + 4));
  uVar2 = __divsf3(0,uVar1);
  uVar3 = __floatunsisf(*(undefined4 *)(iVar6 + 0x14));
  uVar3 = __addsf3(uVar3,0);
  uVar1 = __divsf3(uVar3,uVar1);
  uVar3 = __floatunsisf(*(undefined4 *)(iVar6 + 8));
  uVar4 = __divsf3(0,uVar3);
  uVar5 = __floatunsisf(*(undefined4 *)(iVar6 + 0x18));
  uVar5 = __addsf3(uVar5,0);
  local_34 = __divsf3(uVar5,uVar3);
  piVar7 = (int *)(DAT_002c0eac + 0x2c0dea);
  local_38 = uVar2;
  local_30 = uVar1;
  local_2c = local_34;
  local_28 = uVar2;
  local_24 = uVar4;
  local_20 = uVar1;
  local_1c = uVar4;
  CCGFX::SetColor(0xffffffff);
  CCMaterial::Activate(param_1);
  piVar7 = (int *)*piVar7;
  if (*piVar7 == 0) {
    glDisableClientState(DAT_002c0eb0);
    glVertexPointer(2,DAT_002c0eb4,0,param_2);
    glEnableClientState(DAT_002c0eb8);
    glClientActiveTexture(DAT_002c0ebc);
    glTexCoordPointer(2,DAT_002c0eb4,0,&local_38);
    glEnableClientState(DAT_002c0ec0);
  }
  else if (*piVar7 == 1) {
    glUniformMatrix4fv(piVar7[0x91],1,0,piVar7 + 0x2a);
    glVertexAttribPointer(0,2,DAT_002c0eb4,0,0,param_2);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(2,2,DAT_002c0eb4,0,0,&local_38);
    glEnableVertexAttribArray(2);
    glVertexAttrib4f(1,piVar7[0x5f],piVar7[0x60],piVar7[0x61],piVar7[0x62]);
    glDisableVertexAttribArray(1);
  }
  glDrawArrays(5,0,4);
  CCMaterial::Deactivate(param_1);
  return;
}


