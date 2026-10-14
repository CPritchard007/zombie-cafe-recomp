/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025eb98 FUN_0025eb98 */

void FUN_0025eb98(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    param_1[2] = 2000;
    param_1[3] = 1;
    param_1[4] = 1;
  }
  else {
    iVar1 = __aeabi_ldivmod(DAT_0025ec68 + *param_1,
                            DAT_0025ec6c + param_1[1] + (uint)CARRY4(DAT_0025ec68,*param_1),
                            DAT_0025ec70,DAT_0025ec74,param_4);
    uVar5 = __floatsidf();
    uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025ec78,DAT_0025ec7c);
    __divdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025ec80,DAT_0025ec84);
    iVar2 = __fixdfsi();
    iVar2 = ((iVar1 + 1 + iVar2) - ((int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2)) +
            DAT_0025eca0;
    uVar5 = __floatsidf(iVar2);
    uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025ec88,DAT_0025ec8c);
    __divdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025ec90,DAT_0025ec94);
    iVar3 = __fixdfsi();
    iVar1 = __divsi3(iVar3 * DAT_0025eca4,100);
    iVar2 = iVar2 - iVar1;
    uVar5 = __floatsidf(iVar2);
    __divdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025ec98,DAT_0025ec9c);
    iVar4 = __fixdfsi();
    uVar5 = __floatsidf();
    __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025ec98,DAT_0025ec9c);
    iVar1 = __fixdfsi();
    param_1[4] = iVar2 - iVar1;
    iVar2 = DAT_0025eca8;
    iVar1 = -0xd;
    if (iVar4 < 0xe) {
      iVar1 = -1;
    }
    param_1[3] = iVar4 + iVar1;
    if (2 < iVar4 + iVar1) {
      iVar2 = DAT_0025ecac;
    }
    param_1[2] = iVar3 + iVar2;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}


