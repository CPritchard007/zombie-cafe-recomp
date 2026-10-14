/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c1b8 FUN_0027c1b8 */

int FUN_0027c1b8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_20;
  
  if (*(int *)param_1[0xf] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    if (iVar1 != 0) goto LAB_0027c280;
  }
  iVar1 = 0;
  if ((uint)param_1[9] < (uint)param_1[6]) {
    local_20 = __muldi3(param_1[0x20],param_1[0x20] >> 0x1f,param_1[6],0);
    (**(code **)(*(int *)param_1[0xf] + 0x28))((int *)param_1[0xf],5,&local_20);
    param_1[9] = param_1[6];
  }
LAB_0027c280:
  while ((param_2 != 0 && (iVar1 == 0))) {
    uVar3 = *(uint *)(param_2 + 0x14);
    iVar1 = 0;
    if ((uVar3 <= (uint)param_1[6]) && ((*(ushort *)(param_2 + 0x18) & 0x20) == 0)) {
      uVar4 = __muldi3(uVar3 - 1,0,param_1[0x20],param_1[0x20] >> 0x1f);
      if (uVar3 == 1) {
        FUN_0025bf90(param_2);
      }
      iVar2 = *(int *)(param_2 + 4);
      iVar1 = FUN_0025ace6(param_1[0xf],iVar2,param_1[0x20],(int)((ulonglong)uVar4 >> 0x20),uVar4);
      if (uVar3 == 1) {
        memcpy(param_1 + 0x19,(void *)(iVar2 + 0x18),0x10);
      }
      if ((uint)param_1[8] < uVar3) {
        param_1[8] = uVar3;
      }
      param_1[0x2a] = param_1[0x2a] + 1;
      FUN_0027361c(param_1[0x16],uVar3,*(undefined4 *)(param_2 + 4));
    }
    param_2 = *(int *)(param_2 + 0xc);
  }
  return iVar1;
}


