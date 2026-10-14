/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5b50 png_free_data */

void png_free_data(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint local_28;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x11) < 0) {
      if (param_4 == -1) {
        for (iVar1 = 0; iVar1 < *(int *)(param_2 + 0x80); iVar1 = iVar1 + 1) {
          png_free_data(param_1,param_2,0x4000,iVar1);
        }
        png_free(param_1,*(undefined4 *)(param_2 + 0x88));
        *(undefined4 *)(param_2 + 0x88) = 0;
        *(undefined4 *)(param_2 + 0x80) = 0;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x88);
        if ((iVar1 != 0) && (*(int *)(iVar1 + param_4 * 0x1c + 4) != 0)) {
          png_free(param_1);
          *(undefined4 *)(*(int *)(param_2 + 0x88) + param_4 * 0x1c + 4) = 0;
        }
      }
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x12) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0x9c));
      *(undefined4 *)(param_2 + 0x9c) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x17) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0x100));
      png_free(param_1,*(undefined4 *)(param_2 + 0x104));
      *(undefined4 *)(param_2 + 0x100) = 0;
      *(undefined4 *)(param_2 + 0x104) = 0;
      *(uint *)(param_2 + 8) = DAT_002d5e74 & *(uint *)(param_2 + 8);
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x18) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0xd0));
      png_free(param_1,*(undefined4 *)(param_2 + 0xdc));
      *(undefined4 *)(param_2 + 0xd0) = 0;
      *(undefined4 *)(param_2 + 0xdc) = 0;
      piVar2 = (int *)(param_2 + 0xe0);
      uVar3 = 0;
      if (*piVar2 != 0) {
        for (; uVar3 < *(byte *)(param_2 + 0xe5); uVar3 = uVar3 + 1) {
          png_free(param_1,*(undefined4 *)(*piVar2 + uVar3 * 4));
          *(undefined4 *)(*piVar2 + uVar3 * 4) = 0;
        }
        png_free(param_1,*piVar2);
        *piVar2 = 0;
      }
      *(uint *)(param_2 + 8) = DAT_002d5e78 & *(uint *)(param_2 + 8);
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x1b) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0x74));
      png_free(param_1,*(undefined4 *)(param_2 + 0x78));
      *(undefined4 *)(param_2 + 0x74) = 0;
      *(undefined4 *)(param_2 + 0x78) = 0;
      *(uint *)(param_2 + 8) = DAT_002d5e7c & *(uint *)(param_2 + 8);
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x1a) < 0) {
      if (param_4 == -1) {
        piVar2 = (int *)(param_2 + 0xf8);
        iVar1 = 0;
        if (*piVar2 != 0) {
          for (; iVar1 < *piVar2; iVar1 = iVar1 + 1) {
            png_free_data(param_1,param_2,0x20,iVar1);
          }
          png_free(param_1,*(undefined4 *)(param_2 + 0xf4));
          *(undefined4 *)(param_2 + 0xf4) = 0;
          *piVar2 = 0;
        }
        *(uint *)(param_2 + 8) = DAT_002d5e80 & *(uint *)(param_2 + 8);
      }
      else {
        piVar2 = (int *)(param_2 + 0xf4);
        if (*piVar2 != 0) {
          iVar1 = param_4 * 0x10;
          png_free(param_1,*(undefined4 *)(*piVar2 + iVar1));
          png_free(param_1,*(undefined4 *)(*piVar2 + iVar1 + 8));
          *(undefined4 *)(*piVar2 + iVar1) = 0;
          *(undefined4 *)(*piVar2 + iVar1 + 8) = 0;
        }
      }
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x16) < 0) {
      if (param_4 == -1) {
        piVar2 = (int *)(param_2 + 0xf0);
        iVar1 = 0;
        if (*piVar2 != 0) {
          for (; iVar1 < *piVar2; iVar1 = iVar1 + 1) {
            png_free_data(param_1,param_2,0x200,iVar1);
          }
          png_free(param_1,*(undefined4 *)(param_2 + 0xec));
          *(undefined4 *)(param_2 + 0xec) = 0;
          *piVar2 = 0;
        }
      }
      else {
        iVar1 = *(int *)(param_2 + 0xec);
        if (iVar1 != 0) {
          png_free(param_1,*(undefined4 *)(iVar1 + param_4 * 0x14 + 8));
          *(undefined4 *)(*(int *)(param_2 + 0xec) + param_4 * 0x14 + 8) = 0;
        }
      }
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x1c) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0xcc));
      *(undefined4 *)(param_2 + 0xcc) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x13) < 0) {
      png_free(param_1,*(undefined4 *)(param_2 + 0x10));
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    if ((int)((*(uint *)(param_2 + 0xe8) & param_3) << 0x19) < 0) {
      uVar3 = 0;
      if (*(int *)(param_2 + 0x108) != 0) {
        for (; uVar3 < *(uint *)(param_2 + 4); uVar3 = uVar3 + 1) {
          png_free(param_1,*(undefined4 *)(*(int *)(param_2 + 0x108) + uVar3 * 4));
          *(undefined4 *)(*(int *)(param_2 + 0x108) + uVar3 * 4) = 0;
        }
        png_free(param_1,*(undefined4 *)(param_2 + 0x108));
        *(undefined4 *)(param_2 + 0x108) = 0;
      }
      *(uint *)(param_2 + 8) = DAT_002d5e84 & *(uint *)(param_2 + 8);
    }
    local_28 = param_3;
    if (param_4 != -1) {
      local_28 = param_3 & DAT_002d5e88;
    }
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) & ~local_28;
  }
  return;
}


