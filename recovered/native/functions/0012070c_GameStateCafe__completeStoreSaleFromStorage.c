/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012070c GameStateCafe::completeStoreSaleFromStorage */

/* GameStateCafe::completeStoreSaleFromStorage(GameStateCafe*) */

undefined8 GameStateCafe::completeStoreSaleFromStorage(GameStateCafe *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  Vector<int> *this;
  int iVar5;
  
  iVar1 = DAT_00120814;
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x34);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x38) != '\0') {
    iVar4 = **(int **)(DAT_00120810 + 0x120724) * iVar4;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  uVar2 = __floatsisf(*(undefined4 *)(iVar5 + DAT_00120814));
  uVar3 = __floatsisf(iVar4);
  uVar3 = __mulsf3(uVar3,**(undefined4 **)(DAT_00120818 + 0x120740));
  __addsf3(uVar2,uVar3);
  uVar3 = __fixsfsi();
  *(undefined4 *)(iVar5 + iVar1) = uVar3;
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x44) == '\x0e') {
    checkForTombstones(param_1);
    resetTombstone(param_1,-*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x24));
  }
  iVar1 = DAT_0012081c;
  this = (Vector<int> *)(*(int *)(param_1 + 0x14) + 0xfc);
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x24);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x44) == '\x06') {
    Vector<int>::lastIndexOf(this,iVar4);
    Vector<int>::removeElementAt((int)this);
    Storage::updateItem(*(Storage **)(param_1 + 0xbc),
                        *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x24));
  }
  else {
    Vector<int>::lastIndexOf(this,iVar4);
    Vector<int>::removeElementAt((int)this);
    Storage::updateItem(*(Storage **)(param_1 + 0xbc),
                        *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x24));
    checkForTombstones(param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))(*(int **)(param_1 + 0xbc),1);
  (**(code **)(**(int **)(param_1 + 0x84) + 0x20))(*(int **)(param_1 + 0x84),1);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1) = 1;
  exitEditModes();
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return CONCAT44(uVar2,param_1);
}


