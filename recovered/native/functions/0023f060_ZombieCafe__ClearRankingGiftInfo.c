/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f060 ZombieCafe::ClearRankingGiftInfo */

/* ZombieCafe::ClearRankingGiftInfo() */

void ZombieCafe::ClearRankingGiftInfo(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar3 = *(int *)(DAT_0023f0a0 + 0x23f06c);
  iVar6 = 0;
  pcVar4 = (char *)(DAT_0023f0a4 + 0x23f072);
  do {
    iVar1 = iVar6 * 0xa0;
    puVar2 = (undefined1 *)(iVar5 + iVar3);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 0x80) = 0;
    *(undefined4 *)(puVar2 + 0x84) = 0;
    *(undefined4 *)(puVar2 + 0x88) = 0;
    *(undefined4 *)(puVar2 + 0x8c) = 0;
    *(undefined4 *)(puVar2 + 0x90) = 0;
    *(undefined4 *)(puVar2 + 0x94) = 0;
    iVar6 = iVar6 + 1;
    String::operator=((String *)(iVar1 + 0x98 + iVar3),pcVar4);
    iVar5 = iVar5 + 0xa0;
  } while (iVar6 != 0xe);
  return;
}


