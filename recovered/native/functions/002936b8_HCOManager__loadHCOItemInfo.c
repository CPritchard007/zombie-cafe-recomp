/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002936b8 HCOManager::loadHCOItemInfo */

/* HCOManager::loadHCOItemInfo() */

void __thiscall HCOManager::loadHCOItemInfo(HCOManager *this)

{
  int iVar1;
  undefined4 uVar2;
  size_t __size;
  void *pvVar3;
  char *__format;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_50;
  char acStack_3c [32];
  int local_1c;
  
  piVar6 = *(int **)(DAT_00293808 + 0x2936c4);
  iVar4 = *piVar6;
  local_1c = iVar4;
  clearHCOItemInfo(this);
  iVar1 = CapcomApp::getInstance();
  iVar5 = *(int *)(iVar1 + 4);
  uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),(void *)(DAT_0029380c + 0x2936de),
                            (char *)0x0,iVar4);
  iVar1 = DAT_00293810;
  *(undefined4 *)(this + 0x10) = uVar2;
  uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),(void *)(iVar1 + 0x2936ec),(char *)0x0,
                            iVar4);
  iVar1 = DAT_00293814;
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),(void *)(iVar1 + 0x2936fa),(char *)0x0,
                            iVar4);
  iVar1 = DAT_00293818;
  *(undefined4 *)(this + 0x18) = uVar2;
  iVar1 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),(void *)(iVar1 + 0x293708),(char *)0x0,
                            iVar4);
  *(int *)(this + 0x1c) = iVar1;
  __size = iVar1 << 2;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x20) = pvVar3;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x24) = pvVar3;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x28) = pvVar3;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x2c) = pvVar3;
  pvVar3 = malloc(__size);
  __format = (char *)(DAT_0029381c + 0x293740);
  *(void **)(this + 0x30) = pvVar3;
  for (local_50 = 0; local_50 < *(int *)(this + 0x1c); local_50 = local_50 + 1) {
    sprintf(acStack_3c,__format,local_50);
    iVar7 = local_50 * 4;
    iVar1 = *(int *)(this + 0x20);
    uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),acStack_3c,(char *)0x0,iVar1 + iVar7);
    *(undefined4 *)(iVar1 + iVar7) = uVar2;
    sprintf(acStack_3c,(char *)(DAT_00293820 + 0x293774),local_50);
    iVar4 = *(int *)(this + 0x24);
    uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),acStack_3c,(char *)0x0,iVar4 + iVar7);
    iVar1 = DAT_00293824;
    *(undefined4 *)(iVar4 + iVar7) = uVar2;
    sprintf(acStack_3c,(char *)(iVar1 + 0x293790),local_50);
    iVar4 = *(int *)(this + 0x28);
    uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),acStack_3c,(char *)0x0,iVar4 + iVar7);
    iVar1 = DAT_00293828;
    *(undefined4 *)(iVar4 + iVar7) = uVar2;
    sprintf(acStack_3c,(char *)(iVar1 + 0x2937b2),local_50);
    iVar1 = *(int *)(this + 0x2c);
    uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),acStack_3c,(char *)0x0,iVar1 + iVar7);
    *(undefined4 *)(iVar1 + iVar7) = uVar2;
    sprintf(acStack_3c,(char *)(DAT_0029382c + 0x2937d4),local_50);
    iVar1 = *(int *)(this + 0x30);
    uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),acStack_3c,(char *)0x0,iVar1);
    *(undefined4 *)(iVar1 + iVar7) = uVar2;
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


