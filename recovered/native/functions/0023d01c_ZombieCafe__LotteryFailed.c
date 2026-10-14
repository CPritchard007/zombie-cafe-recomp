/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d01c ZombieCafe::LotteryFailed */

/* ZombieCafe::LotteryFailed(void*) */

undefined8 ZombieCafe::LotteryFailed(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  
  iVar5 = DAT_0023d160 + 0x23d028;
  iVar4 = *(int *)(iVar5 + DAT_0023d168);
  iVar1 = 0;
  iVar7 = *(int *)(iVar5 + DAT_0023d164) - iVar4;
  iVar6 = *(int *)(iVar5 + DAT_0023d16c) - iVar4;
  do {
    iVar3 = 0;
    *(undefined1 *)(iVar1 + *(int *)(iVar5 + DAT_0023d170)) = 0;
    do {
      *(undefined4 *)(iVar7 + iVar4 + iVar3) = 0;
      *(undefined4 *)(iVar4 + iVar3) = 0;
      *(undefined4 *)(iVar6 + iVar4 + iVar3) = 0;
      iVar3 = iVar3 + 4;
    } while (iVar3 != 0x2a8);
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 0x2a8;
  } while (iVar1 != 0x12);
  iVar4 = 0;
  iVar1 = *(int *)(iVar5 + DAT_0023d174);
  do {
    puVar2 = (undefined4 *)(iVar4 + iVar1);
    iVar4 = iVar4 + 8;
    iVar3 = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar7 = DAT_0023d17c;
  } while (iVar4 != 0xf0);
  **(undefined1 **)(iVar5 + DAT_0023d178) = 1;
  **(undefined1 **)(iVar5 + DAT_0023d180) = 1;
  **(undefined1 **)(iVar5 + DAT_0023d184) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d188) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d18c) = 0;
  CEvent::set((CEvent *)(iVar7 + 0x23d08c),1);
  **(undefined1 **)(iVar5 + DAT_0023d190) = 0;
  **(undefined4 **)(iVar5 + DAT_0023d194) = 0xffffffff;
  **(undefined4 **)(iVar5 + DAT_0023d198) = 0xffffffff;
  **(undefined4 **)(iVar5 + DAT_0023d19c) = 0xffffffff;
  **(undefined1 **)(iVar5 + DAT_0023d1a0) = 1;
  **(undefined1 **)(iVar5 + DAT_0023d1a4) = 1;
  **(undefined1 **)(iVar5 + DAT_0023d1a8) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1ac) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1b0) = 0;
  iVar7 = *(int *)(iVar5 + DAT_0023d1b4);
  iVar1 = *(int *)(iVar5 + DAT_0023d1b8);
  iVar4 = *(int *)(iVar5 + DAT_0023d1bc);
  do {
    *(undefined1 *)(iVar3 + iVar7) = 0;
    *(undefined1 *)(iVar3 + iVar1) = 0;
    *(undefined1 *)(iVar3 + iVar4) = 0;
    *(undefined1 *)(iVar3 + *(int *)(iVar5 + DAT_0023d1c0)) = 0;
    *(undefined1 *)(iVar3 + *(int *)(iVar5 + DAT_0023d1c4)) = 0;
    puVar8 = (undefined1 *)(iVar3 + *(int *)(iVar5 + DAT_0023d1c8));
    iVar3 = iVar3 + 1;
    *puVar8 = 0;
  } while (iVar3 != 0x20);
  **(undefined1 **)(iVar5 + DAT_0023d1cc) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1d0) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1d4) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1d8) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1dc) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1e0) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1e4) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1e8) = 0;
  **(undefined1 **)(iVar5 + DAT_0023d1ec) = 0;
  puVar2 = *(undefined4 **)(iVar5 + DAT_0023d1f0);
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 0xd) = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)((int)puVar2 + 0xe) = 1;
  return CONCAT44(iVar6,param_1);
}


