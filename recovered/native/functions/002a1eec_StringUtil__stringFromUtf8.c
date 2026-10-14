/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1eec StringUtil::stringFromUtf8 */

/* StringUtil::stringFromUtf8(unsigned char const*, int) */

undefined8 __thiscall StringUtil::stringFromUtf8(StringUtil *this,uchar *param_1,int param_2)

{
  uchar *__dest;
  StringUtil *pSStack_20;
  uchar *puStack_1c;
  int iStack_18;
  
  *(size_t *)(DAT_002a1f48 + 0x2a1ef8) = param_2 + 1U;
  pSStack_20 = this;
  puStack_1c = param_1;
  iStack_18 = param_2;
  if (param_2 < 0) {
    String::String((String *)this,0);
  }
  else {
    __dest = (uchar *)malloc(param_2 + 1U);
    memcpy(__dest,param_1,param_2);
    __dest[param_2] = '\0';
    stringFromUtf8((StringUtil *)&pSStack_20,__dest);
    free(__dest);
    String::String((String *)this,(String *)&pSStack_20);
    String::~String((String *)&pSStack_20);
  }
  return CONCAT44(pSStack_20,this);
}


