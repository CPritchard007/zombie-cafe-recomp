/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f238 ZombieCafe::checkHeroPresentDayRecovery */

/* ZombieCafe::checkHeroPresentDayRecovery() */

undefined8 ZombieCafe::checkHeroPresentDayRecovery(void)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  void *__dest;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = in_r0;
  local_c = in_r1;
  CapcomDate::today((CapcomDate *)&local_10);
  iVar1 = CapcomApp::getInstance();
  __dest = (void *)(*(int *)(iVar1 + 4) + DAT_0023f26c);
  iVar1 = CapcomDate::daysBetween
                    (*(undefined4 *)(*(int *)(iVar1 + 4) + DAT_0023f26c),
                     *(undefined4 *)((int)__dest + 4),local_10,local_c);
  if (0 < iVar1) {
    memcpy(__dest,(CapcomDate *)&local_10,7);
  }
  return CONCAT44(local_10,(uint)(0 < iVar1));
}


