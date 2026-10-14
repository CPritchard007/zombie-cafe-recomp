/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a174c StringBuffer::StringBuffer */

/* StringBuffer::StringBuffer() */

StringBuffer * __thiscall StringBuffer::StringBuffer(StringBuffer *this)

{
  String::String((String *)this);
  *(undefined4 *)(this + 8) = 0;
  *(StringBuffer **)(this + 0xc) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}


