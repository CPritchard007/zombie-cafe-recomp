/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002607da FUN_002607da */

undefined4 *
FUN_002607da(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = param_2;
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_0025ee10(param_1,0x50,param_3,param_4,param_4),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = FUN_002604c0(param_1,*param_2,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_00260706(param_1,param_2[10],param_3);
    puVar1[10] = uVar2;
    uVar2 = FUN_002606fc(param_1,param_2[0xb],param_3);
    puVar1[0xb] = uVar2;
    uVar2 = FUN_002604c0(param_1,param_2[0xc],param_3);
    puVar1[0xc] = uVar2;
    uVar2 = FUN_002606fc(param_1,param_2[0xd],param_3);
    puVar1[0xd] = uVar2;
    uVar2 = FUN_002604c0(param_1,param_2[0xe],param_3);
    puVar1[0xe] = uVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
    iVar3 = FUN_002607da(param_1,param_2[0xf],param_3);
    puVar1[0xf] = iVar3;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 0x40) = puVar1;
    }
    puVar1[0x10] = 0;
    uVar2 = FUN_002606fc(param_1,param_2[0x12],param_3);
    puVar1[0x12] = uVar2;
    uVar2 = FUN_002606fc(param_1,param_2[0x13],param_3);
    puVar1[0x13] = uVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)param_2 + 6) & 0xfff7;
    puVar1[0x11] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
  }
  return puVar1;
}


