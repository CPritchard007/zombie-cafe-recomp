/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c5a0 FUN_0026c5a0 */

void FUN_0026c5a0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar2) {
    iVar3 = (int)uVar2 >> 0x1f;
    uVar4 = __aeabi_ldivmod(param_3 + uVar2 + -1,
                            param_4 + iVar3 + (uint)CARRY4(param_3,uVar2) + -1 +
                            (uint)(param_3 + uVar2 != 0),uVar2,iVar3);
    uVar4 = __muldi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uVar2,iVar3);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    param_3 = (uint)uVar4;
  }
  iVar3 = FUN_0025e730(*(undefined4 *)(param_1 + 0xc),uVar2,param_3,(int)param_3 >> 0x1f);
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)__errno();
    iVar3 = DAT_0026c5f8 + 0x26c5ec;
    *(undefined4 *)(param_1 + 0x14) = *puVar1;
    FUN_0026c154(DAT_0026c5fc,iVar3,*(undefined4 *)(param_1 + 0x20),DAT_0026c600);
  }
  return;
}


