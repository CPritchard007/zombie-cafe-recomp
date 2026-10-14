/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6878 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetEntryParse */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetEntryParse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               undefined4 param_6)

{
  ZombieCafe *this;
  int *piVar1;
  char acStack_11c [256];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000b68d8 + 0xb6884);
  local_1c = *piVar1;
  this = *(ZombieCafe **)(*(int *)(DAT_000b68dc + 0xb689c) + 4);
  **(undefined4 **)(DAT_000b68e0 + 0xb689c) = param_3;
  **(undefined4 **)(DAT_000b68e4 + 0xb68a4) = param_6;
  ZombieCafe::setUserRank(this,param_4,param_5);
  sprintf(acStack_11c,(char *)(DAT_000b68e8 + 0xb68b6),param_3,param_5,param_6);
  L_PrintLog((char *)(DAT_000b68ec + 0xb68c4),acStack_11c);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


