/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b516c <EXTERNAL>::setjmp */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setjmp_004e0f5c)();
  return iVar1;
}


