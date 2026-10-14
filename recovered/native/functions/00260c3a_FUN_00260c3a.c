/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260c3a FUN_00260c3a */

void FUN_00260c3a(undefined4 *param_1,uint param_2,byte *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint local_34;
  uint local_20;
  uint local_1c [2];
  
  puVar3 = *(undefined4 **)(param_4 + 0x10);
  *(undefined1 *)(param_4 + 6) = 0;
  if ((int)((uint)*param_3 << 0x18) < 0) {
    uVar5 = FUN_00260a18(param_3,&local_20);
  }
  else {
    uVar5 = 1;
    local_20 = (uint)*param_3;
  }
  local_34 = local_20;
  for (uVar4 = 0;
      ((uVar5 < local_20 &&
       (((((int)param_2 >> 0x1f) - ((int)local_34 >> 0x1f)) + (uint)(local_34 <= param_2) & 0xff) !=
        0)) && (uVar4 < *(ushort *)(param_4 + 4))); uVar4 = uVar4 + 1) {
    uVar2 = (uint)param_3[uVar5];
    if ((int)(uVar2 << 0x18) < 0) {
      iVar1 = FUN_00260a18(param_3 + uVar5,local_1c);
    }
    else {
      iVar1 = 1;
      local_1c[0] = uVar2;
    }
    *(undefined1 *)((int)puVar3 + 0x1f) = *(undefined1 *)(param_1 + 1);
    uVar5 = uVar5 + iVar1;
    *puVar3 = *param_1;
    puVar3[9] = 0;
    iVar1 = FUN_0025c4a8(param_3 + local_34,local_1c[0],puVar3);
    local_34 = iVar1 + local_34;
    puVar3 = puVar3 + 10;
  }
  *(ushort *)(param_4 + 4) = uVar4;
  return;
}


