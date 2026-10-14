/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abfbc FUN_002abfbc */

char * FUN_002abfbc(char *param_1,size_t param_2,char *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  size_t sVar4;
  uint *__arg;
  uint uStack_4;
  
  iVar2 = DAT_002ac05c;
  uVar3 = param_4;
  uStack_4 = param_4;
  if (-1 < (int)param_2) {
    uVar3 = (uint)(param_1 == (char *)0x0);
    if (uVar3 == 0) {
      *(bool *)(DAT_002ac05c + 0x2abff6) = param_1 == (char *)0x0;
      __s = (char *)(iVar2 + 0x2abff6);
      __arg = &uStack_4;
      sVar4 = param_2;
      vsnprintf(__s,0x400,param_3,__arg);
      uVar1 = FUN_002abf6c();
      __android_log_print(3,DAT_002ac060 + 0x2ac00a,DAT_002ac064 + 0x2ac00c,uVar1,__s,sVar4,param_3,
                          __arg);
      if ((*param_1 == '/') || (iVar2 = FUN_002abf6c(), iVar2 == 0)) {
        snprintf(param_1,param_2,(char *)(DAT_002ac070 + 0x2ac04c),DAT_002ac06c + 0x2ac052);
      }
      else {
        uVar1 = FUN_002abf6c();
        snprintf(param_1,param_2,(char *)(DAT_002ac068 + 0x2ac02e),uVar1,__s);
      }
      return param_1;
    }
  }
  __android_log_print(4,DAT_002ac054 + 0x2abfd8,DAT_002ac058 + 0x2abfda,uVar3,param_1,param_2,
                      param_3,param_4);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


