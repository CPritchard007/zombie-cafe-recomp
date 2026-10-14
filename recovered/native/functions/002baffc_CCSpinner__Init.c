/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002baffc CCSpinner::Init */

/* CCSpinner::Init() */

void * CCSpinner::Init(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x4c);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0xffffffff;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x30) = 0;
    *(undefined4 *)((int)pvVar1 + 0x34) = 0;
    *(undefined4 *)((int)pvVar1 + 0x10) = DAT_002bb024;
    *(undefined4 *)((int)pvVar1 + 0x14) = DAT_002bb028;
    *(undefined4 *)((int)pvVar1 + 0x38) = DAT_002bb02c;
  }
  return pvVar1;
}


