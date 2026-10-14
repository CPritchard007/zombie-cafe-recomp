/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024f214 ZombieCafe::revertToBackup */

/* ZombieCafe::revertToBackup(int) */

undefined4 ZombieCafe::revertToBackup(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  SaveDataOutputStream *pSVar7;
  int in_r1;
  void *pvVar8;
  uint in_r3;
  code *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  int local_50;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  L_PrintLog((char *)(DAT_0024f474 + 0x24f224),(char *)(DAT_0024f478 + 0x24f226));
  iVar2 = CCOptions::GetUInt(*(CCOptions **)(param_1 + 0xa00),(void *)(DAT_0024f47c + 0x24f234),
                             (char *)0x0,in_r3);
  if (in_r1 == 1) {
    pcVar12 = (char *)(DAT_0024f4c8 + 0x24f42c);
    pvVar8 = (void *)(DAT_0024f4cc + 0x24f42e);
    pcVar10 = (char *)(DAT_0024f4d0 + 0x24f430);
  }
  else if (in_r1 == 2) {
    pcVar12 = (char *)(DAT_0024f480 + 0x24f258);
    pvVar8 = (void *)(DAT_0024f484 + 0x24f25a);
    pcVar10 = (char *)(DAT_0024f488 + 0x24f25c);
  }
  else {
    if (in_r1 != 0) {
      return 0;
    }
    pcVar12 = (char *)(DAT_0024f4bc + 0x24f41e);
    pvVar8 = (void *)(DAT_0024f4c0 + 0x24f420);
    pcVar10 = (char *)(DAT_0024f4c4 + 0x24f422);
  }
  iVar4 = CCOptions::GetUInt(*(CCOptions **)(param_1 + 0xa00),pvVar8,(char *)0x0,0xa00);
  L_PrintLog((char *)(DAT_0024f4d8 + 0x24f442),(char *)(DAT_0024f4d4 + 0x24f440));
  iVar5 = CCAssetManager::fileSize(pcVar10);
  String::String(aSStack_38,pcVar10);
  piVar6 = (int *)SaveDataInputStream::open(aSStack_38);
  String::~String(aSStack_38);
  String::String(aSStack_30,(char *)(DAT_0024f4dc + 0x24f46a));
  pSVar7 = (SaveDataOutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream(pSVar7,aSStack_30);
  String::~String(aSStack_30);
  if (piVar6 == (int *)0x0) {
    L_PrintLog((char *)(DAT_0024f48c + 0x24f276),(char *)(DAT_0024f490 + 0x24f278));
  }
  if (pSVar7 == (SaveDataOutputStream *)0x0) {
    L_PrintLog((char *)(DAT_0024f494 + 0x24f286),(char *)(DAT_0024f498 + 0x24f288));
  }
  if (pSVar7 != (SaveDataOutputStream *)0x0) {
    local_50 = 0;
    if (piVar6 != (int *)0x0) {
      while (local_50 < iVar5) {
        local_50 = local_50 + 1;
        pcVar9 = *(code **)(*(int *)pSVar7 + 0x10);
        uVar1 = (**(code **)(*piVar6 + 0x18))(piVar6);
        (*pcVar9)(pSVar7,uVar1);
      }
LAB_0024f2d2:
      (**(code **)(*piVar6 + 0xc))(piVar6);
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    if (pSVar7 != (SaveDataOutputStream *)0x0) {
      (**(code **)(*(int *)pSVar7 + 8))(pSVar7);
      (**(code **)(*(int *)pSVar7 + 4))(pSVar7);
    }
  }
  else if (piVar6 != (int *)0x0) goto LAB_0024f2d2;
  L_PrintLog((char *)(DAT_0024f49c + 0x24f300),(char *)(DAT_0024f4a0 + 0x24f302));
  iVar5 = CCAssetManager::fileSize(pcVar12);
  String::String(aSStack_28,pcVar12);
  piVar6 = (int *)SaveDataInputStream::open(aSStack_28);
  String::~String(aSStack_28);
  String::String(aSStack_20,(char *)(DAT_0024f4a4 + 0x24f32a));
  pSVar7 = (SaveDataOutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream(pSVar7,aSStack_20);
  String::~String(aSStack_20);
  if (piVar6 == (int *)0x0) {
    L_PrintLog((char *)(DAT_0024f4a8 + 0x24f34c),(char *)(DAT_0024f4ac + 0x24f34e));
  }
  if (pSVar7 == (SaveDataOutputStream *)0x0) {
    L_PrintLog((char *)(DAT_0024f4b0 + 0x24f35c),(char *)(DAT_0024f4b4 + 0x24f35e));
  }
  if (pSVar7 != (SaveDataOutputStream *)0x0) {
    iVar11 = 0;
    if (piVar6 != (int *)0x0) {
      for (; iVar11 < iVar5; iVar11 = iVar11 + 1) {
        pcVar9 = *(code **)(*(int *)pSVar7 + 0x10);
        uVar1 = (**(code **)(*piVar6 + 0x18))(piVar6);
        (*pcVar9)(pSVar7,uVar1);
      }
      goto LAB_0024f3a0;
    }
  }
  else {
    if (piVar6 == (int *)0x0) goto LAB_0024f3c6;
LAB_0024f3a0:
    (**(code **)(*piVar6 + 0xc))(piVar6);
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  if (pSVar7 != (SaveDataOutputStream *)0x0) {
    (**(code **)(*(int *)pSVar7 + 8))(pSVar7);
    (**(code **)(*(int *)pSVar7 + 4))(pSVar7);
  }
LAB_0024f3c6:
  uVar3 = loadGlobalData((ZombieCafe *)param_1);
  *(int *)(param_1 + DAT_0024f4b8) = *(int *)(param_1 + DAT_0024f4b8) + (iVar2 - iVar4);
  return uVar3;
}


