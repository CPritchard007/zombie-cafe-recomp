/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea6ec std::__Named_exception::__Named_exception */

/* std::__Named_exception::__Named_exception(std::__Named_exception const&) */

__Named_exception * __thiscall
std::__Named_exception::__Named_exception(__Named_exception *this,__Named_exception *param_1)

{
  size_t __n;
  __Named_exception *__dest;
  size_t __size;
  
  FUN_002e9700();
  *(int *)this = *(int *)(DAT_002ea760 + 0x2ea702) + 8;
  __n = strlen(*(char **)(param_1 + 0x104));
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
    }
    else {
      *(size_t *)(this + 4) = __size;
    }
  }
  strncpy((char *)__dest,*(char **)(param_1 + 0x104),__n);
  *(undefined1 *)(*(int *)(this + 0x104) + __n) = 0;
  return this;
}


