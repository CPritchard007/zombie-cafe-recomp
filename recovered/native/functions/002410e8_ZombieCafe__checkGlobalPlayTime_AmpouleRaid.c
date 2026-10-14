/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002410e8 ZombieCafe::checkGlobalPlayTime_AmpouleRaid */

/* ZombieCafe::checkGlobalPlayTime_AmpouleRaid(bool) */

bool ZombieCafe::checkGlobalPlayTime_AmpouleRaid(bool param_1)

{
  uint uVar1;
  int iVar2;
  int in_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar1 = (uint)param_1;
  uVar6 = Platform::getAppTime();
  uVar3 = *(undefined4 *)(uVar1 + 0x318);
  uVar4 = *(undefined4 *)(uVar1 + 0x31c);
  uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_00241140,DAT_00241144);
  iVar2 = __aeabi_dcmplt(uVar3,uVar4,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  if (iVar2 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (in_r1 != 0) {
      uVar6 = __floatsidf(*(int *)(uVar1 + 0x880) + 300);
      iVar2 = __aeabi_dcmplt(uVar3,uVar4,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      bVar5 = iVar2 != 0;
    }
  }
  return bVar5;
}


