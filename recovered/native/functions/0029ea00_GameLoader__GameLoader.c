/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ea00 GameLoader::GameLoader */

/* GameLoader::GameLoader(CapcomApp*, bool) */

GameLoader * __thiscall GameLoader::GameLoader(GameLoader *this,CapcomApp *param_1,bool param_2)

{
  GameLoader GVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  L_PrintLog((char *)(DAT_0029ea68 + 0x29ea24),(char *)(DAT_0029ea64 + 0x29ea22));
  *(CapcomApp **)this = param_1;
  this[0x38] = (GameLoader)0x0;
  this[0x39] = (GameLoader)0x4;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 0x3a) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  GVar1 = (GameLoader)decideDeviceTypeByWidth(*(int *)(param_1 + 0x70) >> 0x10);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[8] = GVar1;
  uVar2 = L_CurrentTimeMillis();
  *(undefined8 *)(DAT_0029ea6c + 0x29ea58) = uVar2;
  *(undefined4 *)(DAT_0029ea70 + 0x29ea62) = 0xffffffff;
  return this;
}


