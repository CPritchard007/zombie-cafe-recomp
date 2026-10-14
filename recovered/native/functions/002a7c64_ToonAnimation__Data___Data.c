/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7c64 ToonAnimation::Data::~Data */

/* ToonAnimation::Data::~Data() */

Data * __thiscall ToonAnimation::Data::~Data(Data *this)

{
  CCToon::Free(*(ccToon **)this);
  free(*(void **)this);
  return this;
}


