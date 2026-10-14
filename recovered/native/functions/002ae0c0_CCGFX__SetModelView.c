/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae0c0 CCGFX::SetModelView */

/* CCGFX::SetModelView(ccMat3x4 const*) */

void CCGFX::SetModelView(ccMat3x4 *param_1)

{
  int *piVar1;
  undefined1 auStack_90 [64];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  piVar1 = *(int **)(DAT_002ae1c0 + 0x2ae0cc);
  if (*piVar1 == 0) {
    if (param_1 == (ccMat3x4 *)0x0) {
      glLoadIdentity();
    }
    else {
      local_50 = *(int *)param_1;
      local_4c = *(int *)(param_1 + 4);
      local_48 = *(int *)(param_1 + 8);
      local_40 = *(int *)(param_1 + 0xc);
      local_3c = *(int *)(param_1 + 0x10);
      local_44 = 0;
      local_34 = 0;
      local_38 = *(int *)(param_1 + 0x14);
      local_24 = 0;
      local_20 = *(int *)(param_1 + 0x24);
      local_30 = *(int *)(param_1 + 0x18);
      local_1c = *(int *)(param_1 + 0x28);
      local_2c = *(int *)(param_1 + 0x1c);
      local_18 = *(int *)(param_1 + 0x2c);
      local_28 = *(int *)(param_1 + 0x20);
      local_14 = 0x3f800000;
      glLoadMatrixf(&local_50);
      piVar1[0x1a] = local_50;
      piVar1[0x1b] = local_4c;
      piVar1[0x1c] = local_48;
      piVar1[0x1d] = local_44;
      piVar1[0x1e] = local_40;
      piVar1[0x1f] = local_3c;
      piVar1[0x20] = local_38;
      piVar1[0x21] = local_34;
      piVar1[0x22] = local_30;
      piVar1[0x23] = local_2c;
      piVar1[0x24] = local_28;
      piVar1[0x25] = local_24;
      piVar1[0x26] = local_20;
      piVar1[0x27] = local_1c;
      piVar1[0x28] = local_18;
      piVar1[0x29] = local_14;
    }
  }
  else if (*piVar1 == 1) {
    if (param_1 == (ccMat3x4 *)0x0) {
      FUN_002ada1c();
    }
    else {
      FUN_002ada44(piVar1 + 0x1a);
    }
    FUN_002ada84(auStack_90,piVar1 + 10,piVar1 + 0x1a);
    memcpy(piVar1 + 0x2a,auStack_90,0x40);
  }
  return;
}


