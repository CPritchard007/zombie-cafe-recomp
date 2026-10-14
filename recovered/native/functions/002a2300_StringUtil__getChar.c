/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2300 StringUtil::getChar */

/* StringUtil::getChar(String) */

undefined1 * StringUtil::getChar(String *param_1)

{
  undefined1 *puVar1;
  StringUtil aSStack_18 [12];
  
  if (*(short *)(param_1 + 6) == 0) {
    puVar1 = (undefined1 *)malloc(1);
    *puVar1 = 0;
  }
  else {
    getEncodingString(aSStack_18,'\x01');
    puVar1 = (undefined1 *)String::getBytes(param_1,aSStack_18,0,0,0);
    String::~String((String *)aSStack_18);
  }
  return puVar1;
}


