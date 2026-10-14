/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1660 String::operator+ */

/* String::TEMPNAMEPLACEHOLDERVALUE(String) */

String * __thiscall String::operator+(String *this,String *param_2,String *param_3)

{
  String *pSVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String(aSStack_20,param_2);
  String(aSStack_18,param_3);
  pSVar1 = (String *)operator+=(aSStack_20,aSStack_18);
  String(this,pSVar1);
  ~String(aSStack_18);
  ~String(aSStack_20);
  return this;
}


