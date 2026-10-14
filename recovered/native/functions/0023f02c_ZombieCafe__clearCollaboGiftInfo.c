/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f02c ZombieCafe::clearCollaboGiftInfo */

/* ZombieCafe::clearCollaboGiftInfo() */

void ZombieCafe::clearCollaboGiftInfo(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = DAT_0023f05c;
  iVar3 = 0;
  iVar2 = *(int *)(DAT_0023f058 + 0x23f038);
  do {
    puVar4 = (undefined1 *)(iVar3 + iVar2);
    *puVar4 = 0;
    iVar3 = iVar3 + 0x94;
    *(undefined4 *)(puVar4 + 0x80) = 0;
    *(undefined4 *)(puVar4 + 0x84) = 0;
    *(undefined4 *)(puVar4 + 0x88) = 0;
    *(undefined4 *)(puVar4 + 0x8c) = 0;
    *(undefined4 *)(puVar4 + 0x90) = 0;
  } while (iVar3 != iVar1);
  return;
}


