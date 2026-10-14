/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272700 sqlite3_soft_heap_limit64 */

undefined8 sqlite3_soft_heap_limit64(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar2 = sqlite3_initialize();
  iVar3 = DAT_00272774;
  if (iVar2 == 0) {
    sqlite3_mutex_enter(*(undefined4 *)((int)&DAT_00272774 + DAT_00272774));
    uVar5 = *(undefined4 *)(sqlite3_soft_heap_limit + iVar3);
    uVar7 = *(undefined4 *)(iVar3 + 0x272780);
    sqlite3_mutex_leave(*(undefined4 *)((int)&DAT_00272774 + iVar3));
    if (-1 < param_2) {
      if (param_1 == 0 && param_2 == 0) {
        uVar6 = 0;
        iVar2 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_00272778 + 0x27273a;
        uVar6 = param_1;
        iVar2 = param_2;
      }
      FUN_0025ae20(iVar3,0,uVar6,iVar2,uVar5,uVar7,param_3);
      uVar8 = sqlite3_memory_used();
      uVar4 = (uint)uVar8 - param_1;
      uVar6 = (int)((ulonglong)uVar8 >> 0x20) - param_2;
      uVar1 = (uint)((uint)uVar8 < param_1);
      if ((0 < (int)(uVar6 - uVar1)) || ((uVar6 == uVar1 && (uVar4 != 0)))) {
        sqlite3_release_memory(uVar4 & 0x7fffffff);
      }
    }
  }
  else {
    uVar5 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
  return CONCAT44(uVar7,uVar5);
}


