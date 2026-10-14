/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001023b6 FriendMenuDialog::setPage */

/* FriendMenuDialog::setPage(int) */

undefined8 __thiscall FriendMenuDialog::setPage(FriendMenuDialog *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  
  iVar3 = 0;
  if ((-1 < param_1) &&
     (iVar7 = *(int *)(*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x9c) + 0x14) + -1 >> 1,
     iVar3 = param_1, iVar7 < param_1)) {
    iVar3 = iVar7;
  }
  iVar9 = iVar3 * 2;
  this[0xa0] = SUB41(iVar3,0);
  pbVar2 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                             (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x9c),iVar9);
  bVar1 = *pbVar2;
  iVar6 = *(int *)(this + 0xa8);
  iVar7 = Vector<bool>::indexOf
                    ((Vector<bool> *)(pbVar2 + 4),
                     (bool)('\x01' - (*(char *)(iVar6 + (uint)bVar1) == '\0')));
  if (iVar7 < 0) {
    *(char *)(iVar6 + (uint)bVar1) = **(char **)(pbVar2 + 0xc);
  }
  iVar7 = (uint)*pbVar2 * 0x1c;
  FriendMenuElement::setRecipe
            (*(FriendMenuElement **)(this + 0x74),
             (Recipe *)(iVar7 + *(int *)(*(int *)(this + 100) + 0x4e8)),
             *(uchar *)(*(int *)(this + 0xa8) + (uint)*pbVar2));
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),iVar3 != 0);
  (**(code **)(**(int **)(this + 0x88) + 0x20))(*(int **)(this + 0x88),1 < *(int *)(pbVar2 + 8) + 1)
  ;
  (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),1 < *(int *)(pbVar2 + 8) + 1)
  ;
  if (iVar9 + 1 < *(int *)(*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x9c) + 0x14)) {
    pbVar2 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                               (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x9c),iVar9 + 1
                               );
    bVar1 = *pbVar2;
    iVar6 = *(int *)(this + 0xa8);
    iVar3 = Vector<bool>::indexOf
                      ((Vector<bool> *)(pbVar2 + 4),
                       (bool)('\x01' - (*(char *)(iVar6 + (uint)bVar1) == '\0')));
    if (iVar3 < 0) {
      *(char *)(iVar6 + (uint)bVar1) = **(char **)(pbVar2 + 0xc);
    }
    FriendMenuElement::setRecipe
              (*(FriendMenuElement **)(this + 0x78),
               (Recipe *)(*(int *)(*(int *)(this + 100) + 0x4e8) + (uint)*pbVar2 * 0x1c),
               *(uchar *)(*(int *)(this + 0xa8) + (uint)*pbVar2));
    (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),1);
    (**(code **)(**(int **)(this + 0x90) + 0x20))
              (*(int **)(this + 0x90),1 < *(int *)(pbVar2 + 8) + 1);
    piVar4 = *(int **)(this + 0x94);
    bVar5 = 1 < *(int *)(pbVar2 + 8) + 1;
    pcVar8 = *(code **)(*piVar4 + 0x20);
  }
  else {
    (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
    (**(code **)(**(int **)(this + 0x90) + 0x20))(*(int **)(this + 0x90),0);
    piVar4 = *(int **)(this + 0x94);
    bVar5 = false;
    pcVar8 = *(code **)(*piVar4 + 0x20);
  }
  (*pcVar8)(piVar4,bVar5);
  (**(code **)(**(int **)(this + 0x80) + 0x20))
            (*(int **)(this + 0x80),iVar9 + 2 < *(int *)(*(int *)(this + 0x9c) + 0x14));
  return CONCAT44(iVar7,this);
}


