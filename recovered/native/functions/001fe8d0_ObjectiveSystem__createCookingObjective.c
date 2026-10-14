/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe8d0 ObjectiveSystem::createCookingObjective */

/* ObjectiveSystem::createCookingObjective() */

undefined2 * __thiscall ObjectiveSystem::createCookingObjective(ObjectiveSystem *this)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  Recipe *this_00;
  uint uVar5;
  uint uVar6;
  int extraout_r1;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  Vector<int> aVStack_30 [4];
  int local_2c;
  void *local_28;
  Vector<int> aVStack_24 [8];
  void *local_1c;
  
  iVar1 = CapcomApp::getInstance();
  iVar9 = *(int *)(iVar1 + 4);
  puVar2 = (undefined2 *)operator_new(0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  Vector<int>::Vector(aVStack_30);
  Vector<int>::Vector(aVStack_24);
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 == -1) {
    iVar1 = *(int *)**(undefined4 **)(DAT_001fea58 + 0x1fe908);
  }
  uVar3 = __divsi3(iVar1,1000);
  iVar1 = 0;
  do {
    if ((int)(uint)*(byte *)(iVar9 + DAT_001fea60) <= iVar1) {
      if (local_2c + 1 < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = arc4random();
        __aeabi_idivmod(iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f,local_2c + 1);
        iVar1 = extraout_r1;
      }
      iVar10 = *(int *)((int)local_28 + iVar1 * 4);
      uVar7 = *(undefined4 *)((int)local_1c + iVar1 * 4);
      *puVar2 = 4;
      uVar11 = **(undefined4 **)(DAT_001fea64 + 0x1fe9e6);
      uVar7 = Recipe::getCookTimeSeconds
                        ((Recipe *)(*(int *)(iVar9 + 0x4e8) + iVar10 * 0x1c),(uchar)uVar7);
      iVar9 = __divsi3(uVar11,uVar7);
      iVar1 = 1;
      if ((0 < iVar9) && (iVar1 = iVar9, **(int **)(DAT_001fea68 + 0x1fea02) < iVar9)) {
        iVar1 = **(int **)(DAT_001fea68 + 0x1fea02);
      }
      *(int *)(puVar2 + 4) = iVar1;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[6] = (short)iVar10;
      if (local_1c != (void *)0x0) {
        operator_delete__(local_1c);
      }
      if (local_28 != (void *)0x0) {
        operator_delete__(local_28);
      }
      return puVar2;
    }
    iVar10 = 0;
    do {
      iVar4 = iVar10 + iVar1 * 10;
      iVar8 = iVar4 >> 3;
      if ((((int)(uint)*(byte *)(*(int *)(iVar9 + 0x1c) + iVar8) >> (iVar4 + iVar8 * -8 & 0xffU) &
           1U) != 0) &&
         (this_00 = (Recipe *)(*(int *)(iVar9 + 0x4e8) + iVar1 * 0x1c),
         (int)(uint)(byte)this_00[0x16] <= *(int *)(iVar9 + 0x680))) {
        uVar5 = Recipe::getCookTimeSeconds(this_00,(uchar)iVar10);
        uVar6 = **(uint **)(DAT_001fea5c + 0x1fe974);
        iVar4 = (((int)uVar3 >> 0x1f) - (*(uint **)(DAT_001fea5c + 0x1fe974))[1]) -
                (uint)(uVar3 < uVar6);
        if (((int)uVar5 >> 0x1f <= iVar4) &&
           (((int)uVar5 >> 0x1f != iVar4 || (uVar5 <= uVar3 - uVar6)))) {
          Vector<int>::addElement(aVStack_30,iVar1);
          Vector<int>::addElement(aVStack_24,iVar10);
          break;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 10);
    iVar1 = iVar1 + 1;
  } while( true );
}


