/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001658b0 GameStateMap::MapCafe::operator= */

/* GameStateMap::MapCafe::TEMPNAMEPLACEHOLDERVALUE(GameStateMap::MapCafe const&) */

undefined8 __thiscall GameStateMap::MapCafe::operator=(MapCafe *this,MapCafe *param_1)

{
  MapCafe *pMStack_18;
  MapCafe *pMStack_14;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  pMStack_18 = this;
  pMStack_14 = param_1;
  String::String((String *)&pMStack_18,(String *)(param_1 + 0x30));
  String::operator=((String *)(this + 0x30),(String *)&pMStack_18);
  String::~String((String *)&pMStack_18);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this[0x3c] = param_1[0x3c];
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  this[0x50] = param_1[0x50];
  this[0x51] = param_1[0x51];
  return CONCAT44(pMStack_18,this);
}


