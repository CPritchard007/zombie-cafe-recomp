/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025aec8 FUN_0025aec8 */

uint FUN_0025aec8(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  uVar1 = (**(code **)(DAT_0025af4c + 0x25af00))();
  iVar2 = DAT_0025af50;
  puVar5 = (uint *)(DAT_0025af50 + 0x25aee2);
  FUN_0025acb4(5,param_1);
  if (*(int *)((int)&DAT_0025af50 + iVar2 + 2) != 0) {
    iVar3 = (*(int *)((int)&DAT_0025af4c + iVar2 + 2) - ((int)uVar1 >> 0x1f)) -
            (uint)(*(uint *)(iVar2 + 0x25af4a) < uVar1);
    iVar4 = (int)*puVar5 >> 0x1f;
    if ((iVar4 < iVar3) || ((iVar3 == iVar4 && (*puVar5 < *(uint *)(iVar2 + 0x25af4a) - uVar1)))) {
      *(undefined4 *)(DAT_0025af58 + 0x25afa2) = 0;
    }
    else {
      *(undefined4 *)(DAT_0025af54 + 0x25af92) = 1;
      FUN_0025ae78(uVar1);
    }
  }
  iVar2 = (**(code **)(DAT_0025af5c + 0x25af44))(uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_0025aeb8(iVar2);
    FUN_0025ac94(0,uVar1);
    FUN_0025ac94(9,1);
  }
  *param_2 = iVar2;
  return uVar1;
}


