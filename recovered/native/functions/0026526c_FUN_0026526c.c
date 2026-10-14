/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026526c FUN_0026526c */

byte FUN_0026526c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *__dest;
  void *__src;
  ushort uVar3;
  
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  iVar1 = FUN_0025f450(*param_1,param_1[9]);
  if (iVar1 < param_2) {
    if ((param_3 == 0) || (param_1[1] != param_1[9])) {
      FUN_0025fbda(*param_1,param_1[9]);
      uVar2 = FUN_0025ee10(*param_1,param_2);
      param_1[9] = uVar2;
    }
    else {
      uVar2 = FUN_00265252(*param_1,param_1[1],param_2);
      param_3 = 0;
      param_1[9] = uVar2;
      param_1[1] = uVar2;
    }
  }
  __src = (void *)param_1[1];
  if ((((param_3 != 0) && (__src != (void *)0x0)) &&
      (__dest = (void *)param_1[9], __dest != (void *)0x0)) && (__src != __dest)) {
    memcpy(__dest,__src,param_1[6]);
  }
  if (((int)((uint)*(ushort *)(param_1 + 7) << 0x15) < 0) && ((code *)param_1[8] != (code *)0x0)) {
    (*(code *)param_1[8])(param_1[1]);
  }
  iVar1 = param_1[9];
  uVar3 = 1;
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    uVar3 = (ushort)DAT_00265300 & *(ushort *)(param_1 + 7);
  }
  *(ushort *)(param_1 + 7) = uVar3;
  param_1[8] = 0;
  return -(iVar1 == 0) & 7;
}


