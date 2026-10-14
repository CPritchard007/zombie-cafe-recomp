/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a4b8 ZombieCafe::L_GotServerTimeForHoover */

/* ZombieCafe::L_GotServerTimeForHoover(void*, unsigned int) */

void ZombieCafe::L_GotServerTimeForHoover(void *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  char acStack_11c [256];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0023a568 + 0x23a4c4);
  local_1c = *piVar6;
  pcVar2 = (char *)(DAT_0023a570 + 0x23a4dc);
  pcVar4 = (char *)(DAT_0023a574 + 0x23a4de);
  snprintf(acStack_11c,0x100,(char *)(DAT_0023a56c + 0x23a4d2),param_2);
  L_PrintLog(pcVar2,pcVar4);
  L_PrintLog((char *)(DAT_0023a578 + 0x23a4f2),acStack_11c);
  L_PrintLog(pcVar2,pcVar4);
  iVar1 = CapcomApp::getInstance();
  *(undefined1 *)(iVar1 + 0x54) = 0;
  if (*(char *)((int)param_1 + DAT_0023a57c) != '\0') {
    L_PrintLog((char *)(DAT_0023a580 + 0x23a516),(char *)(DAT_0023a584 + 0x23a518));
    uVar3 = *(uint *)((int)param_1 + 0x840);
    uVar5 = *(uint *)((int)param_1 + 0x680);
    getToxin((ZombieCafe *)param_1);
    CRAMHoover::recordSessionStart(uVar3,param_2,uVar5);
  }
  iVar1 = DAT_0023a588;
  if (*(char *)((int)param_1 + DAT_0023a588) != '\0') {
    *(undefined4 *)((int)param_1 + 0x410) = 0xffffffff;
    *(undefined4 *)((int)param_1 + DAT_0023a58c) = 0xffffffff;
  }
  *(undefined1 *)((int)param_1 + DAT_0023a57c) = 0;
  *(undefined1 *)((int)param_1 + iVar1) = 0;
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


