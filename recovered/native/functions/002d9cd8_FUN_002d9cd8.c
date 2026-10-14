/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9cd8 FUN_002d9cd8 */

undefined4 FUN_002d9cd8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar4 = 0;
    local_24 = iVar3;
    do {
      iVar2 = 0;
      iVar1 = local_24;
      do {
        FUN_002d9888(param_1,iVar1,iVar5,iVar4,iVar2,0xff,1);
        iVar2 = iVar2 + 0x33;
        iVar1 = iVar1 + 1;
      } while (iVar2 != 0x132);
      iVar4 = iVar4 + 0x33;
      local_24 = local_24 + 6;
    } while (iVar4 != 0x132);
    iVar3 = iVar3 + 0x24;
    iVar5 = iVar5 + 0x33;
  } while (iVar3 != 0xd8);
  return 0xd8;
}


