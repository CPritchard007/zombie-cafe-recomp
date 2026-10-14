/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239874 Order::~Order */

/* Order::~Order() */

Order * __thiscall Order::~Order(Order *this)

{
  String::~String((String *)(this + 8));
  String::~String((String *)this);
  return this;
}


