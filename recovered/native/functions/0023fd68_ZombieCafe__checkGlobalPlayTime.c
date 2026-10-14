/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fd68 ZombieCafe::checkGlobalPlayTime */

/* ZombieCafe::checkGlobalPlayTime(bool) */

bool ZombieCafe::checkGlobalPlayTime(bool param_1)

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
  uVar3 = *(undefined4 *)(uVar1 + 0x138);
  uVar4 = *(undefined4 *)(uVar1 + 0x13c);
  uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0023fdc0,DAT_0023fdc4);
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


