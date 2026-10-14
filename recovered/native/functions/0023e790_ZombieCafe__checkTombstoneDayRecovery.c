/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e790 ZombieCafe::checkTombstoneDayRecovery */

/* ZombieCafe::checkTombstoneDayRecovery() */

undefined8 ZombieCafe::checkTombstoneDayRecovery(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r0;
  int iVar5;
  undefined4 in_r1;
  void *__dest;
  int iVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = in_r0;
  local_1c = in_r1;
  CapcomDate::today((CapcomDate *)&local_20);
  iVar5 = CapcomApp::getInstance();
  iVar6 = *(int *)(iVar5 + 4);
  __dest = (void *)(iVar6 + DAT_0023e844);
  iVar7 = DAT_0023e848 + 0x23e7b0;
  iVar5 = CapcomDate::daysBetween
                    (*(undefined4 *)(iVar6 + DAT_0023e844),*(undefined4 *)((int)__dest + 4),local_20
                     ,local_1c);
  if (0 < iVar5) {
    memcpy(__dest,(CapcomDate *)&local_20,7);
    iVar1 = DAT_0023e850;
    iVar5 = DAT_0023e84c;
    *(undefined4 *)(iVar6 + DAT_0023e850) = 0;
    iVar2 = DAT_0023e854;
    *(undefined4 *)(iVar6 + iVar5) = 0;
    iVar4 = DAT_0023e85c;
    iVar3 = DAT_0023e858;
    *(undefined4 *)(iVar6 + iVar2) = 0;
    *(undefined4 *)(iVar6 + 0x9d0) = 0;
    *(undefined4 *)(iVar6 + iVar3) = 0;
    *(undefined4 *)(iVar6 + iVar4) = 0;
    if (*(char *)(iVar6 + DAT_0023e860) != '\0') {
      *(undefined4 *)(iVar6 + iVar1) = **(undefined4 **)(iVar7 + DAT_0023e864);
    }
    if (*(char *)(iVar6 + DAT_0023e868) != '\0') {
      *(undefined4 *)(iVar6 + iVar2) = **(undefined4 **)(iVar7 + DAT_0023e86c);
    }
    if (*(char *)(iVar6 + DAT_0023e870) != '\0') {
      *(undefined4 *)(iVar6 + iVar5) = **(undefined4 **)(iVar7 + DAT_0023e864);
    }
    if (*(char *)(iVar6 + DAT_0023e874) != '\0') {
      *(undefined4 *)(iVar6 + 0x9d0) = **(undefined4 **)(iVar7 + DAT_0023e86c);
    }
    if (*(char *)(iVar6 + 0x9f0) != '\0') {
      *(undefined4 *)(iVar6 + iVar3) = **(undefined4 **)(iVar7 + DAT_0023e878);
    }
    if (*(char *)(iVar6 + DAT_0023e87c) != '\0') {
      *(undefined4 *)(iVar6 + iVar4) = **(undefined4 **)(iVar7 + DAT_0023e878);
    }
  }
  return CONCAT44(local_1c,local_20);
}


