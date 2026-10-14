/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001539d8 GameStateGatya::sendMaltaLog */

/* GameStateGatya::sendMaltaLog(GameStateGatya*, int, int, int) */

void GameStateGatya::sendMaltaLog(GameStateGatya *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  MALTAHoover *pMVar2;
  SServer *pSVar3;
  ZombieCafe *pZVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  int *piVar15;
  int iStack_4;
  undefined4 *puVar16;
  uint *puVar17;
  
  iVar1 = DAT_00153b44;
  puVar11 = *(undefined4 **)(DAT_00153b40 + 0x1539e4);
  piVar15 = (int *)(&stack0xffffffec + DAT_00153b44);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_00153b44);
  puVar17 = (uint *)(&stack0xffffffec + DAT_00153b44);
  *(int *)(&stack0x00000014 + DAT_00153b44) = param_4;
  uVar6 = *puVar11;
  *(int *)(&stack0x0000000c + DAT_00153b44) = param_2;
  *(int *)(&stack0x00000010 + DAT_00153b44) = param_3;
  *(undefined4 *)(&stack0x00000330 + DAT_00153b44) = uVar6;
  pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar12 = DAT_00153b54;
  MALTAHoover::init(pMVar2,(char *)(DAT_00153b48 + 0x153a0e),(char *)(DAT_00153b4c + 0x153a10),
                    (char *)(DAT_00153b50 + 0x153a0c));
  memset(&stack0x00000030 + iVar1,0,0x40);
  pSVar3 = (SServer *)MALTAHoover::GetInstance();
  puVar8 = *(undefined4 **)(iVar12 + 0x153a16);
  MALTAHoover::getFBID(pSVar3,(char *)*puVar8);
  memset(&stack0x00000070 + iVar1,0,0x40);
  pSVar3 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar3,(char *)*puVar8);
  memset(&stack0x000000b0 + iVar1,0,0x80);
  *(undefined4 **)(&stack0x00000018 + iVar1) = puVar11;
  if ((param_1 != (GameStateGatya *)0x0) && (iVar12 = 0, *(int *)(param_1 + 0xeb0) != 0)) {
    pcVar14 = (char *)(DAT_00153b5c + 0x153a90);
    for (; iVar9 = *(int *)(param_1 + 0xeb0), iVar12 < *(int *)(iVar9 + 4) + 1; iVar12 = iVar12 + 1)
    {
      if (iVar12 != 0) {
        strcat(&stack0x000000b0 + iVar1,pcVar14);
      }
      snprintf(&stack0x00000020 + iVar1,0x10,(char *)(DAT_00153b58 + 0x153a78),
               *(undefined4 *)(iVar12 * 4 + *(int *)(iVar9 + 8)));
      strcat(&stack0x000000b0 + iVar1,&stack0x00000020 + iVar1);
    }
  }
  iVar12 = *(int *)(*(int *)(param_1 + 0xc) + 0x5a4);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b8);
  pcVar14 = &stack0x00000130 + iVar1;
  memset(pcVar14,0,0x200);
  *piVar15 = (int)(&stack0x00000070 + iVar1);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000014 + iVar1);
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  *(undefined1 **)((int)&iStack_4 + iVar1) = &stack0x000000b0 + iVar1;
  *(int *)(&stack0x00000000 + iVar1) = iVar12 + 1;
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
  snprintf(pcVar14,0x200,(char *)(DAT_00153b60 + 0x153ad4),&stack0x00000030 + iVar1);
  pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
  pZVar4 = *(ZombieCafe **)(param_1 + 0xc);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(pZVar4 + 0x680);
  uVar6 = ZombieCafe::getToxin(pZVar4);
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
  pZVar4 = *(ZombieCafe **)(param_1 + 0xc);
  uVar10 = *(undefined4 *)(pZVar4 + DAT_00153b64);
  uVar13 = *(undefined4 *)(pZVar4 + DAT_00153b68);
  uVar6 = ZombieCafe::calUserRankId(pZVar4,(uint)(byte)pZVar4[DAT_00153b6c]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar6;
  uVar5 = *(uint *)(&stack0x0000000c + iVar1);
  *(undefined4 *)((int)&iStack_4 + iVar1) = *(undefined4 *)(DAT_00153b70 + 0x153b16);
  uVar7 = *(uint *)(&stack0x00000010 + iVar1);
  *puVar16 = uVar10;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar13;
  *(char **)(&stack0xfffffff8 + iVar1) = pcVar14;
  MALTAHoover::send(pMVar2,(char *)(DAT_00153b74 + 0x153b1a),uVar5,uVar7,*puVar17,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&iStack_4 + iVar1));
  if (*(int *)(&stack0x00000330 + iVar1) == **(int **)(&stack0x00000018 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


