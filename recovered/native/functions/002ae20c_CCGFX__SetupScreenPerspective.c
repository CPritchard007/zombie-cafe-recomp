/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae20c CCGFX::SetupScreenPerspective */

/* CCGFX::SetupScreenPerspective(unsigned int, unsigned int, unsigned int, float, float, float) */

void CCGFX::SetupScreenPerspective
               (uint param_1,uint param_2,uint param_3,float param_4,float param_5,float param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  ccMat4x4 *__dest;
  float fVar5;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s3;
  undefined4 in_stack_00000004;
  undefined1 auStack_98 [64];
  ccMat4x4 acStack_58 [68];
  
  if (param_3 == 0) {
    uVar1 = __floatunsisf();
    uVar2 = __floatunsisf(param_2);
  }
  else {
    uVar1 = __floatunsisf(param_2);
    uVar2 = __floatunsisf(param_1);
  }
  uVar6 = __divsf3(uVar1,uVar2);
  piVar4 = *(int **)(DAT_002ae2bc + 0x2ae24e);
  __dest = (ccMat4x4 *)(piVar4 + 10);
  CCMat4x4::SetPerspective
            (__dest,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2,extraout_s3);
  fVar5 = (float)SetProjection(__dest);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    if (param_3 != 0) {
      glMatrixMode(DAT_002ae2c0);
      glRotatef(DAT_002ae2c4,0,0,0x3f800000,in_stack_00000004);
      glMatrixMode(0x1700);
    }
  }
  else if ((iVar3 == 1) && (param_3 != 0)) {
    CCMat4x4::RotZ(acStack_58,fVar5);
    FUN_002ada84(auStack_98,__dest,acStack_58);
    memcpy(__dest,auStack_98,0x40);
    SetProjection(__dest);
  }
  return;
}


