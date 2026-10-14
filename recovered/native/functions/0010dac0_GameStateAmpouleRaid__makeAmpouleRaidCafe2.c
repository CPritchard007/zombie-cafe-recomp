/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010dac0 GameStateAmpouleRaid::makeAmpouleRaidCafe2 */

/* GameStateAmpouleRaid::makeAmpouleRaidCafe2() */

void __thiscall GameStateAmpouleRaid::makeAmpouleRaidCafe2(GameStateAmpouleRaid *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  Furniture *this_00;
  Cafe *this_01;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iStack_4;
  
  iVar2 = DAT_0010dd88;
  *(int *)(&stack0xfffffff0 + DAT_0010dd88) = DAT_0010dd8c + 0x10dad0;
  puVar7 = *(undefined4 **)(DAT_0010dd8c + 0x10dad0 + DAT_0010dd90);
  iVar9 = 0;
  *(undefined4 *)(&stack0x00000310 + DAT_0010dd88) = *puVar7;
  colosseumLayouts::load();
  colosseumItems::load();
  psVar5 = *(short **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dd94);
  *(undefined4 **)(&stack0x00000010 + iVar2) = puVar7;
  if (0 < *psVar5) {
    iVar9 = **(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dd98);
  }
  iVar8 = *(int *)(this + 0xc);
  uVar3 = Cafe::createForNewColosseum(*(int *)(iVar9 + 0xc),*(int *)(iVar9 + 0x10));
  *(undefined4 *)(this + 100) = uVar3;
  *(undefined4 *)(iVar8 + 0x7e8) = uVar3;
  iVar8 = DAT_0010dd9c;
  iVar10 = *(int *)(*(int *)(*(int *)(this + 100) + 0x94) + 0x370);
  memcpy(&stack0x000002f8 + iVar2,(void *)(DAT_0010dd9c + 0x10db66),10);
  memcpy(&stack0x00000304 + iVar2,(void *)(iVar8 + 0x10db70),0xb);
  for (iVar8 = 0; iVar6 = *(int *)(iVar9 + 0xc), iVar8 < iVar6; iVar8 = iVar8 + 1) {
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(this + 100);
    iVar6 = Cafe::diamondToStaggeredCoords
                      ((**(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda0) - iVar6) +
                       iVar8,**(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda4) + 1);
    iVar6 = *(int *)(*(int *)(((iVar6 >> 0x10) +
                              **(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda8) *
                              (int)(short)iVar6) * 4 + **(int **)(&stack0xfffffff4 + iVar2)) + 0xc);
    if (((&stack0x000002f8)[iVar8 + iVar2] == '\0') || ((&stack0x000002f8)[iVar8 + iVar2] == '\x01')
       ) {
      *(undefined2 *)(iVar6 + 0x38) = *(undefined2 *)(iVar10 + 0x3c);
      *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar10 + 0x48);
    }
  }
  for (iVar8 = 0; iVar6 = *(int *)(iVar9 + 0x10), iVar8 < iVar6; iVar8 = iVar8 + 1) {
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(this + 100);
    iVar6 = Cafe::diamondToStaggeredCoords
                      (**(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda0) + -1,
                       (iVar6 + **(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda4)) -
                       iVar8);
    iVar6 = *(int *)(*(int *)(((iVar6 >> 0x10) +
                              **(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda8) *
                              (int)(short)iVar6) * 4 + **(int **)(&stack0xfffffff4 + iVar2)) + 0x10)
    ;
    if (((&stack0x00000304)[iVar8 + iVar2] == '\0') || ((&stack0x00000304)[iVar8 + iVar2] == '\x01')
       ) {
      *(undefined2 *)(iVar6 + 0x38) = *(undefined2 *)(iVar10 + 0x3c);
      *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar10 + 0x48);
    }
  }
  memcpy(&stack0x0000001c + iVar2,(void *)(DAT_0010ddac + 0x10dc50),0xdc);
  *(undefined1 **)(&stack0xfffffff4 + iVar2) = &stack0x0000001c + iVar2;
  for (iVar8 = 0; iVar8 < *(int *)(iVar9 + 0xc); iVar8 = iVar8 + 1) {
    for (iVar10 = 0; iVar6 = *(int *)(iVar9 + 0x10), iVar10 < iVar6; iVar10 = iVar10 + 1) {
      *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(this + 100);
      *(undefined4 *)(&stack0xfffffff8 + iVar2) =
           *(undefined4 *)
            (*(short *)(*(int *)(&stack0xfffffff4 + iVar2) + iVar10 * 0x14) * 4 +
            *(int *)(*(int *)((int)&iStack_4 + iVar2) + 0x94));
      iVar6 = Cafe::diamondToStaggeredCoords
                        ((**(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda0) -
                         *(int *)(iVar9 + 0xc)) + iVar8,
                         (iVar6 + **(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda4)) -
                         iVar10);
      Cafe::setTileImageIndex
                (*(Cafe **)((int)&iStack_4 + iVar2),
                 (iVar6 >> 0x10) +
                 (int)(short)iVar6 * **(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda8),
                 (int)*(short *)(*(int *)(&stack0xfffffff8 + iVar2) + 0x3c),
                 *(long *)(*(int *)(&stack0xfffffff8 + iVar2) + 0x48));
    }
    *(int *)(&stack0xfffffff4 + iVar2) = *(int *)(&stack0xfffffff4 + iVar2) + 2;
  }
  memcpy(&stack0x000000f8 + iVar2,(void *)(DAT_0010ddb0 + 0x10dcb6),0x200);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) =
       *(undefined4 *)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda0);
  do {
    uVar3 = *(undefined4 *)(&stack0x000000f8 + *(int *)(&stack0xfffffff4 + iVar2) + iVar2);
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = **(undefined4 **)((int)&iStack_4 + iVar2);
    *(undefined4 *)(&stack0x00000000 + iVar2) = uVar3;
    puVar7 = *(undefined4 **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda4);
    uVar3 = *puVar7;
    iVar9 = *(int *)(&stack0xfffffff4 + iVar2) + iVar2;
    iVar8 = *(int *)(&stack0x00000104 + iVar9);
    iVar10 = *(int *)(*(int *)(this + 100) + 0x94);
    *(undefined4 *)(&stack0x00000008 + iVar2) = *(undefined4 *)(&stack0x000000fc + iVar9);
    uVar4 = *(undefined4 *)(iVar8 * 4 + iVar10);
    *(undefined4 *)(&stack0x00000004 + iVar2) = uVar3;
    *(undefined4 *)(&stack0x0000000c + iVar2) = uVar4;
    this_00 = (Furniture *)operator_new(100);
    *(undefined4 **)(&stack0x00000018 + iVar2) = puVar7;
    *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)((int)&iStack_4 + iVar2);
    Furniture::Furniture(this_00,*(FurnitureData **)(&stack0x0000000c + iVar2));
    uVar3 = Cafe::diamondToStaggeredCoords
                      (*(int *)(&stack0xfffffff8 + iVar2) - *(int *)(&stack0x00000000 + iVar2),
                       *(int *)(&stack0x00000004 + iVar2) + *(int *)(&stack0x00000008 + iVar2));
    piVar11 = *(int **)(*(int *)(&stack0xfffffff0 + iVar2) + DAT_0010dda8);
    sVar1 = (short)((uint)uVar3 >> 0x10) + (short)uVar3 * (short)*piVar11;
    *(short *)(this_00 + 0x2c) = sVar1;
    this_01 = *(Cafe **)(this + 100);
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = *(undefined4 *)(*(int *)this_00 + 0xc);
    uVar3 = Cafe::indexToWorldCoordsCenter(this_01,(int)sVar1);
    (**(code **)(&stack0xfffffff8 + iVar2))(this_00,uVar3);
    iVar9 = *(int *)(&stack0x00000100 + iVar9);
    if ((iVar9 != 0) && (iVar9 != 1)) {
      if (iVar9 == 2) {
        iVar9 = 3;
      }
      else {
        iVar9 = 2;
      }
    }
    Furniture::setOrientation(this_00,(uchar)iVar9);
    this_00[0x54] = (Furniture)0x0;
    Cafe::addFurniture(*(Cafe **)(this + 100),this_00);
    *(int *)(&stack0xfffffff4 + iVar2) = *(int *)(&stack0xfffffff4 + iVar2) + 0x10;
  } while (*(int *)(&stack0xfffffff4 + iVar2) != 0x200);
  iVar9 = Cafe::diamondToStaggeredCoords
                    (**(int **)(&stack0x00000014 + iVar2) + -9,
                     **(int **)(&stack0x00000018 + iVar2) + 10);
  *(int *)(this + 0x144) = (iVar9 >> 0x10) + *piVar11 * (int)(short)iVar9;
  if (*(int *)(&stack0x00000310 + iVar2) != **(int **)(&stack0x00000010 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


