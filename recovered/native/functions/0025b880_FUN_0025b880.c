/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b880 FUN_0025b880 */

undefined8 FUN_0025b880(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (*param_1 == '-') {
    param_1 = param_1 + 1;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    param_1 = param_1 + (*param_1 == '+');
  }
  for (; *param_1 == '0'; param_1 = param_1 + 1) {
  }
  iVar4 = 0;
  lVar7 = 0;
  while( true ) {
    uVar3 = (uint)((ulonglong)lVar7 >> 0x20);
    uVar1 = (uint)lVar7;
    iVar5 = (byte)param_1[iVar4] - 0x30;
    if ((iVar5 < 0) || (9 < iVar5)) break;
    lVar7 = __muldi3(uVar1,uVar3,10,0);
    iVar4 = iVar4 + 1;
    lVar7 = lVar7 + iVar5;
    uVar3 = (uint)((ulonglong)lVar7 >> 0x20);
    if (iVar4 == 0xb) {
LAB_0025b8f0:
      uVar2 = 0;
LAB_0025b8f2:
      return CONCAT44(uVar3,uVar2);
    }
  }
  if (((int)(uVar3 - (uVar1 < uVar6)) < 1) &&
     ((uVar3 != uVar1 < uVar6 || (-1 < (int)(uVar1 - uVar6))))) {
    if (uVar6 != 0) {
      lVar7 = CONCAT44(-(uint)(uVar1 != 0) - uVar3,-uVar1);
    }
    uVar3 = (uint)((ulonglong)lVar7 >> 0x20);
    *param_2 = (int)lVar7;
    uVar2 = 1;
    goto LAB_0025b8f2;
  }
  goto LAB_0025b8f0;
}


