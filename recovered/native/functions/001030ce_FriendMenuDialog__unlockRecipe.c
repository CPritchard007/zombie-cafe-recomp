/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001030ce FriendMenuDialog::unlockRecipe */

/* FriendMenuDialog::unlockRecipe(unsigned char, unsigned char) */

undefined8 __thiscall
FriendMenuDialog::unlockRecipe(FriendMenuDialog *this,uchar param_1,uchar param_2)

{
  ushort uVar1;
  CapcomOrderableList<RecipeAndVariants*> *pCVar2;
  uchar *puVar3;
  void *__s;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar6 = (uint)param_2;
  uVar5 = (uint)param_1;
  iVar8 = uVar5 * 10 + uVar6;
  iVar7 = iVar8 >> 3;
  iVar9 = 0;
  if (-1 < ((int)(uint)*(byte *)(*(int *)(*(int *)(this + 100) + 0x1c) + iVar7) >>
           (iVar8 + iVar7 * -8 & 0xffU)) << 0x1f) goto LAB_001031ee;
  for (; pCVar2 = *(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x9c),
      iVar9 < *(int *)(pCVar2 + 0x14); iVar9 = iVar9 + 1) {
    pbVar4 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get(pCVar2,iVar9);
    if (*pbVar4 == uVar5) {
      iVar8 = 0;
      iVar7 = *(int *)(pbVar4 + 8) + 1;
      goto LAB_0010314a;
    }
  }
  puVar3 = (uchar *)operator_new(0x10);
  puVar3[4] = '\n';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  __s = operator_new__(10);
  *(void **)(puVar3 + 0xc) = __s;
  memset(__s,0,*(size_t *)(puVar3 + 4));
  puVar3[8] = 0xff;
  puVar3[9] = 0xff;
  puVar3[10] = 0xff;
  puVar3[0xb] = 0xff;
  *puVar3 = param_1;
  Vector<bool>::addElement((Vector<bool> *)(puVar3 + 4),(bool)('\x01' - (uVar6 == 0)));
  CapcomOrderableList<RecipeAndVariants*>::addOrdered(*(RecipeAndVariants **)(this + 0x9c));
  uVar1 = *(ushort *)(this + 0xa2);
  if (uVar1 != 0xff) {
    for (iVar7 = 0; pCVar2 = *(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x9c),
        iVar7 < *(int *)(pCVar2 + 0x14); iVar7 = iVar7 + 1) {
      pbVar4 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get(pCVar2,iVar7);
      if (*pbVar4 == uVar1) {
        setPage(this,iVar7 >> 1);
        break;
      }
    }
  }
  goto LAB_001031d6;
LAB_0010314a:
  if (iVar7 <= iVar8) goto code_r0x0010314e;
  if (*(byte *)(*(int *)(pbVar4 + 0xc) + iVar8) == uVar6) goto LAB_001031ee;
  if (uVar6 < *(byte *)(*(int *)(pbVar4 + 0xc) + iVar8)) {
    if (-1 < iVar8) {
      if (iVar7 < *(int *)(pbVar4 + 4)) {
        Vector<bool>::move((Vector<bool> *)(pbVar4 + 4),iVar8,1);
      }
      else {
        Vector<bool>::resize((Vector<bool> *)(pbVar4 + 4),*(int *)(pbVar4 + 8) << 1,iVar8);
      }
      *(int *)(pbVar4 + 8) = *(int *)(pbVar4 + 8) + 1;
      *(char *)(*(int *)(pbVar4 + 0xc) + iVar8) = '\x01' - (uVar6 == 0);
    }
    goto LAB_001031d6;
  }
  iVar8 = iVar8 + 1;
  goto LAB_0010314a;
code_r0x0010314e:
  Vector<bool>::addElement((Vector<bool> *)(pbVar4 + 4),(bool)('\x01' - (uVar6 == 0)));
LAB_001031d6:
  setPage(this,(uint)(byte)this[0xa0]);
LAB_001031ee:
  return CONCAT44(this + 0x9c,uVar5);
}


