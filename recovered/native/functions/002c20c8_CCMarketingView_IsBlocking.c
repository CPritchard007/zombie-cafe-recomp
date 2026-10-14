/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c20c8 CCMarketingView_IsBlocking */

uint * CCMarketingView_IsBlocking(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = *(uint **)(param_1 + 0x2c);
  if ((puVar2 != (uint *)0x0) && (puVar3 = (uint *)*puVar2, puVar2 = puVar3, puVar3 != (uint *)0x0))
  {
    uVar1 = *(uint *)(param_1 + 0x38);
    puVar2 = (uint *)0x0;
    if ((uVar1 < *(uint *)((int)puVar3 + DAT_002c20f8)) && (uVar1 != 0xffffffff)) {
      puVar2 = (uint *)(uint)(*(int *)(*(int *)((int)puVar3 + DAT_002c20fc) + uVar1 * 0x100 + 0xc)
                             == 6);
    }
  }
  return puVar2;
}


