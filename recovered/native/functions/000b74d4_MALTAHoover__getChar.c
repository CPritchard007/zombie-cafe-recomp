/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b74d4 MALTAHoover::getChar */

/* MALTAHoover::getChar(String) const */

int MALTAHoover::getChar(undefined4 param_1,String *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  String *pSVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(short *)(param_2 + 6) == 0) {
    iVar1 = DAT_000b7514 + 0xb7506;
  }
  else {
    pSVar2 = param_2;
    uStack_10 = param_3;
    uStack_c = param_4;
    StringUtil::getEncodingString((StringUtil *)&uStack_10,'\x01');
    iVar1 = String::getBytes(param_2,&uStack_10,0,0,0,pSVar2);
    String::~String((String *)&uStack_10);
  }
  return iVar1;
}


