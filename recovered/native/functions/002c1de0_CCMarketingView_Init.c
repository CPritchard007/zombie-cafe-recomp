/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1de0 CCMarketingView_Init */

undefined8 CCMarketingView_Init(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = malloc(0x1cc);
  *(undefined4 *)((int)pvVar1 + 0xc0) = param_2;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa8) = param_1;
  *(undefined4 *)((int)pvVar1 + 0xa0) = 0;
  *(undefined4 *)((int)pvVar1 + 0xac) = 0;
  *(undefined4 *)((int)pvVar1 + 0xb0) = 0;
  *(undefined4 *)((int)pvVar1 + 0xb4) = 0xffffffff;
  *(undefined1 *)((int)pvVar1 + 0xc4) = 0;
  *(undefined4 *)((int)pvVar1 + 0x48) = 0;
  *(undefined4 *)((int)pvVar1 + 0x1c8) = 0;
  *(undefined4 *)((int)pvVar1 + 0xbc) = 0;
  *(undefined4 *)((int)pvVar1 + 0xb8) = 1;
  *(undefined4 *)((int)pvVar1 + 0x68) = 0;
  *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x38) = 0xffffffff;
  *(undefined4 *)((int)pvVar1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)pvVar1 + 0x40) = 0;
  uVar2 = CCGetTimeMS();
  *(undefined4 *)((int)pvVar1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((int)pvVar1 + 0x60) = 0x3f800000;
  *(undefined4 *)((int)pvVar1 + 0x44) = uVar2;
  *(undefined4 *)((int)pvVar1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((int)pvVar1 + 0x50) = 0xffffffff;
  *(undefined4 *)((int)pvVar1 + 0x54) = 0;
  *(undefined4 *)((int)pvVar1 + 0x58) = 0;
  *(undefined4 *)((int)pvVar1 + 100) = 0;
  *(undefined4 *)((int)pvVar1 + 0x98) = 0;
  *(undefined4 *)((int)pvVar1 + 0x9c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x70) = 0;
  *(undefined4 *)((int)pvVar1 + 0x84) = 0;
  *(undefined4 *)((int)pvVar1 + 0x88) = 0;
  *(undefined4 *)((int)pvVar1 + 0x7c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x74) = 0;
  *(undefined4 *)((int)pvVar1 + 0x78) = 0;
  *(undefined4 *)((int)pvVar1 + 0x30) = 0;
  uVar2 = DAT_002c1e78;
  *(undefined4 *)((int)pvVar1 + 0x80) = 0;
  *(undefined4 *)((int)pvVar1 + 0x94) = 0;
  *(undefined4 *)((int)pvVar1 + 0x8c) = uVar2;
  return CONCAT44(param_1,pvVar1);
}


