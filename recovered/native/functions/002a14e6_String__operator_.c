/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a14e6 String::operator= */

/* String::TEMPNAMEPLACEHOLDERVALUE(long) */

String * __thiscall String::operator=(String *this,long param_1)

{
  releaseRef(this);
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 6) = 0;
  return this;
}


