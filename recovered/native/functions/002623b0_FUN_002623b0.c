/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002623b0 FUN_002623b0 */

undefined8 FUN_002623b0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar2 = __aeabi_dcmplt(uVar3,uVar4,DAT_00262430,DAT_00262434);
  lVar6 = CONCAT44(DAT_00262444,DAT_00262440);
  if (iVar2 == 0) {
    iVar2 = __aeabi_dcmpgt(uVar3,uVar4,DAT_00262438,DAT_0026243c);
    lVar6 = CONCAT44(DAT_00262444,DAT_00262440);
    if (iVar2 == 0) {
      lVar6 = __fixdfdi(uVar3,uVar4);
    }
  }
  iVar5 = (int)((ulonglong)lVar6 >> 0x20);
  *(longlong *)(param_1 + 0x10) = lVar6;
  uVar7 = __floatdidf((int)lVar6,iVar5);
  iVar2 = __aeabi_dcmpeq(uVar3,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  if (((iVar2 != 0) && (lVar6 != -0x8000000000000000)) &&
     (((int)lVar6 != -1 || (iVar5 != DAT_00262448)))) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 4;
  }
  return uVar1;
}


