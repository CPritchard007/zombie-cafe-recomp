/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1618 String::operator+ */

/* String::TEMPNAMEPLACEHOLDERVALUE(char const*) */

undefined8 __thiscall String::operator+(String *this,char *param_1)

{
  String *pSVar1;
  char *in_r2;
  String *pSStack_18;
  char *pcStack_14;
  
  pSStack_18 = this;
  pcStack_14 = param_1;
  String((String *)&pSStack_18,(String *)param_1);
  pSVar1 = (String *)operator+=((String *)&pSStack_18,in_r2);
  String(this,pSVar1);
  ~String((String *)&pSStack_18);
  return CONCAT44(pSStack_18,this);
}


