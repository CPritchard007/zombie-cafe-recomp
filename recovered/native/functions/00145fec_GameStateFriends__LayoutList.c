/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00145fec GameStateFriends::LayoutList */

/* GameStateFriends::LayoutList() */

void __thiscall GameStateFriends::LayoutList(GameStateFriends *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_00;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  int local_30;
  int local_28;
  
  iVar9 = DAT_00146198 + 0x145ff8;
  local_30 = 0;
  for (local_28 = 0; local_28 < *(int *)(this + 0x78) + 1; local_28 = local_28 + 1) {
    puVar7 = (uint *)(*(int *)(this + 0x7c) + local_28 * 0x18);
    piVar5 = (int *)puVar7[1];
    piVar3 = (int *)puVar7[4];
    piVar10 = (int *)puVar7[2];
    piVar6 = (int *)puVar7[5];
    piVar11 = (int *)puVar7[3];
    iVar1 = CCServer::IsFriendBanned(*(void **)(*(int *)(this + 0xc) + DAT_0014619c),*puVar7);
    bVar12 = iVar1 == 0;
    if (bVar12) {
      iVar1 = *(int *)(this + 0x6c);
    }
    else {
      iVar1 = *(int *)(this + 0x70);
    }
    piVar3[0x18] = iVar1;
    if (bVar12) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = **(undefined4 **)(iVar9 + DAT_001461a0);
    }
    (**(code **)(*piVar10 + 0x24))(piVar10,uVar4);
    if (bVar12) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = **(undefined4 **)(iVar9 + DAT_001461a0);
    }
    (**(code **)(*piVar11 + 0x24))(piVar11,uVar4);
    pcVar8 = *(code **)(*piVar3 + 0x14);
    iVar1 = SmDev();
    (*pcVar8)(piVar3,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001461a4)),
              local_30 + **(int **)(iVar9 + DAT_001461a8));
    pcVar8 = *(code **)(*piVar10 + 0x14);
    iVar1 = SmDev();
    (*pcVar8)(piVar10,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001461ac)),
              local_30 + **(int **)(iVar9 + DAT_001461b0));
    pcVar8 = *(code **)(*piVar11 + 0x14);
    iVar1 = SmDev();
    (*pcVar8)(piVar11,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001461b4)),
              local_30 + **(int **)(iVar9 + DAT_001461b8));
    pcVar8 = *(code **)(*piVar6 + 0x14);
    iVar1 = SmDev();
    uVar4 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001461bc));
    iVar1 = SmDev();
    (*pcVar8)(piVar6,uVar4,local_30 + *(int *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001461c0)));
    if (piVar5 != (int *)0x0) {
      pcVar8 = *(code **)(*piVar5 + 0x14);
      iVar1 = SmDev();
      (*pcVar8)(piVar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001461c4)),
                local_30 + **(int **)(iVar9 + DAT_001461c8));
    }
    uVar4 = __floatsisf(local_30);
    uVar2 = __floatsisf(**(undefined4 **)(iVar9 + DAT_001461cc));
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x98));
    __addsf3(uVar4,uVar2);
    local_30 = __fixsfsi();
    piVar3 = *(int **)(this + 0x3c);
    (**(code **)(*piVar3 + 0x18))(piVar3,piVar3[3],local_30);
  }
  uVar2 = *(undefined4 *)(this + 0x2c);
  uVar4 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x20),
                     *(int *)(*(ScreenElement **)(this + 0x20) + 0xc) >> 1,0);
  FUN_00145f84(uVar2,uVar4);
  this_00 = *(ScreenElement **)(this + 0x20);
  uVar2 = *(undefined4 *)(this + 0x30);
  uVar4 = ScreenElement::localToParentCoords
                    (this_00,*(int *)(this_00 + 0xc) >> 1,*(int *)(this_00 + 0x10));
  FUN_00145f84(uVar2,uVar4);
  return;
}


