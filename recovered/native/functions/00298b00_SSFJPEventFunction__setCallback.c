/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298b00 SSFJPEventFunction::setCallback */

/* SSFJPEventFunction::setCallback(void (*)(void*), void*) */

void __thiscall
SSFJPEventFunction::setCallback(SSFJPEventFunction *this,_func_void_void_ptr *param_1,void *param_2)

{
  *(_func_void_void_ptr **)(this + 4) = param_1;
  *(void **)(this + 8) = param_2;
  return;
}


