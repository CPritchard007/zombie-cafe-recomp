/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ccd34 FUN_002ccd34 */

void FUN_002ccd34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0x1e0);
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))
                    (param_1,1,0x400,(code *)**(undefined4 **)(param_1 + 4),param_4);
  *(undefined4 *)(iVar8 + 8) = uVar3;
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar8 + 0xc) = uVar3;
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar8 + 0x10) = uVar3;
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar8 + 0x14) = uVar3;
  iVar6 = DAT_002ccdc8;
  iVar5 = DAT_002ccdc4;
  iVar9 = DAT_002ccdc0;
  iVar4 = DAT_002ccdbc;
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(param_1 + 0x150);
  iVar7 = 0;
  do {
    *(int *)(*(int *)(iVar8 + 8) + iVar7) = iVar6 >> 0x10;
    *(int *)(*(int *)(iVar8 + 0xc) + iVar7) = iVar5 >> 0x10;
    iVar1 = DAT_002ccdcc;
    *(int *)(*(int *)(iVar8 + 0x10) + iVar7) = iVar4;
    iVar2 = DAT_002ccdd0;
    iVar6 = iVar6 + iVar1;
    *(int *)(*(int *)(iVar8 + 0x14) + iVar7) = iVar9;
    iVar4 = iVar4 + iVar2;
    iVar7 = iVar7 + 4;
    iVar5 = iVar5 + DAT_002ccdd4;
    iVar9 = iVar9 + DAT_002ccdd8;
  } while (iVar7 != 0x400);
  return;
}


