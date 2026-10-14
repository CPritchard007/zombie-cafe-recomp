/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265d96 sqlite3_aggregate_context */

undefined4
sqlite3_aggregate_context(undefined4 *param_1,size_t param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint __c;
  
  iVar1 = param_1[0xc];
  __c = *(ushort *)(iVar1 + 0x1c) & 0x2000;
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    if ((int)param_2 < 1) {
      FUN_002636e8();
      *(undefined2 *)(iVar1 + 0x1c) = 1;
      *(uint *)(iVar1 + 4) = __c;
    }
    else {
      FUN_0026526c(iVar1,param_2,__c,0x2000,param_4);
      *(undefined2 *)(iVar1 + 0x1c) = 0x2000;
      *(undefined4 *)(iVar1 + 0x10) = *param_1;
      if (*(void **)(iVar1 + 4) != (void *)0x0) {
        memset(*(void **)(iVar1 + 4),__c,param_2);
      }
    }
  }
  return *(undefined4 *)(iVar1 + 4);
}


