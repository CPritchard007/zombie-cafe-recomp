/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0ec4 L_DrawImage */

/* L_DrawImage(ccMaterial*, float, float) */

void L_DrawImage(ccMaterial *param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  int iVar3;
  float __x;
  float __x_00;
  float local_38 [2];
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = __floatunsisf(*(undefined4 *)(iVar3 + 0x14));
  uVar2 = __floatunsisf(*(undefined4 *)(iVar3 + 0x18));
  __x_00 = floorf(__x);
  floorf(__x_00);
  uVar1 = __addsf3(in_r1,uVar1);
  local_30 = uVar1;
  local_24 = __addsf3(in_r2,uVar2);
  local_20 = uVar1;
  local_1c = local_24;
  L_DrawImage(param_1,local_38);
  return;
}


