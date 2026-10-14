/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293830 HCOManager::saveHCOItemInfo */

/* HCOManager::saveHCOItemInfo() */

void __thiscall HCOManager::saveHCOItemInfo(HCOManager *this)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  char *__format;
  int iVar4;
  int iVar5;
  int *piVar6;
  size_t __size;
  int iVar7;
  char acStack_3c [32];
  int local_1c;
  
  piVar6 = *(int **)(DAT_002939c0 + 0x29383c);
  local_1c = *piVar6;
  clearHCOItemInfo(this);
  puVar1 = (undefined4 *)JSONGetGameInfo::getInstance();
  *(undefined4 *)(this + 0x10) = *puVar1;
  iVar2 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(iVar2 + 0x14);
  iVar2 = JSONGetGameInfo::getInstance();
  iVar2 = *(int *)(iVar2 + 0x18);
  *(int *)(this + 0x1c) = iVar2;
  __size = iVar2 * 4;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x20) = pvVar3;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x24) = pvVar3;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x28) = pvVar3;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x2c) = pvVar3;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x30) = pvVar3;
  for (iVar2 = 0; iVar4 = *(int *)(this + 0x1c), iVar2 < iVar4; iVar2 = iVar2 + 1) {
    iVar7 = *(int *)(this + 0x20);
    iVar4 = JSONGetGameInfo::getInstance();
    iVar5 = iVar2 * 4;
    *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(*(int *)(iVar4 + 0x1c) + iVar5);
    iVar7 = *(int *)(this + 0x24);
    iVar4 = JSONGetGameInfo::getInstance();
    *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(*(int *)(iVar4 + 0x20) + iVar5);
    iVar7 = *(int *)(this + 0x28);
    iVar4 = JSONGetGameInfo::getInstance();
    *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(*(int *)(iVar4 + 0x24) + iVar5);
    iVar7 = *(int *)(this + 0x2c);
    iVar4 = JSONGetGameInfo::getInstance();
    *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(*(int *)(iVar4 + 0x28) + iVar5);
    iVar7 = *(int *)(this + 0x30);
    iVar4 = JSONGetGameInfo::getInstance();
    *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(*(int *)(iVar4 + 0x2c) + iVar5);
  }
  iVar2 = CapcomApp::getInstance();
  iVar2 = *(int *)(iVar2 + 4);
  CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),(void *)(DAT_002939c4 + 0x2938ec),
                    *(char **)(this + 0x10),iVar4);
  CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),(void *)(DAT_002939c8 + 0x2938fc),*(char **)this,
                    iVar4);
  CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),(void *)(DAT_002939cc + 0x293908),
                    *(char **)(this + 0x18),iVar4);
  CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),(void *)(DAT_002939d0 + 0x293914),
                    *(char **)(this + 0x1c),iVar4);
  __format = (char *)(DAT_002939d4 + 0x29391e);
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x1c); iVar4 = iVar4 + 1) {
    sprintf(acStack_3c,__format,iVar4);
    iVar5 = iVar4 * 4;
    CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),acStack_3c,
                      *(char **)(*(int *)(this + 0x20) + iVar5),*(int *)(this + 0x20));
    sprintf(acStack_3c,(char *)(DAT_002939d8 + 0x293946),iVar4);
    CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),acStack_3c,
                      *(char **)(*(int *)(this + 0x24) + iVar5),*(int *)(this + 0x24));
    sprintf(acStack_3c,(char *)(DAT_002939dc + 0x293960),iVar4);
    CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),acStack_3c,
                      *(char **)(*(int *)(this + 0x28) + iVar5),*(int *)(this + 0x28));
    sprintf(acStack_3c,(char *)(DAT_002939e0 + 0x29397a),iVar4);
    CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),acStack_3c,
                      *(char **)(*(int *)(this + 0x2c) + iVar5),*(int *)(this + 0x2c));
    sprintf(acStack_3c,(char *)(DAT_002939e4 + 0x293994),iVar4);
    CCOptions::SetInt(*(CCOptions **)(iVar2 + 0xa00),acStack_3c,
                      *(char **)(*(int *)(this + 0x30) + iVar5),*(int *)(this + 0x30));
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


