/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239892 RaidNotification::~RaidNotification */

/* RaidNotification::~RaidNotification() */

RaidNotification * __thiscall RaidNotification::~RaidNotification(RaidNotification *this)

{
  String::~String((String *)(this + 8));
  String::~String((String *)this);
  return this;
}


