/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af094 CCGFX::OverlayScreenRect */

/* CCGFX::OverlayScreenRect(unsigned int, unsigned int, unsigned int) */

void CCGFX::OverlayScreenRect(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  
  uVar1 = DAT_002af14c;
  glVertexPointer(2,DAT_002af150,0,DAT_002af148 + 0x2af0b0);
  uVar2 = DAT_002af154;
  glEnableClientState(DAT_002af158);
  glDisableClientState(DAT_002af15c);
  glDisable(uVar1);
  glEnable(uVar2);
  glBlendFunc(DAT_002af164,DAT_002af160);
  SetColor(param_1);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_1c = 0;
  local_28 = 0x3f800000;
  uVar3 = __floatunsisf(param_2);
  local_48 = uVar3;
  uVar4 = __floatunsisf(param_3);
  local_38 = uVar4;
  local_24 = __mulsf3(uVar3,0x3f000000);
  local_20 = __mulsf3(uVar4,0x3f000000);
  SetModelView((ccMat3x4 *)&local_48);
  glDrawArrays(5,0,4);
  SetColor(0xffffffff);
  glDisable(uVar2);
  glEnable(uVar1);
  glEnableClientState(DAT_002af15c);
  return;
}


