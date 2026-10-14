/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025dce0 FUN_0025dce0 */

int FUN_0025dce0(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int *__s;
  int *piVar5;
  
  iVar3 = DAT_0025de40;
  if ((param_3 != 0) && (param_1[10] == 0)) {
    iVar1 = (**(code **)(DAT_0025de40 + 0x25dd70))(param_1[5],param_1[6] + 0x28,param_1[7]);
    if (iVar1 == 0) {
      return 7;
    }
    pcVar4 = *(code **)(iVar3 + 0x25dd74);
    uVar2 = param_1[4];
    if ((int)uVar2 < 0) {
      uVar2 = __aeabi_ldivmod(uVar2 * -0x400,
                              -uVar2 >> 0x16 |
                              ((((int)uVar2 >> 0x1f) - (((int)uVar2 >> 0x1f) << 1 | uVar2 >> 0x1f))
                              - (uint)(uVar2 < uVar2 * 2)) * 0x400,param_1[5] + param_1[6],
                              param_1[5] + param_1[6] >> 0x1f);
    }
    (*pcVar4)(iVar1,uVar2);
    param_1[10] = iVar1;
  }
  uVar2 = 1;
  if (param_1[7] != 0) {
    uVar2 = (uint)(*param_1 == 0);
  }
  piVar5 = (int *)param_1[10];
  param_3 = param_3 * (uVar2 + 1);
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)(**(code **)(DAT_0025de44 + 0x25ddf8))(piVar5,param_2,param_3);
  }
  if ((piVar5 == (int *)0x0) && (param_3 == 1)) {
    for (iVar3 = param_1[2];
        (iVar3 != 0 && ((*(short *)(iVar3 + 0x1a) != 0 || ((*(ushort *)(iVar3 + 0x18) & 4) != 0))));
        iVar3 = *(int *)(iVar3 + 0x24)) {
    }
    param_1[2] = iVar3;
    if (iVar3 == 0) {
      for (iVar3 = param_1[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x24)) {
        if (*(short *)(iVar3 + 0x1a) == 0) goto LAB_0025ddbe;
      }
    }
    else {
LAB_0025ddbe:
      iVar3 = (*(code *)param_1[8])(param_1[9]);
      if ((iVar3 != 5) && (iVar3 != 0)) {
        return iVar3;
      }
    }
    piVar5 = (int *)(**(code **)(FUN_0025de4c + DAT_0025de48 + 6))(param_1[10],param_2,2);
  }
  __s = piVar5;
  if (piVar5 != (int *)0x0) {
    __s = (int *)piVar5[1];
    if (*__s == 0) {
      memset(__s,0,0x28);
      *__s = (int)piVar5;
      __s[1] = *piVar5;
      __s[2] = (int)(__s + 10);
      memset(__s + 10,0,param_1[6]);
      __s[7] = (int)param_1;
      __s[5] = param_2;
    }
    if (*(short *)((int)__s + 0x1a) == 0) {
      param_1[3] = param_1[3] + 1;
    }
    *(short *)((int)__s + 0x1a) = *(short *)((int)__s + 0x1a) + 1;
    if (param_2 == 1) {
      param_1[0xb] = (int)__s;
    }
  }
  *param_4 = __s;
  if ((__s != (int *)0x0) || (iVar3 = 7, param_3 == 0)) {
    iVar3 = 0;
  }
  return iVar3;
}


