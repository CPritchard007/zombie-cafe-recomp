/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae5e8 CCGFX::SetModelTransform */

/* CCGFX::SetModelTransform(ccMat3x4 const*) */

void CCGFX::SetModelTransform(ccMat3x4 *param_1)

{
  int *piVar1;
  undefined4 local_50;
  undefined4 local_4c;
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
  undefined4 local_18;
  undefined4 local_14;
  
  piVar1 = *(int **)(DAT_002ae690 + 0x2ae5f4);
  if (*piVar1 == 0) {
    if (param_1 == (ccMat3x4 *)0x0) {
      glLoadIdentity();
    }
    else {
      local_50 = *(undefined4 *)param_1;
      local_4c = *(undefined4 *)(param_1 + 4);
      local_48 = *(undefined4 *)(param_1 + 8);
      local_40 = *(undefined4 *)(param_1 + 0xc);
      local_3c = *(undefined4 *)(param_1 + 0x10);
      local_44 = 0;
      local_34 = 0;
      local_38 = *(undefined4 *)(param_1 + 0x14);
      local_24 = 0;
      local_20 = *(undefined4 *)(param_1 + 0x24);
      local_30 = *(undefined4 *)(param_1 + 0x18);
      local_1c = *(undefined4 *)(param_1 + 0x28);
      local_2c = *(undefined4 *)(param_1 + 0x1c);
      local_18 = *(undefined4 *)(param_1 + 0x2c);
      local_28 = *(undefined4 *)(param_1 + 0x20);
      local_14 = 0x3f800000;
      glLoadMatrixf(&local_50);
    }
  }
  else if (*piVar1 == 1) {
    if (param_1 == (ccMat3x4 *)0x0) {
      FUN_002ada1c();
      piVar1[0x56] = 0x3f800000;
      piVar1[0x57] = 0;
      piVar1[0x58] = 0;
      piVar1[0x59] = 0;
      piVar1[0x5a] = 0x3f800000;
      piVar1[0x5b] = 0;
      piVar1[0x5c] = 0;
      piVar1[0x5d] = 0;
      piVar1[0x5e] = 0x3f800000;
    }
    else {
      FUN_002ada44(piVar1 + 0x3a,param_1);
      CCMat3x4::ToMat3x3((ccMat3x3 *)(piVar1 + 0x56),param_1);
    }
  }
  return;
}


