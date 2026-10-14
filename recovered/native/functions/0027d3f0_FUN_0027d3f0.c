/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d3f0 FUN_0027d3f0 */

uint FUN_0027d3f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int local_1c [2];
  
  iVar4 = 0;
  local_1c[0] = 0;
  if (param_4 == 0) {
    iVar4 = 0;
    if (*(char *)(param_1 + 0x5b) == '\x01') {
      uVar2 = 1;
      goto LAB_0027d424;
    }
  }
  else if (*(char *)(param_1 + 0x5b) == '\x01') {
    uVar2 = 0;
LAB_0027d424:
    iVar4 = FUN_00260b50(param_1,local_1c,uVar2);
  }
  if (param_2 + param_3 <= local_1c[0]) {
    uVar3 = *(ushort *)(param_5 + 0x1c) & 0x400;
    if ((*(ushort *)(param_5 + 0x1c) & 0x400) == 0) {
      FUN_00263730(param_5);
      uVar1 = DAT_0027d4ac;
      *(int *)(param_5 + 4) = iVar4 + param_2;
      *(short *)(param_5 + 0x1c) = (short)uVar1;
      goto LAB_0027d4a2;
    }
  }
  uVar3 = FUN_0026526c(param_5,param_3 + 2,0);
  if (uVar3 == 0) {
    *(undefined2 *)(param_5 + 0x1c) = 0x610;
    *(undefined1 *)(param_5 + 0x1e) = 4;
    *(undefined1 *)(param_5 + 0x1f) = 0;
    if (param_4 == 0) {
      uVar3 = FUN_0027d38c(param_1,param_2,param_3,*(undefined4 *)(param_5 + 4));
    }
    else {
      uVar3 = FUN_0027c294(param_1,param_2,param_3,*(undefined4 *)(param_5 + 4),0);
    }
    *(undefined1 *)(*(int *)(param_5 + 4) + param_3) = 0;
    *(undefined1 *)(*(int *)(param_5 + 4) + param_3 + 1) = 0;
    if (uVar3 != 0) {
      FUN_00263730(param_5);
    }
  }
LAB_0027d4a2:
  *(int *)(param_5 + 0x18) = param_3;
  return uVar3;
}


