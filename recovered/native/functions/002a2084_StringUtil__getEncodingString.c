/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2084 StringUtil::getEncodingString */

/* StringUtil::getEncodingString(unsigned char) */

StringUtil * __thiscall StringUtil::getEncodingString(StringUtil *this,uchar param_1)

{
  char *pcVar1;
  
  if (param_1 == '\x01') {
    pcVar1 = (char *)(DAT_002a20c0 + 0x2a20a8);
  }
  else if (param_1 == '\0') {
    pcVar1 = (char *)(DAT_002a20b8 + 0x2a209c);
  }
  else {
    if (param_1 != '\x02') {
      String::String((String *)this,0);
      return this;
    }
    pcVar1 = (char *)(DAT_002a20bc + 0x2a20a2);
  }
  String::String((String *)this,pcVar1);
  return this;
}


