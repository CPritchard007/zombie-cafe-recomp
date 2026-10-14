/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002620c2 FUN_002620c2 */

undefined4 FUN_002620c2(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_00261f68();
  if ((int)((uint)*(ushort *)(iVar1 + 0x16) << 0x1e) < 0) {
    uVar2 = 8;
    if ((param_2 != '\0') != (bool)*(char *)(iVar1 + 0x11)) goto LAB_002620f6;
  }
  *(char *)(iVar1 + 0x11) = '\x01' - (param_2 == '\0');
  *(bool *)(iVar1 + 0x12) = param_2 == '\x02';
  uVar2 = 0;
LAB_002620f6:
  FUN_00262002(param_1);
  return uVar2;
}


