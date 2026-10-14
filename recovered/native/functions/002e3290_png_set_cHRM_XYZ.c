/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3290 png_set_cHRM_XYZ */

void png_set_cHRM_XYZ(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                     undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16
                     ,undefined4 param_17,undefined4 param_18,undefined4 param_19,
                     undefined4 param_20)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar4 = DAT_002e3340 + 0x2e329c;
  uVar5 = png_fixed();
  iVar2 = DAT_002e3344 + 0x2e32b0;
  uVar6 = png_fixed(param_1,(int)((ulonglong)uVar5 >> 0x20),param_5,param_6,iVar2);
  iVar3 = DAT_002e3348 + 0x2e32c2;
  uVar7 = png_fixed(param_1,(int)((ulonglong)uVar6 >> 0x20),param_7,param_8,iVar3);
  uVar8 = png_fixed(param_1,(int)((ulonglong)uVar7 >> 0x20),param_9,param_10,iVar4);
  uVar9 = png_fixed(param_1,(int)((ulonglong)uVar8 >> 0x20),param_11,param_12,iVar2);
  uVar10 = png_fixed(param_1,(int)((ulonglong)uVar9 >> 0x20),param_13,param_14,iVar3);
  uVar11 = png_fixed(param_1,(int)((ulonglong)uVar10 >> 0x20),param_15,param_16,iVar4);
  uVar12 = png_fixed(param_1,(int)((ulonglong)uVar11 >> 0x20),param_17,param_18,iVar2);
  uVar1 = png_fixed(param_1,(int)((ulonglong)uVar12 >> 0x20),param_19,param_20,iVar3);
  png_set_cHRM_XYZ_fixed
            (param_1,param_2,(int)uVar5,(int)uVar6,(int)uVar7,(int)uVar8,(int)uVar9,(int)uVar10,
             (int)uVar11,(int)uVar12,uVar1);
  return;
}


