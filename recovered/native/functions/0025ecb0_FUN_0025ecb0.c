/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ecb0 FUN_0025ecb0 */

undefined8 FUN_0025ecb0(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  
  puVar7 = param_1;
  FUN_0025ea68();
  uVar3 = DAT_0025ed48;
  __aeabi_ldivmod(DAT_0025ed40 + *param_1,
                  DAT_0025ed44 + param_1[1] + (uint)CARRY4(DAT_0025ed40,*param_1),DAT_0025ed48,
                  DAT_0025ed4c,puVar7,param_2,param_3);
  uVar5 = __floatsidf(uVar3);
  uVar5 = __divdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_0025ed50,DAT_0025ed54);
  iVar1 = __fixdfsi();
  uVar2 = __divsi3(iVar1,0xe10);
  iVar4 = DAT_0025ed58;
  param_1[5] = uVar2;
  iVar4 = iVar1 + uVar2 * iVar4;
  uVar2 = __divsi3(iVar4,0x3c);
  param_1[6] = uVar2;
  uVar6 = __floatsidf(iVar1);
  uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                   (int)((ulonglong)uVar6 >> 0x20));
  uVar6 = __floatsidf(iVar4 + uVar2 * -0x3c);
  uVar6 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                   (int)((ulonglong)uVar6 >> 0x20));
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  return uVar5;
}


