/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae2cc CCGFX::SetupScreenOrtho */

/* CCGFX::SetupScreenOrtho(unsigned int, unsigned int, unsigned int) */

void CCGFX::SetupScreenOrtho(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ccMat4x4 *__dest;
  float fVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  undefined1 auStack_128 [68];
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  ccMat4x4 acStack_d8 [64];
  ccMat4x4 acStack_98 [64];
  undefined1 auStack_58 [68];
  
  uVar1 = __floatunsisf();
  iVar2 = __mulsf3(uVar1,0x3f000000);
  uVar3 = __floatunsisf(param_2);
  iVar4 = __mulsf3(uVar3,0x3f000000);
  piVar5 = *(int **)(DAT_002ae3f8 + 0x2ae2fc);
  if (*piVar5 == 0) {
    glMatrixMode(DAT_002ae3fc);
    glLoadIdentity();
    if (param_3 == 0) {
      glOrthof(0,uVar1,0,uVar3,DAT_002ae400,0x3f800000);
    }
    else {
      glOrthof(iVar4 + -0x80000000,iVar4,iVar2 + -0x80000000,iVar2,DAT_002ae400,0x3f800000);
      glRotatef(DAT_002ae404,0,0,0x3f800000);
      glTranslatef(iVar2 + -0x80000000,iVar4 + -0x80000000,0);
    }
    glMatrixMode(0x1700);
  }
  else if (*piVar5 == 1) {
    __dest = (ccMat4x4 *)(piVar5 + 10);
    uVar7 = FUN_002ada1c(__dest);
    fVar6 = (float)((ulonglong)uVar7 >> 0x20);
    if (param_3 == 0) {
      CCMat4x4::SetOrtho(__dest,(float)uVar7,fVar6,extraout_s2,extraout_s3,extraout_s4,extraout_s5);
    }
    else {
      fVar6 = (float)CCMat4x4::SetOrtho(__dest,(float)uVar7,fVar6,extraout_s2,extraout_s3,
                                        extraout_s4,extraout_s5);
      CCMat4x4::RotZ(acStack_d8,fVar6);
      local_dc = 0;
      local_e4 = iVar2 + -0x80000000;
      local_e0 = iVar4 + -0x80000000;
      FUN_002ada1c(acStack_98);
      CCMat4x4::Translate(acStack_98,(ccVec3 *)&local_e4);
      FUN_002ada84(auStack_58,__dest,acStack_d8);
      FUN_002ada84(auStack_128,auStack_58,acStack_98);
      memcpy(__dest,auStack_128,0x40);
    }
    SetProjection((ccMat4x4 *)(piVar5 + 10));
  }
  return;
}


