/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ed88 FUN_0025ed88 */

undefined8 FUN_0025ed88(int *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *local_18;
  undefined8 *local_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  if ((*param_1 < 2) || ((code *)param_1[0x12] == (code *)0x0)) {
    uVar1 = (*(code *)param_1[0x10])(param_1,&local_18);
    __muldf3(local_18,local_14,DAT_0025edc0,DAT_0025edc4);
    uVar2 = __fixdfdi();
    *param_2 = uVar2;
  }
  else {
    uVar1 = (*(code *)param_1[0x12])();
  }
  return CONCAT44(local_18,uVar1);
}


