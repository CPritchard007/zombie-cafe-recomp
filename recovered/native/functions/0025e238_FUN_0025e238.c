/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e238 FUN_0025e238 */

void FUN_0025e238(int param_1,void *param_2,int param_3,int *param_4,int *param_5,void *param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_4;
  iVar2 = *param_5;
  iVar3 = 0;
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (iVar4 < param_3) {
      if ((iVar5 < iVar2) &&
         (*(uint *)((uint)*(ushort *)(iVar5 * 2 + iVar6) * 4 + param_1) <=
          *(uint *)((uint)*(ushort *)(iVar4 * 2 + (int)param_2) * 4 + param_1))) goto LAB_0025e278;
      uVar1 = *(ushort *)(iVar4 * 2 + (int)param_2);
      iVar4 = iVar4 + 1;
    }
    else {
      if (iVar2 <= iVar5) {
        *param_4 = (int)param_2;
        *param_5 = iVar3;
        memcpy(param_2,param_6,iVar3 << 1);
        return;
      }
LAB_0025e278:
      iVar7 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      uVar1 = *(ushort *)(iVar7 + iVar6);
    }
    iVar7 = *(int *)((uint)uVar1 * 4 + param_1);
    *(ushort *)((int)param_6 + iVar3 * 2) = uVar1;
    iVar3 = iVar3 + 1;
    if (iVar4 < param_3) {
      iVar4 = iVar4 + (uint)(*(int *)((uint)*(ushort *)(iVar4 * 2 + (int)param_2) * 4 + param_1) ==
                            iVar7);
    }
  } while( true );
}


