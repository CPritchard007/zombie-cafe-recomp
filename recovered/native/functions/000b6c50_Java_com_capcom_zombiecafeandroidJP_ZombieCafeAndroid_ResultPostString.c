/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6c50 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_ResultPostString */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_ResultPostString
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *__s1;
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  __s1 = (char *)FUN_000b5440(param_1,param_3,param_3,param_4,param_4);
  iVar1 = strncmp(__s1,(char *)(DAT_000b6cdc + 0xb6c62),7);
  puVar5 = *(undefined4 **)(DAT_000b6ce0 + 0xb6c6a);
  if (iVar1 == 0) {
    L_PrintLog((char *)(DAT_000b6ce4 + 0xb6c76),__s1);
    *puVar5 = 1;
  }
  else {
    iVar2 = strncmp(__s1,(char *)(DAT_000b6ce8 + 0xb6c88),0xb);
    iVar1 = DAT_000b6cec;
    if (iVar2 == 0) {
      *puVar5 = 2;
      pcVar3 = (char *)(iVar1 + 0xb6c98);
    }
    else {
      iVar2 = strncmp(__s1,(char *)(DAT_000b6cf0 + 0xb6ca2),8);
      iVar1 = DAT_000b6cf4;
      if (iVar2 == 0) {
        *puVar5 = 3;
        pcVar3 = (char *)(iVar1 + 0xb6cb2);
      }
      else {
        iVar4 = strncmp(__s1,(char *)(DAT_000b6cf8 + 0xb6cbc),0xd);
        iVar2 = DAT_000b6d00;
        iVar1 = DAT_000b6cfc;
        if (iVar4 == 0) {
          *puVar5 = 4;
          pcVar3 = (char *)(iVar1 + 0xb6ccc);
        }
        else {
          *puVar5 = 5;
          pcVar3 = (char *)(iVar2 + 0xb6cd6);
        }
      }
    }
    L_PrintLog(pcVar3,__s1);
  }
  return;
}


