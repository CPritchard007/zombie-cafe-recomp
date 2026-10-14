/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a6a0 FUN_0026a6a0 */

undefined4 FUN_0026a6a0(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((int)param_2 + 0x22);
  if ((int)((uint)bVar1 << 0x1b) < 0) {
    iVar2 = FUN_0025d364(*param_1);
    uVar3 = *(uint *)(**(int **)(iVar2 + 4) + 0x34);
    if (uVar3 != 0) goto LAB_0026a6c0;
  }
  else {
LAB_0026a6c0:
    if (((-1 < (int)((uint)bVar1 << 0x1f)) || (*(int *)(*param_1 + 0x18) << 0xf < 0)) ||
       (uVar3 = (uint)*(byte *)((int)param_1 + 0x12), uVar3 != 0)) {
      if (param_3 != 0) {
        return 0;
      }
      uVar3 = param_2[7];
      if (uVar3 == 0) {
        return 0;
      }
      iVar2 = DAT_0026a6f8 + 0x26a6ea;
      goto LAB_0026a6e8;
    }
  }
  iVar2 = DAT_0026a6f4 + 0x26a6d8;
LAB_0026a6e8:
  FUN_00268e48(param_1,iVar2,*param_2,uVar3,param_4);
  return 1;
}


