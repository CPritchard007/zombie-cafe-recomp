/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264238 FUN_00264238 */

undefined4 FUN_00264238(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [48];
  int local_48;
  int local_44;
  
  iVar1 = (**(code **)(FUN_00264284 + DAT_0026427c))(*(undefined4 *)(param_1 + 0xc),auStack_78);
  if (iVar1 == 0) {
    *param_2 = local_48;
    param_2[1] = local_44;
    if ((local_48 == 1) && (local_44 == 0)) {
      *param_2 = 0;
      param_2[1] = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    puVar2 = (undefined4 *)__errno();
    uVar3 = DAT_00264280;
    *(undefined4 *)(param_1 + 0x14) = *puVar2;
  }
  return uVar3;
}


