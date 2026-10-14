/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a16aa operator+ */

/* TEMPNAMEPLACEHOLDERVALUE(char const*, String) */

String * operator+(String *param_1,char *param_2,String *param_3)

{
  String *pSVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String::String(aSStack_20,param_2);
  String::String(aSStack_18,param_3);
  pSVar1 = (String *)String::operator+=(aSStack_20,aSStack_18);
  String::String(param_1,pSVar1);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return param_1;
}


