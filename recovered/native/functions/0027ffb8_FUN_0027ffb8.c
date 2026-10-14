/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027ffb8 FUN_0027ffb8 */

uint FUN_0027ffb8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    return 0;
  }
  if ((*(char *)(param_1 + 0x14) != '\0') && ((int)((uint)*(ushort *)(param_2 + 0x18) << 0x1d) < 0))
  {
    return 0;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (((((int)((uint)*(ushort *)(param_2 + 0x18) << 0x1d) < 0) ||
         (*(char *)(param_1 + 0xf) == '\x03')) &&
        ((uVar2 = FUN_00261bae(param_1,4), uVar2 != 0 ||
         (uVar2 = FUN_0027fe18(param_1,1), uVar2 != 0)))) ||
       (((*(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x14) &&
         (iVar1 = FUN_0026189c(param_2), iVar1 != 0)) && (uVar2 = FUN_002602cc(param_2), uVar2 != 0)
        ))) goto LAB_0028005a;
    uVar2 = FUN_0027c1b8(param_1,param_2);
  }
  else {
    iVar1 = FUN_0026189c(param_2);
    if ((iVar1 != 0) && (uVar2 = FUN_002602cc(param_2), uVar2 != 0)) goto LAB_0028005a;
    uVar2 = FUN_0027366c(param_1,param_2,0,0);
  }
  if (uVar2 == 0) {
    FUN_00261944(param_2);
  }
LAB_0028005a:
  if (((uVar2 & 0xff) == 10) || ((uVar2 & 0xff) == 0xd)) {
    *(uint *)(param_1 + 0x28) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return uVar2;
}


