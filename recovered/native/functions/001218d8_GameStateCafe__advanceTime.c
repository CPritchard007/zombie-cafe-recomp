/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001218d8 GameStateCafe::advanceTime */

/* GameStateCafe::advanceTime(long long) */

void GameStateCafe::advanceTime(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  GameStateCafe *in_r0;
  undefined4 uVar3;
  uint uVar4;
  CapcomOrderableList<CafeObject*> *this;
  void *pvVar5;
  CapcomOrderableList<Furniture*> *this_00;
  Furniture *pFVar6;
  Character *pCVar7;
  uint uVar8;
  uint uVar9;
  CapcomOrderableListNode *pCVar10;
  uint uVar11;
  int *piVar12;
  int in_r2;
  int iVar13;
  bool bVar14;
  char cVar15;
  undefined4 in_r3;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  CapcomOrderableListNode *pCVar23;
  bool bVar24;
  float fVar25;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar26;
  float extraout_s1_01;
  float extraout_s2;
  undefined8 uVar27;
  int local_40;
  int local_3c;
  undefined4 local_28;
  
  iVar20 = DAT_00121c20 + 0x1218e6;
  uVar3 = __floatdisf(in_r2,in_r3);
  __mulsf3(uVar3,**(undefined4 **)(iVar20 + DAT_00121c24));
  uVar4 = __fixsfsi();
  if ((*(Cafe **)(in_r0 + 0x14))[100] == (Cafe)0x0) {
    iVar17 = *(int *)(in_r0 + 0xc);
    local_28 = *(undefined4 *)(iVar17 + 0x688);
    puVar21 = *(undefined4 **)(iVar20 + DAT_00121c28);
    uVar3 = __floatsisf(uVar4);
    uVar3 = __mulsf3(uVar3,*puVar21);
    uVar3 = __subsf3(local_28,uVar3);
    *(undefined4 *)(iVar17 + 0x688) = uVar3;
    iVar22 = *(int *)(in_r0 + 0xc);
    uVar3 = *(undefined4 *)(iVar22 + 0x688);
    iVar17 = __aeabi_fcmplt(uVar3,0);
    if (iVar17 == 0) {
      iVar17 = __aeabi_fcmpgt(uVar3,0x3f800000);
      if (iVar17 != 0) {
        uVar3 = 0x3f800000;
      }
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(iVar22 + 0x688) = uVar3;
    goto LAB_00121d98;
  }
  this = (CapcomOrderableList<CafeObject*> *)
         Cafe::createDistanceSortedObjectList(*(Cafe **)(in_r0 + 0x14),'\x01',0);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  while (iVar17 = CapcomOrderableList<CafeObject*>::nextItem(this), iVar17 != 0) {
    iVar18 = *(int *)(iVar17 + 0x38);
    iVar22 = (int)*(short *)(iVar18 + 0x4c);
    if (0 < iVar22) {
      uVar26 = __muldi3(iVar22,iVar22 >> 0x1f,in_r2,in_r3);
      iVar22 = __aeabi_ldivmod((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),DAT_00121c18,
                               DAT_00121c1c);
      iVar22 = iVar22 + *(short *)(iVar17 + 0x42);
      if (*(short *)(iVar18 + 0x4e) < iVar22) {
        iVar22 = (int)*(short *)(iVar18 + 0x4e);
      }
      *(short *)(iVar17 + 0x42) = (short)iVar22;
    }
    iVar22 = (int)*(short *)(iVar18 + 0x50);
    if (0 < iVar22) {
      uVar26 = __muldi3(iVar22,iVar22 >> 0x1f,in_r2,in_r3);
      iVar22 = __aeabi_ldivmod((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),DAT_00121c18,
                               DAT_00121c1c);
      iVar22 = *(short *)(iVar17 + 0x44) + iVar22;
      if (*(short *)(iVar18 + 0x52) < iVar22) {
        iVar22 = (int)*(short *)(iVar18 + 0x52);
      }
      *(short *)(iVar17 + 0x44) = (short)iVar22;
    }
    uVar16 = __mulsf3(uVar3,*(undefined4 *)(iVar18 + 0x54));
    uVar16 = __divsf3(uVar16,DAT_00121c30);
    iVar17 = *(int *)(in_r0 + 0xc);
    uVar16 = __addsf3(*(undefined4 *)(iVar17 + 0x688),uVar16);
    *(undefined4 *)(iVar17 + 0x688) = uVar16;
  }
  pvVar5 = (void *)Cafe::createWallDecorationVector(*(Cafe **)(in_r0 + 0x14));
  for (iVar17 = 0; iVar17 < *(int *)((int)pvVar5 + 4) + 1; iVar17 = iVar17 + 1) {
    iVar18 = *(int *)(iVar17 * 4 + *(int *)((int)pvVar5 + 8));
    iVar13 = *(int *)(iVar18 + 0x38);
    iVar22 = (int)*(short *)(iVar13 + 0x4c);
    if (0 < iVar22) {
      uVar26 = __muldi3(iVar22,iVar22 >> 0x1f,in_r2,in_r3);
      iVar22 = __aeabi_ldivmod((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),DAT_00121c18,
                               DAT_00121c1c);
      iVar22 = iVar22 + *(short *)(iVar18 + 0x42);
      if (*(short *)(iVar13 + 0x4e) < iVar22) {
        iVar22 = (int)*(short *)(iVar13 + 0x4e);
      }
      *(short *)(iVar18 + 0x42) = (short)iVar22;
    }
    iVar22 = (int)*(short *)(iVar13 + 0x50);
    if (0 < iVar22) {
      uVar26 = __muldi3(iVar22,iVar22 >> 0x1f,in_r2,in_r3);
      iVar22 = __aeabi_ldivmod((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),DAT_00121c18,
                               DAT_00121c1c);
      iVar22 = iVar22 + *(short *)(iVar18 + 0x44);
      if (*(short *)(iVar13 + 0x52) < iVar22) {
        iVar22 = (int)*(short *)(iVar13 + 0x52);
      }
      *(short *)(iVar18 + 0x44) = (short)iVar22;
    }
    iVar22 = *(int *)(in_r0 + 0xc);
    uVar16 = __mulsf3(uVar3,*(undefined4 *)(iVar13 + 0x54));
    uVar16 = __divsf3(uVar16,DAT_00121c30);
    uVar16 = __addsf3(*(undefined4 *)(iVar22 + 0x688),uVar16);
    *(undefined4 *)(iVar22 + 0x688) = uVar16;
  }
  if (*(void **)((int)pvVar5 + 8) != (void *)0x0) {
    operator_delete__(*(void **)((int)pvVar5 + 8));
  }
  operator_delete(pvVar5);
  if (*(int *)(*(int *)(in_r0 + 0xc) + DAT_00121c34) < 0) {
    *(undefined4 *)(*(int *)(in_r0 + 0xc) + DAT_00121c34) = 0;
  }
  iVar22 = *(int *)(in_r0 + 0xc);
  uVar3 = *(undefined4 *)(iVar22 + 0x688);
  iVar17 = __aeabi_fcmplt(uVar3,0);
  if (iVar17 == 0) {
    iVar17 = __aeabi_fcmpgt(uVar3,0x3f800000);
    if (iVar17 != 0) {
      uVar3 = 0x3f800000;
    }
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(iVar22 + 0x688) = uVar3;
  if (*(int *)(this + 0x14) != 0) {
    pCVar10 = *(CapcomOrderableListNode **)(this + 8);
    while (pCVar10 != (CapcomOrderableListNode *)0x0) {
      pCVar23 = *(CapcomOrderableListNode **)(pCVar10 + 8);
      CapcomOrderableList<CafeObject*>::deleteNode(this,pCVar10);
      pCVar10 = pCVar23;
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(CapcomOrderableList<CafeObject*> **)(this + 0xc) = this;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  }
  operator_delete(this);
  local_28 = *(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x688);
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(in_r0 + 0x14),'\x04',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  local_3c = 0;
  while (pFVar6 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(this_00),
        pFVar6 != (Furniture *)0x0) {
    iVar17 = Cafe::getTableChairIsFacing(*(Cafe **)(in_r0 + 0x14),pFVar6);
    local_3c = local_3c + (uint)(iVar17 != 0);
  }
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  iVar17 = 0;
  local_40 = 0;
  for (iVar22 = 0; iVar22 < *(int *)(in_r0 + 0x20) + 1; iVar22 = iVar22 + 1) {
    pCVar7 = *(Character **)(*(int *)(iVar22 * 4 + *(int *)(in_r0 + 0x24)) + 0x8c);
    if (pCVar7[0x44] == (Character)0x1) {
      iVar17 = iVar17 + 1;
      uVar1 = *(ushort *)(*(int *)pCVar7 + DAT_00121c38);
      iVar18 = Character::getAdditionCharisma(pCVar7);
      iVar18 = (uint)uVar1 + iVar18;
      sVar2 = (short)iVar18;
      if (100 < iVar18 * 0x10000 >> 0x10) {
        sVar2 = 100;
      }
      local_40 = local_40 + sVar2;
    }
  }
  pCVar7 = *(Character **)(*(int *)(in_r0 + 0x18) + 0x8c);
  if (pCVar7[0x44] == (Character)0x1) {
    iVar17 = iVar17 + 1;
    uVar1 = *(ushort *)(*(int *)pCVar7 + DAT_00121c38);
    iVar22 = Character::getAdditionCharisma(pCVar7);
    iVar22 = (uint)uVar1 + iVar22;
    sVar2 = (short)iVar22;
    if (100 < iVar22 * 0x10000 >> 0x10) {
      sVar2 = 100;
    }
    local_40 = local_40 + sVar2;
LAB_00121c40:
    __divsi3(local_40,iVar17);
  }
  else if (iVar17 != 0) goto LAB_00121c40;
  uVar8 = Cafe::getFoodStackStockSize(*(Cafe **)(in_r0 + 0x14));
  fVar25 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(in_r0 + 0xc));
  iVar22 = customerEntryRate(in_r0,fVar25);
  uVar3 = customerNotServedProbability(in_r0,extraout_s0,iVar22,extraout_s1);
  uVar26 = customerDepartureRate(in_r0,extraout_s0_00,extraout_s1_00);
  uVar16 = cafeFullProbability(in_r0,local_3c,(float)uVar26,(float)((ulonglong)uVar26 >> 0x20));
  uVar9 = numCustomersServed(extraout_s0_01,CONCAT44(uVar3,uVar16),extraout_s1_01,extraout_s2);
  if (uVar9 == 0) {
    *(undefined4 *)(in_r0 + 0x1a0) = 0;
  }
  else {
    cVar15 = (char)((int)uVar4 >> 0x1f);
    if ((int)uVar8 < (int)uVar9) {
      uVar3 = __floatsisf(uVar8);
      uVar16 = __floatsisf(uVar9);
      uVar3 = __divsf3(uVar3,uVar16);
      uVar16 = __floatsisf(uVar4);
      __mulsf3(uVar3,uVar16);
      uVar26 = __fixsfdi();
      uVar11 = (uint)uVar26;
      uVar27 = __aeabi_ldivmod(uVar11,(int)((ulonglong)uVar26 >> 0x20),uVar4,(int)uVar4 >> 0x1f);
      *(int *)(in_r0 + 0x1a0) = in_r2 * (int)uVar27;
      bVar14 = SUB81((ulonglong)uVar26 >> 0x20,0);
      advanceTimeSection(CONCAT44(iVar17,local_3c),(int)in_r0,(int)((ulonglong)uVar27 >> 0x20),
                         uVar11,bVar14);
      bVar24 = uVar4 < uVar11;
      uVar4 = uVar4 - uVar11;
      cVar15 = (cVar15 - bVar14) - bVar24;
      uVar11 = uVar4;
    }
    else {
      *(int *)(in_r0 + 0x1a0) = in_r2;
      uVar11 = uVar8;
    }
    advanceTimeSection(CONCAT44(iVar17,local_3c),(int)in_r0,uVar11,uVar4,(bool)cVar15);
  }
  if (iVar17 != 0) {
    if ((int)uVar8 < (int)uVar9) {
      uVar9 = uVar8;
    }
    iVar17 = __divsi3(uVar9,iVar17);
    iVar18 = **(int **)(iVar20 + DAT_00121e00);
    for (iVar22 = 0; iVar22 < *(int *)(in_r0 + 0x20) + 1; iVar22 = iVar22 + 1) {
      piVar12 = (int *)(*(int *)(iVar22 * 4 + *(int *)(in_r0 + 0x24)) + 0x8c);
      iVar13 = *piVar12;
      if (*(char *)(iVar13 + 0x44) == '\x01') {
        *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + iVar17 * iVar18;
        iVar13 = *piVar12;
        *(int *)(iVar13 + 0x14) = *(int *)(iVar13 + 0x14) + iVar17;
      }
    }
  }
LAB_00121d98:
  iVar17 = *(int *)(in_r0 + 0xc);
  uVar16 = *(undefined4 *)(iVar17 + 0x688);
  uVar19 = **(undefined4 **)(iVar20 + DAT_00121e04);
  uVar3 = __subsf3(local_28,uVar19);
  iVar20 = __aeabi_fcmplt(uVar3,0);
  if (iVar20 != 0) {
    uVar3 = 0;
  }
  uVar19 = __addsf3(local_28,uVar19);
  iVar20 = __aeabi_fcmpgt(uVar19,0x3f800000);
  if (iVar20 != 0) {
    uVar19 = 0x3f800000;
  }
  iVar20 = __aeabi_fcmpgt(uVar3,uVar16);
  if ((iVar20 == 0) && (iVar20 = __aeabi_fcmpgt(uVar16,uVar19), uVar3 = uVar16, iVar20 != 0)) {
    uVar3 = uVar19;
  }
  *(undefined4 *)(iVar17 + 0x688) = uVar3;
  return;
}


