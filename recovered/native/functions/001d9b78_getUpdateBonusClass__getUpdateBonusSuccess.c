/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d9b78 getUpdateBonusClass::getUpdateBonusSuccess */

/* getUpdateBonusClass::getUpdateBonusSuccess(void*, unsigned char const*, unsigned int) */

undefined8 getUpdateBonusClass::getUpdateBonusSuccess(void *param_1,uchar *param_2,uint param_3)

{
  getUpdateBonusClass *this;
  void *pvStack_18;
  uchar *puStack_14;
  
  pvStack_18 = param_1;
  puStack_14 = param_2;
  this = (getUpdateBonusClass *)getInstance();
  if (((this != (getUpdateBonusClass *)0x0) && (param_2 != (uchar *)0x0)) && (param_3 != 0)) {
    StringUtil::stringFromUtf8((StringUtil *)&pvStack_18,param_2,param_3);
    String::operator=((String *)(this + 0x14),(StringUtil *)&pvStack_18);
    String::~String((String *)&pvStack_18);
    set_UpdateBonusFlag(this);
  }
  return CONCAT44(puStack_14,pvStack_18);
}


