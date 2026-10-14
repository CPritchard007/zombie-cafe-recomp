/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002990b8 CapcomDebug::print */

/* CapcomDebug::print(String) */

void CapcomDebug::print(String *param_1)

{
  void *__ptr;
  
  __ptr = (void *)String::getBytes(param_1);
  free(__ptr);
  return;
}


