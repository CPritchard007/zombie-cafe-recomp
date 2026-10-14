/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a10ae String::indexOf */

/* String::indexOf(String) */

undefined8 __thiscall String::indexOf(String *this,String *param_2)

{
  undefined4 uVar1;
  String *pSStack_10;
  String *pSStack_c;
  
  pSStack_10 = this;
  pSStack_c = param_2;
  String((String *)&pSStack_10,param_2);
  uVar1 = indexOf(this,(String *)&pSStack_10,0);
  ~String((String *)&pSStack_10);
  return CONCAT44(pSStack_10,uVar1);
}


