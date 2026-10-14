/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec908 __muldi3 */

undefined8 __muldi3(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = param_1 >> 0x10;
  uVar1 = param_3 >> 0x10;
  uVar3 = param_1 & ~(uVar4 << 0x10);
  uVar5 = param_3 & ~(uVar1 << 0x10);
  uVar2 = uVar3 * uVar5;
  uVar5 = uVar4 * uVar5;
  uVar3 = uVar1 * uVar3;
  iVar6 = uVar4 * uVar1;
  uVar4 = uVar5 + uVar3;
  if (CARRY4(uVar5,uVar3)) {
    iVar6 = iVar6 + 0x10000;
  }
  uVar1 = uVar4 * 0x10000;
  return CONCAT44(param_1 * param_4 + param_3 * param_2 +
                  iVar6 + (uVar4 >> 0x10) + (uint)CARRY4(uVar2,uVar1),uVar2 + uVar1);
}


