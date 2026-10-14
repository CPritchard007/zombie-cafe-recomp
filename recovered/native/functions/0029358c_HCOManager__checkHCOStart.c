/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029358c HCOManager::checkHCOStart */

/* HCOManager::checkHCOStart() */

void __thiscall HCOManager::checkHCOStart(HCOManager *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00293650 + 0x293598);
  local_1c = *piVar5;
  iVar1 = JSONGetGameInfo::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 != 0) {
    iVar6 = *(int *)this;
    iVar2 = JSONGetGameInfo::getInstance();
    iVar1 = 0;
    if (iVar6 != *(int *)(iVar2 + 4)) {
      iVar2 = JSONGetGameInfo::getInstance();
      iVar7 = *(int *)(iVar2 + 8);
      iVar6 = JSONGetGameInfo::getInstance();
      iVar2 = DAT_00293654;
      iVar6 = *(int *)(iVar6 + 0xc);
      Platform::getAppTime();
      iVar3 = __fixdfsi();
      iVar7 = iVar3 - iVar7;
      pcVar8 = (char *)(iVar2 + 0x2935e0);
      snprintf(acStack_11c,0x100,(char *)(DAT_00293658 + 0x2935da),iVar7);
      L_PrintLog(pcVar8,acStack_11c);
      iVar6 = iVar3 - iVar6;
      snprintf(acStack_11c,0x100,(char *)(DAT_0029365c + 0x293600),iVar6);
      L_PrintLog(pcVar8,acStack_11c);
      if ((0 < iVar7) && (iVar6 < 0)) {
        *(int *)(this + 4) = iVar3;
        L_PrintLog(pcVar8,(char *)(DAT_00293660 + 0x293624));
        *(undefined4 *)(this + 8) = 1;
        iVar1 = JSONGetGameInfo::getInstance();
        uVar4 = *(undefined4 *)(iVar1 + 4);
        this[0xc] = (HCOManager)0x0;
        *(undefined4 *)this = uVar4;
        save();
        iVar1 = 1;
      }
    }
  }
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}


