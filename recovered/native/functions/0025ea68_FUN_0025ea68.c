/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ea68 FUN_0025ea68 */

void FUN_0025ea68(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)((int)param_1 + 0x2a) != '\0') {
    return;
  }
  if ((char)param_1[5] == '\0') {
    iVar4 = 1;
    iVar2 = 2000;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0xc);
    iVar2 = (int)param_1[1];
    iVar4 = (int)param_1[2];
    if (2 < iVar3) goto LAB_0025ea9a;
  }
  iVar2 = iVar2 + -1;
  iVar3 = iVar3 + 0xc;
LAB_0025ea9a:
  iVar1 = __divsi3(iVar2,100);
  iVar2 = __divsi3(DAT_0025eb80 * iVar2 + DAT_0025eb84,100);
  iVar3 = __divsi3((iVar3 + 1) * DAT_0025eb88,DAT_0025eb8c);
  uVar5 = __floatsidf(iVar2 + iVar3 + iVar4 +
                      (2 - iVar1) + ((int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2));
  uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025eb68,DAT_0025eb6c);
  __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025eb70,DAT_0025eb74);
  lVar6 = __fixdfdi();
  *param_1 = lVar6;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  if (*(char *)((int)param_1 + 0x29) != '\0') {
    iVar3 = DAT_0025eb90 * *(int *)((int)param_1 + 0x14);
    iVar2 = DAT_0025eb94 * (int)param_1[3];
    __muldf3((int)param_1[4],*(undefined4 *)((int)param_1 + 0x24),DAT_0025eb78,DAT_0025eb7c);
    lVar7 = __fixdfdi();
    lVar6 = lVar6 + lVar7 + (iVar3 + iVar2);
    *param_1 = lVar6;
    if (*(char *)((int)param_1 + 0x2b) != '\0') {
      *param_1 = lVar6 - DAT_0025eb94 * *(int *)((int)param_1 + 0x1c);
      *(undefined1 *)(param_1 + 5) = 0;
      *(char *)((int)param_1 + 0x29) = '\0';
      *(undefined1 *)((int)param_1 + 0x2b) = 0;
    }
  }
  return;
}


