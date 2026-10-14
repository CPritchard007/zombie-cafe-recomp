/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239e20 ZombieCafe::L_ConnectErrorHandler */

/* ZombieCafe::L_ConnectErrorHandler(void*, ccServerFailureCode) */

void ZombieCafe::L_ConnectErrorHandler
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (param_2 == 5) {
    pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x28);
    (*pcVar1)(*(int **)(param_1 + 8),1,param_3,pcVar1,param_4);
  }
  return;
}


