/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1590 String::operator+= */

/* String::TEMPNAMEPLACEHOLDERVALUE(String) */

undefined8 __thiscall String::operator+=(String *this,undefined4 *param_2)

{
  short sVar1;
  void *__s;
  StringRef *this_00;
  size_t __size;
  
  if (*(int *)this != 0) {
    sVar1 = *(short *)((int)param_2 + 6);
    __size = (int)*(short *)(this + 6) + (int)sVar1 + 1;
    __s = malloc(__size);
    memset(__s,0,__size);
    memcpy(__s,(void *)(**(int **)this + (int)*(short *)(this + 4)),(int)*(short *)(this + 6));
    memcpy((void *)((int)__s + (int)*(short *)(this + 6)),
           (void *)(*(int *)*param_2 + (int)*(short *)(param_2 + 1)),(int)sVar1 + 1);
    releaseRef(this);
    this_00 = (StringRef *)operator_new(8);
    StringRef::StringRef(this_00);
    *(StringRef **)this = this_00;
    *(void **)this_00 = __s;
    *(undefined2 *)(this + 4) = 0;
    *(short *)(this + 6) = *(short *)((int)param_2 + 6) + *(short *)(this + 6);
  }
  return CONCAT44(this,this);
}


