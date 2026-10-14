/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298dd0 CapcomApp::CapcomApp */

/* CapcomApp::CapcomApp() */

CapcomApp * __thiscall CapcomApp::CapcomApp(CapcomApp *this)

{
  undefined4 uVar1;
  ResourceManager *this_00;
  CapcomGraphics *this_01;
  void *pvVar2;
  undefined8 uVar3;
  
  **(undefined4 **)(DAT_00298e48 + 0x298ddc) = this;
  this[0x60] = (CapcomApp)0x0;
  uVar3 = Platform::getAppTime();
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 0x68) = uVar3;
  this_00 = (ResourceManager *)operator_new(0x18);
  ResourceManager::ResourceManager(this_00);
  *(ResourceManager **)(this + 0x5c) = this_00;
  this_01 = (CapcomGraphics *)operator_new(0x48);
  CapcomGraphics::CapcomGraphics(this_01);
  *(undefined4 *)(this + 0x28) = 0x32;
  *(CapcomGraphics **)(this + 0x58) = this_01;
  *(undefined4 *)(this + 0x2c) = 1000;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  pvVar2 = operator_new(1);
  uVar1 = DAT_00298e4c;
  *(void **)(this + 8) = pvVar2;
  *(undefined4 *)(this + 0x70) = uVar1;
  this[0x54] = (CapcomApp)0x0;
  return this;
}


