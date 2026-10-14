/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ac98 CapcomMath::interpolatePoints */

/* CapcomMath::interpolatePoints(long long, long long, int, int) */

void CapcomMath::interpolatePoints(longlong param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)(uint)param_1 >> 0x1f;
  if (param_1 < 0) {
    lVar5 = __muldi3((uint)param_1,iVar4,(uint)param_1,iVar4,param_3,param_4);
    lVar5 = (lVar5 >> 0x10) - (longlong)(int)(uint)param_1;
    __muldi3((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),param_1._4_4_,param_1._4_4_ >> 0x1f);
  }
  else if (param_1._4_4_ != 0) {
    iVar2 = 0x10000 - (uint)param_1;
    lVar5 = __muldi3(iVar2,iVar2 >> 0x1f,iVar2,iVar2 >> 0x1f,param_3,param_4);
    uVar3 = (uint)(lVar5 >> 0x10);
    uVar1 = DAT_0029ad48 - uVar3;
    __muldi3(uVar1 - (uint)param_1,
             (((DAT_0029ad4c - (int)((ulonglong)(lVar5 >> 0x10) >> 0x20)) -
              (uint)(DAT_0029ad48 < uVar3)) - iVar4) - (uint)(uVar1 < (uint)param_1),param_1._4_4_,
             param_1._4_4_ >> 0x1f);
  }
  return;
}


