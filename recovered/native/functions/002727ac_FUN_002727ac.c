/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002727ac FUN_002727ac */

undefined4 FUN_002727ac(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_002727e8;
  memset((void *)(DAT_002727e8 + 0x2727d4),0,0x44);
  if (*(int *)(DAT_002727ec + 0x2727c8) != 0) {
    uVar2 = sqlite3_mutex_alloc(6);
    *(undefined4 *)(iVar1 + 0x2727d4) = uVar2;
    uVar2 = sqlite3_mutex_alloc(7);
    *(undefined4 *)(iVar1 + 0x272808) = uVar2;
  }
  iVar1 = DAT_002727f0;
  *(undefined4 *)(DAT_002727f0 + 0x27280a) = 10;
  *(undefined4 *)(iVar1 + 0x27281a) = 1;
  return 0;
}


