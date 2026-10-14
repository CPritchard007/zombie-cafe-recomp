/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae40c CCGFX::SetupScreenOrthoWithOrientation */

/* CCGFX::SetupScreenOrthoWithOrientation(unsigned int, unsigned int, unsigned int) */

void CCGFX::SetupScreenOrthoWithOrientation(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  ccMat4x4 *__dest;
  float extraout_s0;
  float fVar10;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  undefined1 auStack_168 [68];
  int local_124;
  int local_120;
  undefined4 local_11c;
  ccMat4x4 acStack_118 [64];
  ccMat4x4 acStack_d8 [64];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [68];
  
  piVar8 = *(int **)(DAT_002ae5cc + 0x2ae418);
  if (*piVar8 == 0) {
    glMatrixMode(DAT_002ae5d0);
    glLoadIdentity();
  }
  else if (*piVar8 == 1) {
    FUN_002ada1c(piVar8 + 10);
  }
  uVar1 = __floatunsisf(param_1);
  iVar2 = __mulsf3(uVar1,0x3f000000);
  uVar3 = __floatunsisf(param_2);
  iVar4 = __mulsf3(uVar3,0x3f000000);
  if (*piVar8 != 0) {
    if (*piVar8 != 1) {
      return;
    }
    __dest = (ccMat4x4 *)(piVar8 + 10);
    if ((param_3 == 1) || (param_3 == 0)) {
      CCMat4x4::SetOrtho(__dest,extraout_s0,extraout_s1,extraout_s2,extraout_s3,extraout_s4,
                         extraout_s5);
    }
    else {
      if (param_3 == 3) {
        fVar10 = (float)CCMat4x4::SetOrtho(__dest,extraout_s0,extraout_s1,extraout_s2,extraout_s3,
                                           extraout_s4,extraout_s5);
        CCMat4x4::RotZ(acStack_118,fVar10);
        local_11c = 0;
        local_124 = iVar2 + -0x80000000;
        local_120 = iVar4 + -0x80000000;
        CCMat4x4::Translate(acStack_d8,(ccVec3 *)&local_124);
        FUN_002ada84(auStack_98,__dest,acStack_118);
        puVar7 = auStack_98;
      }
      else {
        fVar10 = (float)CCMat4x4::SetOrtho(__dest,extraout_s0,extraout_s1,extraout_s2,extraout_s3,
                                           extraout_s4,extraout_s5);
        CCMat4x4::RotZ(acStack_118,fVar10);
        local_11c = 0;
        local_124 = iVar2 + -0x80000000;
        local_120 = iVar4 + -0x80000000;
        CCMat4x4::Translate(acStack_d8,(ccVec3 *)&local_124);
        FUN_002ada84(auStack_58,__dest,acStack_118);
        puVar7 = auStack_58;
      }
      FUN_002ada84(auStack_168,puVar7,acStack_d8);
      memcpy(__dest,auStack_168,0x40);
    }
    SetProjection((ccMat4x4 *)(piVar8 + 10));
    return;
  }
  if (param_3 == 1) {
    uVar6 = 0;
    uVar9 = 0;
    uVar5 = uVar3;
    uVar3 = uVar1;
  }
  else {
    if (param_3 != 0) {
      if (param_3 == 3) {
        glOrthof(iVar4 + -0x80000000,iVar4,iVar2 + -0x80000000,iVar2,DAT_002ae5d4,0x3f800000);
        uVar1 = DAT_002ae5d8;
      }
      else {
        glOrthof(iVar4 + -0x80000000,iVar4,iVar2 + -0x80000000,iVar2,DAT_002ae5d4,0x3f800000);
        uVar1 = DAT_002ae5dc;
      }
      glRotatef(uVar1,0,0,0x3f800000);
      glTranslatef(iVar2 + -0x80000000,iVar4 + -0x80000000,0);
      goto LAB_002ae4ea;
    }
    uVar5 = 0;
    uVar6 = uVar3;
    uVar3 = 0;
    uVar9 = uVar1;
  }
  glOrthof(uVar5,uVar6,uVar3,uVar9,DAT_002ae5d4,0x3f800000);
LAB_002ae4ea:
  glMatrixMode(0x1700);
  return;
}


