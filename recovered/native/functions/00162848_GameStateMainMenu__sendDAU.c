/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00162848 GameStateMainMenu::sendDAU */

/* GameStateMainMenu::sendDAU() */

void __thiscall GameStateMainMenu::sendDAU(GameStateMainMenu *this)

{
  char *__s;
  byte bVar1;
  int iVar2;
  int iVar3;
  MALTAHoover *pMVar4;
  SServer *pSVar5;
  int iVar6;
  undefined4 uVar7;
  ZombieCafe *pZVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uStack_4;
  undefined4 *puVar15;
  uint *puVar16;
  
  iVar2 = DAT_00162944;
  piVar12 = *(int **)(DAT_00162940 + 0x162852);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_00162944);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_00162944);
  puVar16 = (uint *)(&stack0xffffffec + DAT_00162944);
  *(int *)(&stack0x00000250 + DAT_00162944) = *piVar12;
  if (this[0x124] == (GameStateMainMenu)0x0) {
    L_PrintLog((char *)(DAT_00162948 + 0x16286c),(char *)(DAT_0016294c + 0x16286e));
    pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::initDailyActiveUsers
              (pMVar4,(char *)(DAT_00162950 + 0x162884),(char *)(DAT_00162954 + 0x162886));
    memset(&stack0x00000010 + iVar2,0,0x40);
    pSVar5 = (SServer *)MALTAHoover::GetInstance();
    iVar6 = MALTAHoover::getFBID(pSVar5,(char *)**(undefined4 **)(DAT_00162958 + 0x16289e));
    if (iVar6 == 0) {
      L_PrintLog((char *)(DAT_0016295c + 0x1628b0),&stack0x00000010 + iVar2);
    }
    __s = &stack0x00000050 + iVar2;
    memset(__s,0,0x200);
    bVar1 = *(byte *)(*(int *)(this + 0xc) + DAT_00162960);
    *puVar14 = *(undefined4 *)(DAT_00162968 + 0x1628d2);
    sprintf(__s,(char *)(DAT_00162964 + 0x1628d0),&stack0x00000010 + iVar2,(uint)bVar1);
    uVar7 = MALTAHoover::GetInstance();
    *(undefined4 *)((int)&uStack_4 + iVar2) = uVar7;
    pZVar8 = *(ZombieCafe **)(this + 0xc);
    *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(pZVar8 + 0x680);
    uVar7 = ZombieCafe::getToxin(pZVar8);
    *(undefined4 *)(&stack0x00000004 + iVar2) = uVar7;
    pZVar8 = *(ZombieCafe **)(this + 0xc);
    *(undefined4 *)(&stack0x00000008 + iVar2) = *(undefined4 *)(pZVar8 + DAT_0016296c);
    uVar13 = *(undefined4 *)(pZVar8 + DAT_00162970);
    uVar7 = ZombieCafe::calUserRankId(pZVar8,(uint)(byte)pZVar8[DAT_00162974]);
    uVar9 = *(uint *)(&stack0x00000000 + iVar2);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar7;
    uVar10 = *(uint *)(&stack0x00000004 + iVar2);
    pMVar4 = *(MALTAHoover **)((int)&uStack_4 + iVar2);
    uVar11 = *(uint *)(&stack0x00000008 + iVar2);
    *puVar15 = uVar13;
    *(char **)(&stack0xfffffff4 + iVar2) = __s;
    MALTAHoover::sendDailyActiveUsers
              (pMVar4,uVar9,uVar10,uVar11,*puVar16,*(int *)(&stack0xfffffff0 + iVar2),
               *(char **)(&stack0xfffffff4 + iVar2));
    iVar3 = DAT_0016297c;
    iVar6 = DAT_00162978;
    this[0x124] = (GameStateMainMenu)0x1;
    L_PrintLog((char *)(iVar6 + 0x162926),(char *)(iVar3 + 0x162928));
  }
  if (*(int *)(&stack0x00000250 + iVar2) != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


