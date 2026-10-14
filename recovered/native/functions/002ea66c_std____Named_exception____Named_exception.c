/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea66c std::__Named_exception::__Named_exception */

/* std::__Named_exception::__Named_exception(std::string const&) */

__Named_exception * __thiscall
std::__Named_exception::__Named_exception(__Named_exception *this,string *param_1)

{
  size_t __n;
  __Named_exception *__dest;
  size_t __size;
  char *__s;
  
  FUN_002e9700();
  __s = *(char **)(param_1 + 0x14);
  *(int *)this = *(int *)(DAT_002ea6e8 + 0x2ea682) + 8;
  __n = strlen(__s);
  __size = __n + 1;
  if (__size < 0x101) {
    __dest = this + 4;
    *(__Named_exception **)(this + 0x104) = __dest;
  }
  else {
    __dest = (__Named_exception *)malloc(__size);
    *(__Named_exception **)(this + 0x104) = __dest;
    if (__dest == (__Named_exception *)0x0) {
      __dest = this + 4;
      *(__Named_exception **)(this + 0x104) = __dest;
      __n = 0xff;
      __s = *(char **)(param_1 + 0x14);
    }
    else {
      *(size_t *)(this + 4) = __size;
      __s = *(char **)(param_1 + 0x14);
    }
  }
  strncpy((char *)__dest,__s,__n);
  *(undefined1 *)(*(int *)(this + 0x104) + __n) = 0;
  return this;
}


