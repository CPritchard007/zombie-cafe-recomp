/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286228 FUN_00286228 */

void FUN_00286228(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar1 = FUN_002662b8();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(*(int *)(iVar5 + 0x10) + param_2 * 0x10);
    iVar4 = DAT_002862e4 + 0x28624e;
    iVar5 = FUN_0026460e(iVar5,iVar4,*puVar2);
    if (iVar5 == 0) {
      FUN_00285af0(param_1,DAT_002862f0 + 0x2862a8,*puVar2,iVar4,DAT_002862ec + 0x2862a4);
      iVar5 = param_1[0x65];
      uVar3 = 2;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x14);
      FUN_00265f96(param_1,param_2,iVar5,1,iVar4);
      if (param_4 == 0) {
        FUN_0026641e(iVar1,0x67,iVar5,param_2);
        uVar3 = 0;
      }
      else {
        FUN_00285af0(param_1,DAT_002862e8 + 0x28628e,*puVar2,iVar4,param_5,param_4);
        uVar3 = 0;
      }
    }
    FUN_00266266(iVar1,0x28,param_3,iVar5,param_2);
    FUN_00263832(iVar1,0xffffffff,3,0xfffffff2);
    FUN_0025c3b8(iVar1,uVar3);
  }
  return;
}


