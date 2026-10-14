/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002134ac RecipeBook::sortRecipeBackgrounds */

/* RecipeBook::sortRecipeBackgrounds(RECIPE_BOOK_SORTTYPE) */

void __thiscall RecipeBook::sortRecipeBackgrounds(RecipeBook *this,undefined4 param_2)

{
  byte bVar1;
  int *__ptr;
  int *__ptr_00;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  size_t __size;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *local_5c;
  int *local_58;
  int *local_48;
  int *local_40;
  Recipe aRStack_34 [32];
  
  *(undefined4 *)(this + 0x16c) = param_2;
  __size = *(int *)(*(int *)(this + 0x150) + 0x14) * 0x18;
  __ptr = (int *)malloc(__size);
  __ptr_00 = (int *)malloc(__size);
  local_5c = (int *)0x0;
  local_48 = (int *)0x0;
  piVar13 = __ptr;
  local_58 = __ptr_00;
  while ((int)local_5c <
         *(int *)(*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150) + 0x14)) {
    pbVar2 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                               (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),
                                (int)local_5c);
    bVar1 = *pbVar2;
    Recipe::Recipe(aRStack_34,
                   (Recipe *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + (uint)bVar1 * 0x1c));
    *piVar13 = (int)local_5c;
    iVar7 = Recipe::getCookTimeSeconds(aRStack_34,'\0');
    piVar13[2] = iVar7;
    iVar7 = Recipe::getServings(aRStack_34,'\0');
    piVar13[3] = iVar7;
    iVar3 = Recipe::getSellPrice(aRStack_34,'\0');
    piVar13[4] = iVar3 * iVar7;
    iVar7 = Recipe::getXp(aRStack_34,'\0');
    iVar3 = *(int *)(this + 0x60);
    piVar13[5] = iVar7;
    if (**(byte **)(DAT_00213840 + 0x213542) <
        *(byte *)(*(int *)(iVar3 + 0x4e8) + (uint)bVar1 * 0x1c + 0x16)) {
      piVar13[1] = -1;
    }
    else {
      piVar13[1] = (int)local_48;
      local_48 = (int *)((int)local_48 + 1);
    }
    iVar7 = (int)*(short *)(this + 0x170);
    if (*(short *)(this + 0x170) != 0) {
      iVar7 = DAT_00213844;
    }
    piVar13 = piVar13 + 6;
    local_58[2] = iVar7;
    *local_58 = (int)local_5c;
    local_58[3] = iVar7;
    local_58[4] = iVar7;
    local_58[5] = iVar7;
    local_5c = (int *)((int)local_5c + 1);
    String::~String((String *)aRStack_34);
    local_58 = local_58 + 6;
  }
  iVar7 = 0;
  piVar13 = __ptr;
  local_5c = __ptr_00;
  do {
    if (*(int *)(*(int *)(this + 0x150) + 0x14) <= iVar7) {
      iVar3 = SmDev();
      iVar7 = DAT_0021384c;
      uVar8 = *(undefined4 *)(DAT_00213848 + iVar3 * 4 + 0x213890);
      local_58 = (int *)0x0;
      local_40 = __ptr_00;
      for (local_5c = (int *)0x0; (int)local_5c < *(int *)(*(int *)(this + 0x150) + 0x14);
          local_5c = (int *)((int)local_5c + 1)) {
        if (local_40[1] != -1) {
          iVar12 = local_40[1] * 4;
          (**(code **)(**(int **)(*(int *)(this + 0xa4) + iVar12) + 0x14))
                    (*(int **)(*(int *)(this + 0xa4) + iVar12),local_58,uVar8);
          piVar13 = *(int **)(*(int *)(this + 0x74) + iVar12);
          pcVar9 = *(code **)(*piVar13 + 0x14);
          iVar11 = *(int *)(*(int *)(*(int *)(this + 0xa4) + iVar12) + 0xc);
          iVar3 = SmDev();
          (*pcVar9)(piVar13,iVar11 / 2,*(undefined4 *)(iVar7 + iVar3 * 4 + 0x2138b0));
          iVar3 = *(int *)(*(int *)(this + 0x74) + iVar12);
          (**(code **)(**(int **)(*(int *)(this + 0x80) + iVar12) + 0x14))
                    (*(int **)(*(int *)(this + 0x80) + iVar12),*(undefined4 *)(iVar3 + 4),
                     *(int *)(iVar3 + 8) - *(int *)(iVar3 + 0x10) / 2);
          piVar13 = *(int **)(*(int *)(this + 0x8c) + iVar12);
          pcVar9 = *(code **)(*piVar13 + 0x14);
          uVar10 = *(undefined4 *)(*(int *)(*(int *)(this + 0x74) + iVar12) + 4);
          iVar3 = SmDev();
          (*pcVar9)(piVar13,uVar10,*(undefined4 *)(DAT_00213944 + iVar3 * 4 + 0x2138ec));
          iVar3 = *(int *)(*(int *)(this + 0x74) + iVar12);
          (**(code **)(**(int **)(*(int *)(this + 0x98) + iVar12) + 0x14))
                    (*(int **)(*(int *)(this + 0x98) + iVar12),
                     *(int *)(iVar3 + 0xc) / 2 + *(int *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
          local_58 = (int *)((int)local_58 +
                            *(int *)(*(int *)(*(int *)(this + 0xa4) + iVar12) + 0xc));
        }
        local_40 = local_40 + 6;
      }
      free(__ptr_00);
      free(__ptr);
      return;
    }
    local_48 = __ptr_00;
    if (*(short *)(this + 0x170) == 0) {
      for (iVar3 = 0; iVar3 <= iVar7; iVar3 = iVar3 + 1) {
        iVar11 = *(int *)(this + 0x16c);
        if (iVar11 == 1) {
          if (piVar13[2] <= local_48[2]) goto LAB_002136c0;
          iVar12 = 0;
          for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
            puVar4 = (undefined4 *)((int)local_5c + iVar12);
            puVar4[6] = *puVar4;
            puVar4[7] = puVar4[1];
            puVar4[8] = puVar4[2];
            puVar4[9] = puVar4[3];
            puVar4[10] = puVar4[4];
            puVar4[0xb] = puVar4[5];
          }
          goto LAB_00213784;
        }
        if (iVar11 == 2) {
          if (piVar13[3] <= local_48[3]) goto LAB_002136c0;
          iVar12 = 0;
          for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
            puVar4 = (undefined4 *)((int)local_5c + iVar12);
            puVar4[6] = *puVar4;
            puVar4[7] = puVar4[1];
            puVar4[8] = puVar4[2];
            puVar4[9] = puVar4[3];
            puVar4[10] = puVar4[4];
            puVar4[0xb] = puVar4[5];
          }
          goto LAB_002137d2;
        }
        if (iVar11 != 3) {
          if (iVar11 == 4) {
            if (local_48[5] < piVar13[5]) {
              iVar12 = 0;
              for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
                puVar4 = (undefined4 *)((int)local_5c + iVar12);
                puVar4[6] = *puVar4;
                puVar4[7] = puVar4[1];
                puVar4[8] = puVar4[2];
                puVar4[9] = puVar4[3];
                puVar4[10] = puVar4[4];
                puVar4[0xb] = puVar4[5];
              }
              goto LAB_002137d2;
            }
            goto LAB_002136c0;
          }
          iVar3 = piVar13[1];
          iVar11 = piVar13[2];
          *local_5c = *piVar13;
          local_5c[1] = iVar3;
          local_5c[2] = iVar11;
          iVar3 = piVar13[4];
          iVar11 = piVar13[5];
          local_5c[3] = piVar13[3];
          local_5c[4] = iVar3;
          local_5c[5] = iVar11;
          break;
        }
        if (local_48[4] < piVar13[4]) {
          iVar12 = 0;
          for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
            puVar4 = (undefined4 *)((int)local_5c + iVar12);
            puVar4[6] = *puVar4;
            puVar4[7] = puVar4[1];
            puVar4[8] = puVar4[2];
            puVar4[9] = puVar4[3];
            puVar4[10] = puVar4[4];
            puVar4[0xb] = puVar4[5];
          }
          goto LAB_00213784;
        }
LAB_002136c0:
        local_48 = local_48 + 6;
      }
    }
    else {
      for (iVar3 = 0; iVar3 <= iVar7; iVar3 = iVar3 + 1) {
        iVar11 = *(int *)(this + 0x16c);
        if (iVar11 == 1) {
          if (local_48[2] <= piVar13[2]) goto LAB_00213802;
          iVar12 = 0;
          for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
            puVar4 = (undefined4 *)((int)local_5c + iVar12);
            puVar4[6] = *puVar4;
            puVar4[7] = puVar4[1];
            puVar4[8] = puVar4[2];
            puVar4[9] = puVar4[3];
            puVar4[10] = puVar4[4];
            puVar4[0xb] = puVar4[5];
          }
LAB_00213784:
          iVar3 = piVar13[1];
          iVar11 = piVar13[2];
          *local_48 = *piVar13;
          local_48[1] = iVar3;
          local_48[2] = iVar11;
          iVar3 = piVar13[4];
          iVar11 = piVar13[5];
          local_48[3] = piVar13[3];
          local_48[4] = iVar3;
          local_48[5] = iVar11;
          break;
        }
        if (iVar11 == 2) {
          if (piVar13[3] < local_48[3]) {
            iVar12 = 0;
            for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
              puVar4 = (undefined4 *)((int)local_5c + iVar12);
              puVar4[6] = *puVar4;
              puVar4[7] = puVar4[1];
              puVar4[8] = puVar4[2];
              puVar4[9] = puVar4[3];
              puVar4[10] = puVar4[4];
              puVar4[0xb] = puVar4[5];
            }
LAB_002137d2:
            iVar3 = piVar13[1];
            iVar11 = piVar13[2];
            *local_48 = *piVar13;
            local_48[1] = iVar3;
            local_48[2] = iVar11;
            iVar3 = piVar13[4];
            iVar11 = piVar13[5];
            local_48[3] = piVar13[3];
            local_48[4] = iVar3;
            local_48[5] = iVar11;
            break;
          }
          goto LAB_00213802;
        }
        if (iVar11 == 3) {
          if (piVar13[4] < local_48[4]) {
            iVar12 = 0;
            for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
              puVar4 = (undefined4 *)((int)local_5c + iVar12);
              puVar4[6] = *puVar4;
              puVar4[7] = puVar4[1];
              puVar4[8] = puVar4[2];
              puVar4[9] = puVar4[3];
              puVar4[10] = puVar4[4];
              puVar4[0xb] = puVar4[5];
            }
            goto LAB_00213784;
          }
        }
        else {
          if (iVar11 != 4) {
            uVar5 = (*(int *)(*(int *)(this + 0x150) + 0x14) - iVar7) - 1;
            piVar6 = __ptr_00 + (uVar5 & (int)~uVar5 >> 0x1f) * 6;
            iVar3 = piVar13[1];
            iVar11 = piVar13[2];
            *piVar6 = *piVar13;
            piVar6[1] = iVar3;
            piVar6[2] = iVar11;
            iVar3 = piVar13[4];
            iVar11 = piVar13[5];
            piVar6[3] = piVar13[3];
            piVar6[4] = iVar3;
            piVar6[5] = iVar11;
            break;
          }
          if (piVar13[5] < local_48[5]) {
            iVar12 = 0;
            for (iVar11 = iVar7; iVar12 = iVar12 + -0x18, iVar3 < iVar11; iVar11 = iVar11 + -1) {
              puVar4 = (undefined4 *)((int)local_5c + iVar12);
              puVar4[6] = *puVar4;
              puVar4[7] = puVar4[1];
              puVar4[8] = puVar4[2];
              puVar4[9] = puVar4[3];
              puVar4[10] = puVar4[4];
              puVar4[0xb] = puVar4[5];
            }
            goto LAB_002137d2;
          }
        }
LAB_00213802:
        local_48 = local_48 + 6;
      }
    }
    iVar7 = iVar7 + 1;
    piVar13 = piVar13 + 6;
    local_5c = local_5c + 6;
  } while( true );
}


