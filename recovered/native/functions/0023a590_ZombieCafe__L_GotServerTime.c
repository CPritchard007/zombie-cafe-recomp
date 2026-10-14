/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a590 ZombieCafe::L_GotServerTime */

/* ZombieCafe::L_GotServerTime(void*, unsigned int) */

void ZombieCafe::L_GotServerTime(void *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *__src;
  char *__format;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0023a7c0;
  iVar7 = DAT_0023a7b0 + 0x23a59e;
  piVar3 = *(int **)(iVar7 + DAT_0023a7b4);
  local_1c = *piVar3;
  __format = (char *)(DAT_0023a7b8 + 0x23a5b2);
  pcVar5 = (char *)(DAT_0023a7bc + 0x23a5b4);
  *(undefined1 *)((int)param_1 + DAT_0023a7c4) = 0;
  snprintf(acStack_11c,0x100,__format,param_2);
  L_PrintLog(pcVar5,(char *)(iVar1 + 0x23a5c0));
  L_PrintLog((char *)(DAT_0023a7c8 + 0x23a5d4),acStack_11c);
  L_PrintLog(pcVar5,(char *)(iVar1 + 0x23a5c0));
  iVar1 = CCSecondsSince1970();
  uVar4 = (int)(param_2 - iVar1) >> 0x1f;
  uVar4 = (param_2 - iVar1) + uVar4 ^ uVar4;
  iVar1 = (uint)(uVar4 <= DAT_0023a7cc) - ((int)uVar4 >> 0x1f);
  *(char *)((int)param_1 + DAT_0023a7d0) = (char)iVar1;
  if (iVar1 == 0) {
    L_PrintLog((char *)(DAT_0023a7d4 + 0x23a60c),(char *)(DAT_0023a7d8 + 0x23a60e));
    *(undefined1 *)((int)param_1 + 0xba0) = 1;
  }
  else {
    L_PrintLog((char *)(DAT_0023a7dc + 0x23a61e),(char *)(DAT_0023a7e0 + 0x23a620));
    iVar1 = DAT_0023a7e4;
    *(undefined1 *)((int)param_1 + 0xba0) = 0;
    *(uint *)((int)param_1 + iVar1) = param_2;
    Platform::getAppTime();
    uVar2 = __fixdfsi();
    snprintf(acStack_11c,0x100,(char *)(DAT_0023a7e8 + 0x23a63e),uVar2);
    L_PrintLog((char *)(DAT_0023a7ec + 0x23a64e),acStack_11c);
    iVar1 = CapcomApp::getInstance();
    if (*(char *)(iVar1 + 0x54) != '\0') {
      L_GotServerTimeForHoover(param_1,param_2);
      iVar1 = CapcomApp::getInstance();
      *(undefined1 *)(iVar1 + 0x54) = 0;
    }
  }
  L_PrintLog((char *)(DAT_0023a7f0 + 0x23a678),(char *)(DAT_0023a7f4 + 0x23a67a));
  if (*(char *)((int)param_1 + 0x950) == '\0') goto LAB_0023a796;
  CapcomDate::from1970Offset((CapcomDate *)&local_134,param_2);
  if ((*(int *)((int)param_1 + 0x944) < 1) &&
     ((*(int *)((int)param_1 + 0x944) != 0 || (*(int *)((int)param_1 + 0x940) == 0)))) {
    iVar1 = CapcomDate::compare(*(undefined4 *)((int)param_1 + DAT_0023a7f8),
                                *(undefined4 *)((int)param_1 + DAT_0023a7f8 + 4),local_134,local_130
                               );
    if (iVar1 < 1) {
      iVar1 = DAT_0023a80c * (uint)**(byte **)(iVar7 + DAT_0023a808);
      *(int *)((int)param_1 + 0x940) = iVar1;
      *(int *)((int)param_1 + 0x944) = iVar1 >> 0x1f;
      *(undefined1 *)((int)param_1 + 0x950) = 0;
    }
    goto LAB_0023a796;
  }
  pvVar6 = (void *)((int)param_1 + DAT_0023a7f8);
  iVar1 = CapcomDate::compare(*(undefined4 *)((int)param_1 + DAT_0023a7f8),
                              *(undefined4 *)((int)pvVar6 + 4),local_134,local_130);
  if (iVar1 < 1) {
    memcpy(pvVar6,&local_134,7);
  }
  pvVar6 = (void *)((int)param_1 + DAT_0023a7f8);
  __aeabi_ldivmod(*(undefined4 *)((int)param_1 + 0x940),*(undefined4 *)((int)param_1 + 0x944),
                  DAT_0023a7a8,DAT_0023a7ac);
  uVar2 = __floatdisf();
  __mulsf3(uVar2,**(undefined4 **)(iVar7 + DAT_0023a7fc));
  __fixsfsi();
  CapcomDate::addSeconds((int)pvVar6);
  local_12c = local_134;
  local_128 = local_130;
  CapcomDate::addSeconds((int)&local_12c);
  local_124 = local_134;
  local_120 = local_130;
  CapcomDate::addSeconds((int)&local_124);
  iVar1 = CapcomDate::compare(*(undefined4 *)((int)param_1 + DAT_0023a7f8),
                              *(undefined4 *)((int)pvVar6 + 4),local_12c,local_128);
  if (iVar1 < 0) {
    __src = &local_12c;
LAB_0023a752:
    memcpy(pvVar6,__src,7);
  }
  else {
    iVar1 = CapcomDate::compare(*(undefined4 *)((int)param_1 + DAT_0023a7f8),
                                *(undefined4 *)((int)pvVar6 + 4),local_124,local_120);
    if (0 < iVar1) {
      __src = &local_124;
      goto LAB_0023a752;
    }
  }
  *(undefined4 *)((int)param_1 + 0x940) = 0;
  *(undefined4 *)((int)param_1 + 0x944) = 0;
LAB_0023a796:
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


