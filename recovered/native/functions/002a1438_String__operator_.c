/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1438 String::operator= */

/* String::TEMPNAMEPLACEHOLDERVALUE(char const*) */

String * __thiscall String::operator=(String *this,char *param_1)

{
  StringRef *this_00;
  size_t sVar1;
  void *pvVar2;
  
  releaseRef(this);
  this_00 = (StringRef *)operator_new(8);
  StringRef::StringRef(this_00);
  *(StringRef **)this = this_00;
  *(undefined2 *)(this + 4) = 0;
  sVar1 = strlen(param_1);
  *(short *)(this + 6) = (short)sVar1;
  pvVar2 = malloc((int)(short)sVar1 + 1);
  *(void **)this_00 = pvVar2;
  memset((void *)**(undefined4 **)this,0,(int)*(short *)(this + 6) + 1);
  memcpy((void *)**(undefined4 **)this,param_1,(int)*(short *)(this + 6));
  return this;
}


