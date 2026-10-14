/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c030 FUN_0025c030 */

undefined8 FUN_0025c030(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar1 = *(int *)(iVar3 + 0x28);
  *(code **)(iVar3 + 0x10) = param_2;
  pcVar2 = param_2;
  if (iVar1 != 0) {
    pcVar2 = *(code **)(DAT_0025c084 + 0x25c0bc);
    if ((int)param_2 < 0) {
      iVar3 = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0x18);
      param_2 = (code *)__aeabi_ldivmod((int)param_2 * -0x400,
                                        (uint)-(int)param_2 >> 0x16 |
                                        ((((int)param_2 >> 0x1f) -
                                         (((int)param_2 >> 0x1f) << 1 | (uint)param_2 >> 0x1f)) -
                                        (uint)(param_2 < (code *)((int)param_2 * 2))) * 0x400,iVar3,
                                        iVar3 >> 0x1f,iVar1,pcVar2,param_3);
    }
    (*pcVar2)(iVar1,param_2);
  }
  return CONCAT44(pcVar2,iVar1);
}


