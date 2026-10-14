/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026ca70 FUN_0026ca70 */

uint FUN_0026ca70(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint local_60;
  undefined4 *local_54;
  uint local_48;
  uint local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_21;
  
  puVar6 = (undefined4 *)*param_3;
  local_21 = *(undefined1 *)(puVar6 + 1);
  local_40[0] = *puVar6;
  if ((int)((uint)*param_2 << 0x18) < 0) {
    uVar8 = FUN_00260a18(param_2,&local_48);
  }
  else {
    uVar8 = 1;
    local_48 = (uint)*param_2;
  }
  local_60 = local_48;
  uVar2 = *(ushort *)((int)puVar6 + 6);
  local_54 = puVar6;
  for (iVar7 = 0; (uVar8 < local_48 && (iVar7 < (int)(uint)*(ushort *)(param_3 + 1)));
      iVar7 = iVar7 + 1) {
    uVar4 = (uint)param_2[uVar8];
    if ((int)(uVar4 << 0x18) < 0) {
      iVar3 = FUN_00260a18(param_2 + uVar8,&local_44);
    }
    else {
      iVar3 = 1;
      local_44 = uVar4;
    }
    uVar4 = local_44;
    uVar8 = uVar8 + iVar3;
    if ((param_1 <= (int)local_60) && (iVar3 = FUN_0025c490(local_44), iVar3 != 0)) break;
    iVar3 = FUN_0025c4a8(param_2 + local_60,uVar4,local_40);
    uVar5 = 0;
    if (iVar7 < (int)(uint)uVar2) {
      uVar5 = local_54[3];
    }
    uVar4 = FUN_0026c800(local_40,param_3[4] + iVar7 * 0x28,uVar5);
    local_54 = local_54 + 1;
    if (uVar4 != 0) {
      if (((iVar7 < (int)(uint)uVar2) && (puVar6[2] != 0)) && (*(char *)(puVar6[2] + iVar7) != '\0')
         ) {
        uVar4 = -uVar4;
      }
      if ((*(byte *)((int)param_3 + 6) & 4) == 0) {
        return uVar4;
      }
      if (iVar7 != *(ushort *)(param_3 + 1) - 1) {
        return uVar4;
      }
      *(byte *)((int)param_3 + 6) = *(byte *)((int)param_3 + 6) & 0xfb;
      param_3[2] = local_30;
      param_3[3] = local_2c;
      return uVar4;
    }
    local_60 = iVar3 + local_60;
  }
  bVar1 = *(byte *)((int)param_3 + 6);
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    if (-1 < (int)((uint)bVar1 << 0x1e)) {
      uVar4 = (uint)(uVar8 < local_48);
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


