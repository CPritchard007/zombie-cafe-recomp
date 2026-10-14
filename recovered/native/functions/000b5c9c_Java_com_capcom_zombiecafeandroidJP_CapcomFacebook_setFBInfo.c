/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5c9c Java_com_capcom_zombiecafeandroidJP_CapcomFacebook_setFBInfo */

void Java_com_capcom_zombiecafeandroidJP_CapcomFacebook_setFBInfo
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ZombieCafe *this;
  char *pcVar5;
  
  this = *(ZombieCafe **)(*(int *)(DAT_000b5d00 + 0xb5cb2) + 4);
  pcVar1 = (char *)FUN_000b5440(param_1,param_3);
  pcVar2 = (char *)FUN_000b5440(param_1,param_4);
  pcVar3 = (char *)FUN_000b5440(param_1,param_5);
  pcVar4 = (char *)FUN_000b5440(param_1,param_6);
  pcVar5 = (char *)(DAT_000b5d04 + 0xb5cdc);
  L_PrintLog(pcVar5,(char *)(DAT_000b5d08 + 0xb5ce0));
  ZombieCafe::SetFBInfo(this,pcVar1,pcVar2,pcVar3,pcVar4);
  L_PrintLog(pcVar5,(char *)(DAT_000b5d0c + 0xb5cf8));
  return;
}


