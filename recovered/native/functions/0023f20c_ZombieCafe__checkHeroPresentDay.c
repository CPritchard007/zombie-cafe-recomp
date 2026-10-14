/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f20c ZombieCafe::checkHeroPresentDay */

/* ZombieCafe::checkHeroPresentDay() */

undefined8 ZombieCafe::checkHeroPresentDay(void)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = in_r0;
  local_c = in_r1;
  CapcomDate::today((CapcomDate *)&local_10);
  iVar1 = CapcomApp::getInstance();
  iVar1 = CapcomDate::daysBetween
                    (*(undefined4 *)(*(int *)(iVar1 + 4) + DAT_0023f234),
                     *(undefined4 *)(*(int *)(iVar1 + 4) + DAT_0023f234 + 4),local_10,local_c);
  return CONCAT44(local_10,(uint)((iVar1 >> 0x1f) - iVar1) >> 0x1f);
}


