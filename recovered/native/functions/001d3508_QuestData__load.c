/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3508 QuestData::load */

/* QuestData::load(InputStream*) */

void QuestData::load(InputStream *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  Data *local_50;
  int local_40 [2];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar8 = DAT_001d379c + 0x1d3514;
  DataInputStream::DataInputStream((DataInputStream *)local_40,param_1);
  iVar4 = DataInputStream::readShort((DataInputStream *)local_40);
  iVar14 = DAT_001d37a4;
  psVar9 = *(short **)(iVar8 + DAT_001d37a0);
  *psVar9 = (short)iVar4;
  piVar12 = *(int **)(iVar8 + iVar14);
  bVar1 = false;
  if (*piVar12 == 0) {
    puVar5 = (undefined4 *)operator_new__(iVar4 * 0x5c + 8);
    *puVar5 = 0x5c;
    puVar5[1] = iVar4;
    local_50 = (Data *)(puVar5 + 2);
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      Data::Data(local_50);
      local_50 = local_50 + 0x5c;
    }
    *piVar12 = (int)(puVar5 + 2);
    bVar1 = true;
  }
  for (local_50 = (Data *)0x0; (int)local_50 < (int)*psVar9; local_50 = (Data *)((int)local_50 + 1))
  {
    iVar4 = *piVar12;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    iVar14 = (int)local_50 * 0x5c;
    *(undefined4 *)(iVar4 + iVar14) = uVar6;
    iVar4 = *piVar12;
    uVar2 = DataInputStream::readByte((DataInputStream *)local_40);
    *(undefined1 *)(iVar4 + iVar14 + 4) = uVar2;
    iVar4 = *piVar12;
    uVar2 = DataInputStream::readByte((DataInputStream *)local_40);
    *(undefined1 *)(iVar4 + iVar14 + 5) = uVar2;
    iVar4 = *piVar12;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar4 + iVar14 + 8),aSStack_38);
    String::~String(aSStack_38);
    iVar4 = *piVar12;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    *(undefined4 *)(iVar4 + iVar14 + 0x10) = uVar6;
    iVar4 = *piVar12;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar4 + iVar14 + 0x14),aSStack_30);
    String::~String(aSStack_30);
    iVar4 = *piVar12;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    *(undefined4 *)(iVar4 + iVar14 + 0x1c) = uVar6;
    iVar4 = *piVar12;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar4 + iVar14 + 0x20),aSStack_28);
    String::~String(aSStack_28);
    iVar4 = *piVar12;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    *(undefined4 *)(iVar4 + iVar14 + 0x28) = uVar6;
    iVar4 = DataInputStream::readShort((DataInputStream *)local_40);
    if (bVar1) {
      iVar10 = *piVar12;
      pvVar7 = operator_new__(iVar4 << 2);
      *(void **)(iVar10 + iVar14 + 0x2c) = pvVar7;
    }
    for (iVar10 = 0; iVar10 < iVar4; iVar10 = iVar10 + 1) {
      iVar11 = *(int *)(*piVar12 + iVar14 + 0x2c);
      uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
      *(undefined4 *)(iVar10 * 4 + iVar11) = uVar6;
    }
    iVar4 = *piVar12;
    uVar2 = DataInputStream::readByte((DataInputStream *)local_40);
    *(undefined1 *)(iVar4 + iVar14 + 0x30) = uVar2;
    iVar4 = *piVar12;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    *(undefined4 *)(iVar4 + iVar14 + 0x34) = uVar6;
    iVar4 = DataInputStream::readShort((DataInputStream *)local_40);
    if (bVar1) {
      iVar10 = *piVar12;
      pvVar7 = operator_new__(iVar4 << 2);
      *(void **)(iVar10 + iVar14 + 0x38) = pvVar7;
    }
    for (iVar10 = 0; iVar10 < iVar4; iVar10 = iVar10 + 1) {
      iVar11 = *(int *)(*piVar12 + iVar14 + 0x38);
      uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
      *(undefined4 *)(iVar10 * 4 + iVar11) = uVar6;
    }
    iVar4 = *piVar12;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    *(undefined4 *)(iVar4 + iVar14 + 0x3c) = uVar6;
    iVar4 = *piVar12;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    *(undefined4 *)(iVar4 + iVar14 + 0x40) = uVar6;
    iVar10 = *piVar12;
    uVar3 = DataInputStream::readShort((DataInputStream *)local_40);
    iVar4 = DAT_001d37a4;
    *(undefined2 *)(iVar10 + iVar14 + 0x44) = uVar3;
    piVar13 = *(int **)(iVar8 + iVar4);
    iVar4 = *piVar13;
    uVar3 = DataInputStream::readShort((DataInputStream *)local_40);
    *(undefined2 *)(iVar4 + iVar14 + 0x46) = uVar3;
    iVar4 = *piVar13;
    uVar2 = DataInputStream::readByte((DataInputStream *)local_40);
    *(undefined1 *)(iVar4 + iVar14 + 0x48) = uVar2;
    iVar4 = *piVar13;
    uVar6 = DataInputStream::readInt((DataInputStream *)local_40);
    *(undefined4 *)(iVar4 + iVar14 + 0x4c) = uVar6;
    iVar4 = *piVar13;
    uVar3 = DataInputStream::readShort((DataInputStream *)local_40);
    *(undefined2 *)(iVar4 + iVar14 + 0x50) = uVar3;
    iVar4 = *piVar13;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar4 + iVar14 + 0x54),aSStack_20);
    String::~String(aSStack_20);
  }
  local_40[0] = *(int *)(iVar8 + DAT_001d37a8) + 8;
  InputStream::~InputStream((InputStream *)local_40);
  return;
}


