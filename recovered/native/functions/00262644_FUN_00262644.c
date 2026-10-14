/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262644 FUN_00262644 */

undefined8 FUN_00262644(char *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *local_c;
  
  uVar1 = *(ushort *)(param_1 + 2) & 0x400;
  if ((*(ushort *)(param_1 + 2) & 0x400) == 0) {
    local_c = param_2;
    if (*param_1 != -100) {
      if (*param_1 == -99) {
        uVar1 = FUN_00262644(*(undefined4 *)(param_1 + 8));
      }
      goto LAB_00262680;
    }
    uVar1 = FUN_00262644(*(undefined4 *)(param_1 + 8),&local_c);
    if (uVar1 == 0) goto LAB_00262680;
    iVar2 = -(int)local_c;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  *param_2 = iVar2;
  uVar1 = 1;
LAB_00262680:
  return CONCAT44(param_1,uVar1);
}


