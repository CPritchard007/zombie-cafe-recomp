/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eaa0c std::__stl_throw_overflow_error */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__stl_throw_overflow_error(char const*) */

void std::__stl_throw_overflow_error(char *param_1)

{
  __Named_exception *this;
  string asStack_28 [28];
  
  this = (__Named_exception *)FUN_002e9164(0x108);
  FUN_002ea7ec(asStack_28,param_1);
  __Named_exception::__Named_exception(this,asStack_28);
  *(int *)this = *(int *)(DAT_002eaa60 + 0x2eaa34) + 8;
  FUN_00245344(asStack_28);
  FUN_002e91e0(this,*(undefined4 *)(DAT_002eaa64 + 0x2eaa44),
               *(undefined4 *)(DAT_002eaa68 + 0x2eaa46));
  do {
    FUN_002e9198(this);
    __cxa_end_cleanup();
    FUN_00245344(asStack_28);
  } while( true );
}


