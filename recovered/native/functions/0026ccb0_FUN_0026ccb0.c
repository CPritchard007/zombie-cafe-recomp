/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026ccb0 FUN_0026ccb0 */

void FUN_0026ccb0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_40 [44];
  
  puVar5 = *(undefined4 **)(param_2 + 0x48);
  memset(auStack_40,0,0x28);
  if (((puVar5[4] != 0) && (iVar1 = FUN_0026cc3c(param_2), iVar1 == 0)) &&
     ((puVar5[0xb] != 0 || (iVar1 = FUN_0025fb4c(param_1,puVar5 + 0xb), iVar1 == 0)))) {
    FUN_0025f206(param_1,puVar5[0xb],auStack_40,puVar5[1],*puVar5,puVar5[1]);
    puVar5[6] = puVar5[6] + 1;
    FUN_002609e4(auStack_40,extraout_r1,puVar5[4],(int)puVar5[4] >> 0x1f);
    uVar2 = extraout_r1_00;
    puVar4 = (undefined4 *)puVar5[0xc];
    while (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar4[2];
      FUN_002609e4(auStack_40,uVar2,puVar4[1],(int)puVar4[1] >> 0x1f);
      FUN_0025e2c8(auStack_40,*puVar4,puVar4[1]);
      FUN_0025fbda(param_1,puVar4);
      uVar2 = extraout_r1_01;
      puVar4 = puVar3;
    }
    puVar5[0xc] = 0;
    FUN_002600fa(param_1,auStack_40,puVar5);
  }
  return;
}


