/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002672e8 FUN_002672e8 */

int * FUN_002672e8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_70;
  int local_68 [21];
  
  iVar3 = *param_1;
  piVar1 = (int *)FUN_0025f04c(iVar3,0x50);
  if (piVar1 == (int *)0x0) {
    memset(local_68,0,0x50);
    piVar1 = local_68;
  }
  if (param_2 == 0) {
    uVar2 = FUN_0025f1ba(iVar3,0x71,0);
    param_2 = FUN_00267228(param_1,0,uVar2);
  }
  *piVar1 = param_2;
  local_70 = param_3;
  if (param_3 == 0) {
    local_70 = FUN_0025f04c(iVar3,0x48);
  }
  piVar1[10] = local_70;
  piVar1[0xb] = param_4;
  piVar1[0xc] = param_5;
  piVar1[0xd] = param_6;
  piVar1[0xe] = param_7;
  *(ushort *)((int)piVar1 + 6) = (ushort)(param_8 != 0);
  *(undefined1 *)(piVar1 + 1) = 0x74;
  piVar1[0x12] = param_9;
  piVar1[0x13] = param_10;
  piVar1[4] = -1;
  piVar1[5] = -1;
  piVar1[6] = -1;
  if (*(char *)(iVar3 + 0x36) != '\0') {
    FUN_00261044(iVar3,piVar1);
    if (piVar1 != local_68) {
      FUN_0025fbda(iVar3,piVar1);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


