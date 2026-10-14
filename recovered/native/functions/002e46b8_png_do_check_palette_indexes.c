/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e46b8 png_do_check_palette_indexes */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002e46ec) */
/* WARNING: Removing unreachable block (ram,0x002e46ec) */

undefined8 png_do_check_palette_indexes(int param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *local_1c;
  
  local_1c = param_2;
  if (((int)(uint)*(ushort *)(param_1 + 0x208) < 1 << (uint)*(byte *)((int)param_2 + 9)) &&
     (*(ushort *)(param_1 + 0x208) != 0)) {
    uVar3 = *param_2 * -(uint)*(byte *)((int)param_2 + 0xb) & 7;
    pbVar5 = *(byte **)(param_1 + 0x1e4);
    pbVar2 = pbVar5 + param_2[1];
    switch((uint)*(byte *)((int)param_2 + 9)) {
    case 1:
      for (; pbVar5 < pbVar2; pbVar2 = pbVar2 + -1) {
        if ((int)(uint)*pbVar2 >> uVar3 != 0) {
          *(undefined4 *)(param_1 + 0x20c) = 1;
        }
        uVar3 = 0;
      }
      break;
    case 2:
      for (; pbVar5 < pbVar2; pbVar2 = pbVar2 + -1) {
        uVar1 = (int)(uint)*pbVar2 >> uVar3 & 3;
        if (*(int *)(param_1 + 0x20c) < (int)uVar1) {
          *(uint *)(param_1 + 0x20c) = uVar1;
        }
        uVar1 = ((int)(uint)*pbVar2 >> uVar3) >> 2 & 3;
        if (*(int *)(param_1 + 0x20c) < (int)uVar1) {
          *(uint *)(param_1 + 0x20c) = uVar1;
        }
        local_1c = (int *)(((int)(uint)*pbVar2 >> uVar3) >> 4 & 3);
        if (*(int *)(param_1 + 0x20c) < (int)local_1c) {
          *(int **)(param_1 + 0x20c) = local_1c;
        }
        iVar4 = ((int)(uint)*pbVar2 >> uVar3) >> 6;
        if (*(int *)(param_1 + 0x20c) < iVar4) {
          *(int *)(param_1 + 0x20c) = iVar4;
        }
        uVar3 = 0;
      }
      break;
    case 4:
      for (; pbVar5 < pbVar2; pbVar2 = pbVar2 + -1) {
        uVar1 = (int)(uint)*pbVar2 >> uVar3 & 0xf;
        if (*(int *)(param_1 + 0x20c) < (int)uVar1) {
          *(uint *)(param_1 + 0x20c) = uVar1;
        }
        iVar4 = ((int)(uint)*pbVar2 >> uVar3) >> 4;
        if (*(int *)(param_1 + 0x20c) < iVar4) {
          *(int *)(param_1 + 0x20c) = iVar4;
        }
        uVar3 = 0;
      }
      break;
    case 8:
      for (; pbVar5 < pbVar2; pbVar2 = pbVar2 + -1) {
        if (*(int *)(param_1 + 0x20c) < (int)(uint)*pbVar2) {
          *(uint *)(param_1 + 0x20c) = (uint)*pbVar2;
        }
      }
    }
  }
  return CONCAT44(local_1c,param_1);
}


