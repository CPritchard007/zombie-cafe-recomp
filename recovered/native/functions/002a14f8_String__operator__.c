/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a14f8 String::operator+= */

/* String::TEMPNAMEPLACEHOLDERVALUE(char const*) */

undefined8 __thiscall String::operator+=(String *this,char *param_1)

{
  size_t __n;
  void *__s;
  StringRef *this_00;
  size_t __size;
  
  if (*(int *)this != 0) {
    __n = strlen(param_1);
    __size = (int)*(short *)(this + 6) + __n + 1;
    __s = malloc(__size);
    memset(__s,0,__size);
    memcpy(__s,(void *)(**(int **)this + (int)*(short *)(this + 4)),(int)*(short *)(this + 6));
    releaseRef(this);
    this_00 = (StringRef *)operator_new(8);
    StringRef::StringRef(this_00);
    *(StringRef **)this = this_00;
    *(void **)this_00 = __s;
    memcpy((void *)(**(int **)this + (int)*(short *)(this + 6)),param_1,__n);
    *(undefined2 *)(this + 4) = 0;
    *(short *)(this + 6) = (short)__n + *(short *)(this + 6);
  }
  return CONCAT44(this,this);
}


