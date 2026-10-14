/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7be4 ToonAnimation::Data::create */

/* ToonAnimation::Data::create(String, int) */

Data * ToonAnimation::Data::create
                 (String *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Resource *this;
  Data *this_00;
  uchar *puVar1;
  String *pSStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pSStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  String::String((String *)&pSStack_20,param_1);
  String::String((String *)&uStack_18,(String *)&pSStack_20);
  this = (Resource *)ResourceManager::load(&uStack_18,param_2,1);
  String::~String((String *)&uStack_18);
  String::~String((String *)&pSStack_20);
  puVar1 = *(uchar **)(this + 0x14);
  this_00 = (Data *)operator_new(8);
  Data(this_00,puVar1);
  ResourceManager::Resource::releaseHandle(this);
  if (this_00 == (Data *)0x0) {
    L_PrintLog((char *)(DAT_002a7c5c + 0x2a7c3e),(char *)(DAT_002a7c60 + 0x2a7c40));
  }
  return this_00;
}


