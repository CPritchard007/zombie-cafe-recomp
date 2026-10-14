/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ae78 FUN_0025ae78 */

void FUN_0025ae78(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_0025aeb4;
  pcVar3 = *(code **)(DAT_0025aeb4 + 0x25aef4);
  if (pcVar3 != (code *)0x0) {
    iVar4 = *(int *)(DAT_0025aeb4 + 0x25ae84);
    puVar1 = (undefined4 *)(DAT_0025aeb4 + 0x25aee4);
    uVar5 = *(undefined4 *)(DAT_0025aeb4 + 0x25aef8);
    *(undefined4 *)(DAT_0025aeb4 + 0x25aef4) = 0;
    sqlite3_mutex_leave(*puVar1);
    (*pcVar3)(uVar5,extraout_r1,iVar4,iVar4 >> 0x1f,param_1);
    sqlite3_mutex_enter(*(undefined4 *)(iVar2 + 0x25aee4));
    *(code **)(iVar2 + 0x25aef4) = pcVar3;
    *(undefined4 *)(iVar2 + 0x25aef8) = uVar5;
  }
  return;
}


