/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1c90 EnemyLayouts::load */

/* EnemyLayouts::load(InputStream*) */

void EnemyLayouts::load(InputStream *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  String *local_34;
  int local_28 [2];
  String aSStack_20 [12];
  
  iVar7 = DAT_000f1d90;
  DataInputStream::DataInputStream((DataInputStream *)local_28,param_1);
  iVar7 = iVar7 + 0xf1ca4;
  iVar1 = DataInputStream::readShort((DataInputStream *)local_28);
  psVar4 = *(short **)(iVar7 + DAT_000f1d94);
  *psVar4 = (short)iVar1;
  puVar2 = (undefined4 *)operator_new__(iVar1 * 0x14 + 8);
  *puVar2 = 0x14;
  puVar2[1] = iVar1;
  local_34 = (String *)(puVar2 + 2);
  while (iVar1 = iVar1 + -1, iVar1 != -1) {
    String::String(local_34);
    local_34 = local_34 + 0x14;
  }
  piVar6 = *(int **)(iVar7 + DAT_000f1d98);
  *piVar6 = (int)(puVar2 + 2);
  for (iVar1 = 0; iVar1 < *psVar4; iVar1 = iVar1 + 1) {
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    iVar8 = iVar1 * 0x14;
    String::operator=((String *)(iVar5 + iVar8),aSStack_20);
    String::~String(aSStack_20);
    iVar5 = *piVar6;
    uVar3 = DataInputStream::readInt((DataInputStream *)local_28);
    *(undefined4 *)(iVar5 + iVar8 + 8) = uVar3;
    iVar5 = *piVar6;
    uVar3 = DataInputStream::readInt((DataInputStream *)local_28);
    *(undefined4 *)(iVar5 + iVar8 + 0xc) = uVar3;
    iVar5 = *piVar6;
    uVar3 = DataInputStream::readInt((DataInputStream *)local_28);
    *(undefined4 *)(iVar5 + iVar8 + 0x10) = uVar3;
  }
  local_28[0] = *(int *)(iVar7 + DAT_000f1d9c) + 8;
  InputStream::~InputStream((InputStream *)local_28);
  return;
}


