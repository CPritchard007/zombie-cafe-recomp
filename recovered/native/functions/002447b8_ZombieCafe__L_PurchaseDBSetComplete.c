/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002447b8 ZombieCafe::L_PurchaseDBSetComplete */

/* ZombieCafe::L_PurchaseDBSetComplete() */

void __thiscall ZombieCafe::L_PurchaseDBSetComplete(ZombieCafe *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__s2;
  int *piVar6;
  char *pcVar7;
  char *__format;
  char *pcVar8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char acStack_9c [128];
  int local_1c;
  
  piVar6 = *(int **)(DAT_00244968 + 0x2447c4);
  pcVar7 = (char *)(DAT_0024496c + 0x2447ca);
  local_1c = *piVar6;
  L_PrintLog(pcVar7,(char *)(DAT_00244970 + 0x2447d0));
  iVar4 = DAT_00244980;
  if (*(int *)(this + DAT_00244974) < 0) {
    L_PrintLog(pcVar7,(char *)(DAT_00244978 + 0x2447ea));
  }
  else {
    uVar1 = sqlite3_open(DAT_0024497c + 0x2447f8,&local_a8);
    sprintf(acStack_9c,(char *)(DAT_00244984 + 0x244804),uVar1);
    L_PrintLog(pcVar7,acStack_9c);
    sqlite3_prepare(local_a8,DAT_00244988 + 0x24481a,0xffffffff,&local_a4,0);
    while (iVar5 = sqlite3_step(local_a4), iVar5 == 100) {
      L_PrintLog((char *)(iVar4 + 0x244826),(char *)(DAT_0024498c + 0x244830));
      local_a0 = 0;
      uVar1 = sqlite3_column_text(local_a4,0);
      pcVar7 = (char *)sqlite3_column_text(local_a4,1);
      uVar2 = sqlite3_column_text(local_a4,2);
      sprintf(acStack_9c,(char *)(DAT_00244990 + 0x24485a),uVar1,pcVar7,uVar2);
      L_PrintLog((char *)(iVar4 + 0x244826),acStack_9c);
      iVar5 = 0;
      local_b0 = (undefined4 *)(DAT_00244994 + 0x24488c);
      __format = (char *)(DAT_00244998 + 0x24487a);
      pcVar8 = (char *)(DAT_0024499c + 0x24487c);
      do {
        __s2 = (char *)*local_b0;
        local_b0 = local_b0 + 1;
        sprintf(acStack_9c,__format,__s2);
        L_PrintLog(pcVar8,acStack_9c);
        iVar3 = strcmp(pcVar7,__s2);
        if (iVar3 == 0) goto LAB_002448ae;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x14);
      iVar5 = -1;
LAB_002448ae:
      pcVar7 = (char *)(DAT_002449a4 + 0x2448c2);
      sprintf(acStack_9c,(char *)(DAT_002449a0 + 0x2448bc),iVar5,
              *(undefined4 *)(this + DAT_00244974));
      L_PrintLog(pcVar7,acStack_9c);
      if (iVar5 == *(int *)(this + DAT_00244974)) {
        sqlite3_prepare(local_a8,DAT_002449a8 + 0x2448e0,0xffffffff,&local_a0,0);
        sqlite3_bind_text(local_a0,1,uVar1,0xffffffff,0);
        iVar4 = sqlite3_step(local_a0);
        if (iVar4 == 0x65) {
          *(undefined4 *)(this + DAT_00244974) = 0xffffffff;
        }
        else {
          sprintf(acStack_9c,(char *)(DAT_002449ac + 0x244916),iVar5);
          L_PrintLog(pcVar7,acStack_9c);
        }
        sqlite3_finalize(local_a0);
        break;
      }
      sqlite3_finalize(local_a0);
    }
    sqlite3_finalize(local_a4);
    sqlite3_close(local_a8);
    L_PrintLog((char *)(DAT_002449b0 + 0x24494e),(char *)(DAT_002449b4 + 0x244950));
    GameStateCafe::PrintDBState();
  }
  if (local_1c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


