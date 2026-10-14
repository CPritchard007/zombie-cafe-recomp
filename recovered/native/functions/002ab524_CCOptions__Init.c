/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab524 CCOptions::Init */

/* CCOptions::Init(char const*) */

void * CCOptions::Init(char *param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0xffffffff;
  }
  else {
    javaInitOptions(param_1);
  }
  return pvVar1;
}


