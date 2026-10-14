/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c3c6 FriendData::~FriendData */

/* FriendData::~FriendData() */

FriendData * __thiscall FriendData::~FriendData(FriendData *this)

{
  String::~String((String *)(this + 0x34));
  String::~String((String *)(this + 0x2c));
  String::~String((String *)(this + 0x24));
  String::~String((String *)(this + 0x10));
  String::~String((String *)(this + 8));
  String::~String((String *)this);
  return this;
}


