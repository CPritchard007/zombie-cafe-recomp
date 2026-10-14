/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274f48 FUN_00274f48 */

uint FUN_00274f48(int param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char local_21;
  int local_20;
  int local_1c [2];
  
  iVar1 = DAT_00274ff8;
  local_20 = 0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    for (uVar5 = param_2 + 1;
        (uVar2 = FUN_0025c29c(param_1,uVar5), uVar2 == uVar5 ||
        (iVar3 = __udivsi3(*(undefined4 *)(iVar1 + 0x274fd4),*(undefined4 *)(param_1 + 0x20)),
        uVar5 == iVar3 + 1U)); uVar5 = uVar5 + 1) {
    }
    if (uVar5 <= *(uint *)(param_1 + 0x2c)) {
      uVar4 = FUN_00274ed0(param_1,uVar5,&local_21,local_1c);
      uVar2 = 0;
      if (uVar4 != 0) goto LAB_00274fcc;
      if ((local_21 == '\x04') && (local_1c[0] == param_2)) {
        uVar4 = 0x65;
        uVar2 = uVar5;
        goto LAB_00274fcc;
      }
    }
  }
  uVar4 = FUN_00274984(param_1,param_2,&local_20,0);
  uVar2 = 0;
  if (uVar4 == 0) {
    uVar2 = FUN_0025ba30(*(undefined4 *)(local_20 + 0x38));
  }
LAB_00274fcc:
  *param_4 = uVar2;
  if (param_3 == (int *)0x0) {
    FUN_00274a30();
  }
  else {
    *param_3 = local_20;
  }
  return uVar4 & -(uint)(uVar4 != 0x65);
}


