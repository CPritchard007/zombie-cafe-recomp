/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f5bc FUN_0025f5bc */

undefined8 FUN_0025f5bc(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *__s;
  int iVar4;
  int *local_20;
  
  iVar4 = param_1[0x18];
  uVar1 = 0;
  local_20 = param_1;
  if ((iVar4 < param_2) &&
     (uVar1 = (uint)*(byte *)((int)param_1 + 6), local_20 = param_1, uVar1 != 0)) {
    piVar2 = (int *)FUN_0025f4d0(param_1[0x17],param_2 * 0x30);
    uVar1 = 7;
    local_20 = piVar2;
    if (piVar2 != (int *)0x0) {
      __s = piVar2 + iVar4 * 0xc;
      memset(__s,0,(param_2 - iVar4) * 0x30);
      local_20 = param_1 + 0x2e;
      param_1[0x17] = (int)piVar2;
      do {
        __s[5] = param_1[6];
        if (*(int *)param_1[0x10] == 0) {
LAB_0025f624:
          *__s = param_1[0x1f];
          iVar3 = 0;
        }
        else {
          iVar3 = param_1[0x13];
          if ((iVar3 < 1) && ((iVar3 != 0 || (param_1[0x12] == 0)))) goto LAB_0025f624;
          *__s = param_1[0x12];
        }
        __s[1] = iVar3;
        __s[6] = param_1[0xd];
        iVar3 = FUN_0025f3c2(param_1[6]);
        __s[4] = iVar3;
        if (iVar3 == 0) {
          uVar1 = 7;
          goto LAB_0025f664;
        }
        iVar3 = *local_20;
        if (iVar3 != 0) {
          __s[7] = *(int *)(iVar3 + 0x44);
          __s[8] = *(int *)(iVar3 + 0x4c);
          __s[9] = *(int *)(iVar3 + 0x50);
          __s[10] = *(int *)(iVar3 + 0x68);
        }
        iVar4 = iVar4 + 1;
        param_1[0x18] = iVar4;
        __s = __s + 0xc;
      } while (iVar4 != param_2);
      uVar1 = 0;
    }
  }
LAB_0025f664:
  return CONCAT44(local_20,uVar1);
}


