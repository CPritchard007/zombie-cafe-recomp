/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9c20 FUN_002d9c20 */

undefined4 FUN_002d9c20(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = 0x73;
  iVar6 = 0;
  do {
    uVar1 = __udivsi3(iVar2,0xe7);
    iVar5 = iVar6 + 1;
    iVar2 = iVar2 + 0x100;
    FUN_002d9888(param_1,iVar6,uVar1,uVar1,uVar1,0xff,1);
    iVar6 = iVar5;
  } while (iVar5 != 0xe7);
  iVar6 = 0xe8;
  FUN_002d9888(param_1,0xe7,0xff,0xff,0xff,0,1);
  iVar2 = 0x33;
  do {
    iVar5 = iVar6;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 0x33;
      FUN_002d9888(param_1,iVar5,iVar3,iVar3,iVar3,iVar2,1);
      iVar5 = iVar5 + 1;
      iVar3 = iVar4;
    } while (iVar4 != 0x132);
    iVar6 = iVar6 + 6;
    iVar2 = iVar2 + 0x33;
  } while (iVar6 != 0x100);
  return 0x100;
}


