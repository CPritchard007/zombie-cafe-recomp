/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3d88 CCScrollList::Init */

/* CCScrollList::Init(ccScrollList*) */

undefined4 CCScrollList::Init(ccScrollList *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002b3dac;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = DAT_002b3db0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 1;
}


