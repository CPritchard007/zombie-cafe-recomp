/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cb5b2 FUN_002cb5b2 */

undefined1 FUN_002cb5b2(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[6];
  if ((puVar3[1] == 0) && (iVar2 = (*(code *)puVar3[3])(), iVar2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  puVar3[1] = puVar3[1] + -1;
  uVar1 = *(undefined1 *)*puVar3;
  *puVar3 = (undefined1 *)*puVar3 + 1;
  return uVar1;
}


