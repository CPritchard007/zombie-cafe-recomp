/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00294758 GameStateSpecialSale::sendMalta */

/* GameStateSpecialSale::sendMalta(char*) */

void __thiscall GameStateSpecialSale::sendMalta(GameStateSpecialSale *this,char *param_1)

{
  int iVar1;
  SServer *pSVar2;
  int iVar3;
  int iVar4;
  HCOManager *this_00;
  undefined4 uVar5;
  uint uVar6;
  MALTAHoover *pMVar7;
  ZombieCafe *this_01;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  GameStateSpecialSale *pGVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uStack_4;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  
  iVar1 = DAT_00294904;
  puVar10 = *(undefined4 **)(DAT_00294900 + 0x294764);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_00294904);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_00294904);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_00294904);
  puVar18 = (uint *)(&stack0xffffffec + DAT_00294904);
  *(char **)(&stack0x0000000c + DAT_00294904) = param_1;
  *(undefined4 *)(&stack0xffffffec + DAT_00294908 + DAT_00294904) = *puVar10;
  memset(&stack0x00000034 + DAT_00294904,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  iVar3 = MALTAHoover::getFBID(pSVar2,(char *)**(undefined4 **)(DAT_0029490c + 0x294786));
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar10;
  if (iVar3 == 0) {
    L_PrintLog((char *)(DAT_00294910 + 0x29479a),&stack0x00000034 + iVar1);
  }
  iVar3 = DAT_00294914;
  memset(&stack0x00000074 + iVar1,0,0x80);
  pGVar13 = this;
  for (iVar11 = 0; iVar4 = HCOManager::getInstance(), iVar11 < *(int *)(iVar4 + 0x1c);
      iVar11 = iVar11 + 1) {
    iVar4 = HCOManager::getInstance();
    if (*(int *)(iVar11 * 4 + *(int *)(iVar4 + 0x20)) == 0) {
      uVar6 = (uint)*(ushort *)(**(int **)(pGVar13 + 0x90) + DAT_0029491c);
      pcVar8 = (char *)(DAT_00294918 + 0x2947d0);
    }
    else {
      uVar6 = 0;
      pcVar8 = (char *)(iVar3 + 0x2947b0);
    }
    snprintf(&stack0x00000014 + iVar1,0x20,pcVar8,uVar6);
    strcat(&stack0x00000074 + iVar1,&stack0x00000014 + iVar1);
    iVar4 = HCOManager::getInstance();
    if (iVar11 < *(int *)(iVar4 + 0x1c) + -1) {
      strcat(&stack0x00000074 + iVar1,(char *)(DAT_00294920 + 0x2947fc));
    }
    pGVar13 = pGVar13 + 4;
  }
  this_00 = (HCOManager *)HCOManager::getInstance();
  uVar5 = HCOManager::getHCORemainingTime(this_00);
  uVar6 = __divsi3(uVar5,1000);
  memset(&stack0x000000f4 + iVar1,0,0x80);
  if (*(int *)(this + DAT_00294924) == 99) {
    iVar3 = JSONGetGameInfo::getInstance();
    uVar5 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = JSONGetGameInfo::getInstance();
    *puVar15 = 99;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar5;
    pcVar8 = (char *)(DAT_00294928 + 0x29484a);
  }
  else {
    puVar10 = (undefined4 *)
              (*(int *)(*(int *)(this + 0xc) + DAT_0029492c + 8) +
              *(int *)(this + DAT_00294924) * 0x5d8);
    uVar5 = *puVar10;
    memcpy(&stack0x00000174 + iVar1,puVar10,0x5d8);
    iVar3 = JSONGetGameInfo::getInstance();
    *puVar16 = uVar5;
    pcVar8 = (char *)(DAT_00294934 + 0x294872);
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0xffffffec + DAT_00294930 + iVar1;
  }
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(iVar3 + 4);
  *(uint *)(&stack0xfffffff8 + iVar1) = uVar6 & (int)~uVar6 >> 0x1f;
  snprintf(&stack0x000000f4 + iVar1,0x80,pcVar8,&stack0x00000034 + iVar1);
  pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar7,(char *)(DAT_00294938 + 0x29489a),(char *)(DAT_0029493c + 0x29489c),
                    (char *)(DAT_00294940 + 0x29489e));
  pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar14 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar5 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar5;
  this_01 = *(ZombieCafe **)(this + 0xc);
  uVar9 = *(undefined4 *)(this_01 + DAT_00294944);
  uVar12 = *(undefined4 *)(this_01 + DAT_00294948);
  uVar5 = ZombieCafe::calUserRankId(this_01,(uint)(byte)this_01[DAT_0029494c]);
  *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x000000f4 + iVar1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar5;
  pcVar8 = *(char **)(&stack0x0000000c + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_00294950 + 0x2948d6);
  uVar6 = *(uint *)(&stack0x00000008 + iVar1);
  *puVar17 = uVar9;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar12;
  MALTAHoover::send(pMVar7,pcVar8,uVar14,uVar6,*puVar18,*(uint *)(&stack0xfffffff0 + iVar1),
                    *(int *)(&stack0xfffffff4 + iVar1),*(char **)(&stack0xfffffff8 + iVar1),
                    *(char **)((int)&uStack_4 + iVar1));
  if (*(int *)(&stack0xffffffec + DAT_00294908 + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


