/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ab40 CapcomMath::interpolate */

/* CapcomMath::interpolate(int, int, int, int) */

int CapcomMath::interpolate(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar3 = param_3 >> 0x1f;
  if (param_4 < 0) {
    lVar4 = __muldi3(param_3,iVar3,param_3,iVar3);
    uVar1 = (uint)(lVar4 >> 0x10);
    uVar5 = __muldi3(uVar1 - param_3,
                     ((int)((ulonglong)(lVar4 >> 0x10) >> 0x20) - iVar3) -
                     (uint)(uVar1 < (uint)param_3),param_4,param_4 >> 0x1f);
    param_3 = param_3 - ((uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10);
  }
  else if (param_4 != 0) {
    lVar4 = __muldi3(0x10000 - param_3,0x10000 - param_3 >> 0x1f);
    uVar2 = (uint)(lVar4 >> 0x10);
    uVar1 = DAT_0029abd0 - uVar2;
    uVar5 = __muldi3(uVar1 - param_3,
                     (((DAT_0029abd4 - (int)((ulonglong)(lVar4 >> 0x10) >> 0x20)) -
                      (uint)(DAT_0029abd0 < uVar2)) - iVar3) - (uint)(uVar1 < (uint)param_3),param_4
                     ,param_4 >> 0x1f);
    param_3 = param_3 + ((uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10);
  }
  return param_1 + (param_3 * (param_2 - param_1) >> 0x10);
}


