/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e8ef0 FUN_002e8ef0 */

undefined4 FUN_002e8ef0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_2c [2];
  undefined4 local_24;
  
  iVar1 = FUN_002ea234();
  uVar3 = 1;
  if (((iVar1 == 0) && (uVar3 = 0, param_2 != 0)) &&
     (piVar2 = (int *)FUN_002e95ec(param_2,*(undefined4 *)(DAT_002e8f4c + 0x2e8f12),
                                   DAT_002e8f50 + 0x2e8f18,0), piVar2 != (int *)0x0)) {
    FUN_002e8eb0(local_2c,param_1);
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1,param_3,local_2c);
    if (local_2c[0] == 1) {
      *param_3 = local_24;
      uVar3 = 1;
    }
  }
  return uVar3;
}


