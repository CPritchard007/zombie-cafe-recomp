/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0e0e String::~String */

/* String::~String() */

String * __thiscall String::~String(String *this)

{
  releaseRef(this);
  return this;
}


