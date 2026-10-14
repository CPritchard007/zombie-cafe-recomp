/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e31c0 png_set_cHRM */

void png_set_cHRM(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = png_fixed();
  uVar3 = png_fixed(param_1,(int)((ulonglong)uVar2 >> 0x20),param_5,param_6,DAT_002e3274 + 0x2e31dc)
  ;
  uVar4 = png_fixed(param_1,(int)((ulonglong)uVar3 >> 0x20),param_7,param_8,DAT_002e3278 + 0x2e31ee)
  ;
  uVar5 = png_fixed(param_1,(int)((ulonglong)uVar4 >> 0x20),param_9,param_10,DAT_002e327c + 0x2e3200
                   );
  uVar6 = png_fixed(param_1,(int)((ulonglong)uVar5 >> 0x20),param_11,param_12,
                    DAT_002e3280 + 0x2e3212);
  uVar7 = png_fixed(param_1,(int)((ulonglong)uVar6 >> 0x20),param_13,param_14,
                    DAT_002e3284 + 0x2e3224);
  uVar8 = png_fixed(param_1,(int)((ulonglong)uVar7 >> 0x20),param_15,param_16,
                    DAT_002e3288 + 0x2e3236);
  uVar1 = png_fixed(param_1,(int)((ulonglong)uVar8 >> 0x20),param_17,param_18,
                    DAT_002e328c + 0x2e3248);
  png_set_cHRM_fixed(param_1,param_2,(int)uVar2,(int)uVar3,(int)uVar4,(int)uVar5,(int)uVar6,
                     (int)uVar7,(int)uVar8,uVar1);
  return;
}


