/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7bc6 ToonAnimation::Data::Data */

/* ToonAnimation::Data::Data(unsigned char const*) */

Data * __thiscall ToonAnimation::Data::Data(Data *this,uchar *param_1)

{
  ccToon *pcVar1;
  
  pcVar1 = (ccToon *)malloc(0x2c);
  *(ccToon **)this = pcVar1;
  CCToon::Load(pcVar1,param_1);
  *(undefined2 *)(this + 4) = 1;
  return this;
}


