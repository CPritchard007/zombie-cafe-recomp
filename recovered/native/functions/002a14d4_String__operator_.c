/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a14d4 String::operator= */

/* String::TEMPNAMEPLACEHOLDERVALUE(int) */

String * __thiscall String::operator=(String *this,int param_1)

{
  releaseRef(this);
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 6) = 0;
  return this;
}


