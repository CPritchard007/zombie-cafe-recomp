/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0054 L_DrawDownloadIcon */

/* L_DrawDownloadIcon(SHud*) */

void L_DrawDownloadIcon(SHud *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 0xc),0x40800000);
  __mulsf3(uVar1,0x40800000);
  uVar2 = __fixunssfsi();
  uVar1 = __floatunsisf(uVar2 & 3);
  uVar1 = __mulsf3(uVar1,0x3e800000);
  uVar3 = __addsf3(uVar1,0);
  uVar1 = __floatunsisf((uVar2 & 3) + 1);
  uVar1 = __mulsf3(uVar1,0x3e800000);
  uVar4 = __addsf3(uVar1,0);
  uVar1 = __floatunsisf(uVar2 >> 2);
  uVar1 = __mulsf3(uVar1,0x3e800000);
  uVar5 = __addsf3(uVar1,0);
  uVar1 = __floatunsisf((uVar2 >> 2) + 1);
  uVar1 = __mulsf3(uVar1,0x3e800000);
  local_54 = __addsf3(uVar1,0);
  uVar1 = DAT_002c014c;
  local_68 = uVar3;
  local_64 = uVar5;
  local_60 = uVar4;
  local_5c = uVar5;
  local_58 = uVar3;
  local_50 = uVar4;
  local_4c = local_54;
  glVertexPointer(2,DAT_002c014c,0,DAT_002c0148 + 0x2c00dc);
  glEnableClientState(DAT_002c0150);
  glEnableClientState(DAT_002c0154);
  glTexCoordPointer(2,uVar1,0,&local_68);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_1c = 0;
  local_48 = 0x42000000;
  local_38 = 0x42000000;
  local_28 = 0x3f800000;
  local_24 = DAT_002c0158;
  local_20 = __subsf3(*(undefined4 *)(param_1 + 4));
  CCGFX::SetModelView((ccMat3x4 *)&local_48);
  glDrawArrays(5,0,4);
  return;
}


