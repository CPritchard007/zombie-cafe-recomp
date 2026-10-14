/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1870 EnemyItems::load */

/* EnemyItems::load(InputStream*) */

void EnemyItems::load(InputStream *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  Data *this;
  int *piVar7;
  int iVar8;
  int local_a8 [2];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar3 = DAT_000f1b98 + 0xf187c;
  DataInputStream::DataInputStream((DataInputStream *)local_a8,param_1);
  iVar1 = DataInputStream::readShort((DataInputStream *)local_a8);
  psVar4 = *(short **)(iVar3 + DAT_000f1b9c);
  *psVar4 = (short)iVar1;
  puVar2 = (undefined4 *)operator_new__(iVar1 * 0x88 + 8);
  puVar2[1] = iVar1;
  *puVar2 = 0x88;
  this = (Data *)(puVar2 + 2);
  while (iVar1 = iVar1 + -1, iVar1 != -1) {
    Data::Data(this);
    this = this + 0x88;
  }
  piVar7 = *(int **)(iVar3 + DAT_000f1ba0);
  *piVar7 = (int)(puVar2 + 2);
  for (iVar1 = 0; iVar1 < *psVar4; iVar1 = iVar1 + 1) {
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    iVar8 = iVar1 * 0x88;
    String::operator=((String *)(iVar5 + iVar8),aSStack_a0);
    String::~String(aSStack_a0);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 8),aSStack_98);
    String::~String(aSStack_98);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x10),aSStack_90);
    String::~String(aSStack_90);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x18),aSStack_88);
    String::~String(aSStack_88);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x20),aSStack_80);
    String::~String(aSStack_80);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x28),aSStack_78);
    String::~String(aSStack_78);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x30),aSStack_70);
    String::~String(aSStack_70);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x38),aSStack_68);
    String::~String(aSStack_68);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x40),aSStack_60);
    String::~String(aSStack_60);
    iVar5 = *piVar7;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x48),aSStack_58);
    String::~String(aSStack_58);
    piVar6 = *(int **)(iVar3 + DAT_000f1ba0);
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x50),aSStack_50);
    String::~String(aSStack_50);
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x58),aSStack_48);
    String::~String(aSStack_48);
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x60),aSStack_40);
    String::~String(aSStack_40);
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x68),aSStack_38);
    String::~String(aSStack_38);
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x70),aSStack_30);
    String::~String(aSStack_30);
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x78),aSStack_28);
    String::~String(aSStack_28);
    iVar5 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar5 + iVar8 + 0x80),aSStack_20);
    String::~String(aSStack_20);
  }
  local_a8[0] = *(int *)(iVar3 + DAT_000f1ba4) + 8;
  InputStream::~InputStream((InputStream *)local_a8);
  return;
}


