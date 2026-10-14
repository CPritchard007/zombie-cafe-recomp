/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000df9a0 colosseumItems::load */

/* colosseumItems::load(InputStream*) */

void colosseumItems::load(InputStream *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  Data *local_b4;
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
  
  iVar3 = DAT_000dfcd4 + 0xdf9ac;
  DataInputStream::DataInputStream((DataInputStream *)local_a8,param_1);
  iVar1 = DataInputStream::readShort((DataInputStream *)local_a8);
  iVar7 = DAT_000dfcdc;
  psVar4 = *(short **)(iVar3 + DAT_000dfcd8);
  *psVar4 = (short)iVar1;
  piVar6 = *(int **)(iVar3 + iVar7);
  if (*piVar6 == 0) {
    puVar2 = (undefined4 *)operator_new__(iVar1 * 0x88 + 8);
    *puVar2 = 0x88;
    puVar2[1] = iVar1;
    local_b4 = (Data *)(puVar2 + 2);
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      Data::Data(local_b4);
      local_b4 = local_b4 + 0x88;
    }
    *piVar6 = (int)(puVar2 + 2);
  }
  for (local_b4 = (Data *)0x0; (int)local_b4 < (int)*psVar4; local_b4 = (Data *)((int)local_b4 + 1))
  {
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    iVar7 = (int)local_b4 * 0x88;
    String::operator=((String *)(iVar1 + iVar7),aSStack_a0);
    String::~String(aSStack_a0);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 8),aSStack_98);
    String::~String(aSStack_98);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x10),aSStack_90);
    String::~String(aSStack_90);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x18),aSStack_88);
    String::~String(aSStack_88);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x20),aSStack_80);
    String::~String(aSStack_80);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x28),aSStack_78);
    String::~String(aSStack_78);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x30),aSStack_70);
    String::~String(aSStack_70);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x38),aSStack_68);
    String::~String(aSStack_68);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x40),aSStack_60);
    String::~String(aSStack_60);
    iVar1 = *piVar6;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x48),aSStack_58);
    String::~String(aSStack_58);
    piVar5 = *(int **)(iVar3 + DAT_000dfcdc);
    iVar1 = *piVar5;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x50),aSStack_50);
    String::~String(aSStack_50);
    iVar1 = *piVar5;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x58),aSStack_48);
    String::~String(aSStack_48);
    iVar1 = *piVar5;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x60),aSStack_40);
    String::~String(aSStack_40);
    iVar1 = *piVar5;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x68),aSStack_38);
    String::~String(aSStack_38);
    iVar1 = *piVar5;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x70),aSStack_30);
    String::~String(aSStack_30);
    iVar1 = *piVar5;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x78),aSStack_28);
    String::~String(aSStack_28);
    iVar1 = *piVar5;
    DataInputStream::readUTF();
    String::operator=((String *)(iVar1 + iVar7 + 0x80),aSStack_20);
    String::~String(aSStack_20);
  }
  local_a8[0] = *(int *)(iVar3 + DAT_000dfce0) + 8;
  InputStream::~InputStream((InputStream *)local_a8);
  return;
}


