/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027cc08 FUN_0027cc08 */

undefined8 FUN_0027cc08(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  FUN_0025ad28();
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x14); iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10 + 4);
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 8) == '\x02') {
        bVar1 = true;
      }
      FUN_0027c594(iVar2,param_2);
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10 + 8) = 0;
    }
  }
  FUN_00260082(param_1,0x44);
  FUN_0025ad3c();
  if (*(int *)(param_1 + 0x18) << 0x16 < 0) {
    FUN_0025c5ec(param_1);
    FUN_00262044(param_1);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  if ((*(code **)(param_1 + 0xb0) != (code *)0x0) &&
     ((bVar1 || (*(char *)(param_1 + 0x34) == '\0')))) {
    (**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xac));
  }
  return CONCAT44(param_2,param_1);
}


