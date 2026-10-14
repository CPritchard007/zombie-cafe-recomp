/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f7c4 PackedImage::readBin */

/* PackedImage::readBin(ResourceManager::Resource*) */

void __thiscall PackedImage::readBin(PackedImage *this,Resource *param_1)

{
  undefined2 uVar1;
  InputStream *pIVar2;
  DataInputStream *this_00;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int local_34;
  String aSStack_20 [12];
  
  (**(code **)(*(int *)param_1 + 8))(param_1);
  pIVar2 = (InputStream *)ResourceManager::Resource::createInputStream(param_1);
  this_00 = (DataInputStream *)operator_new(8);
  DataInputStream::DataInputStream(this_00,pIVar2);
  iVar3 = DataInputStream::readByte(this_00);
  local_34 = DataInputStream::readShort(this_00);
  *(short *)(this + 0x38) = (short)local_34;
  puVar4 = (undefined4 *)operator_new__(local_34 * 0x18 + 8);
  puVar4[1] = local_34;
  *puVar4 = 0x18;
  puVar5 = (undefined2 *)((int)puVar4 + 0x1e);
  while (local_34 = local_34 + -1, local_34 != -1) {
    String::String((String *)(puVar5 + -0xb));
    *puVar5 = 0;
    puVar5[-1] = 0;
    puVar5[-2] = 0;
    puVar5[-3] = 0;
    puVar5 = puVar5 + 0xc;
  }
  local_34 = 0;
  *(undefined4 **)(this + 0x34) = puVar4 + 2;
  while( true ) {
    if (*(short *)(this + 0x38) <= local_34) break;
    if (iVar3 == 2) {
      iVar6 = *(int *)(this + 0x34);
      DataInputStream::readUTF();
      String::operator=((String *)(iVar6 + local_34 * 0x18),aSStack_20);
      String::~String(aSStack_20);
    }
    iVar7 = local_34 * 0x18;
    iVar6 = *(int *)(this + 0x34);
    uVar1 = DataInputStream::readShort(this_00);
    *(undefined2 *)(iVar6 + iVar7 + 8) = uVar1;
    iVar6 = *(int *)(this + 0x34);
    uVar1 = DataInputStream::readShort(this_00);
    *(undefined2 *)(iVar6 + iVar7 + 10) = uVar1;
    iVar6 = *(int *)(this + 0x34);
    uVar1 = DataInputStream::readShort(this_00);
    *(undefined2 *)(iVar6 + iVar7 + 0xc) = uVar1;
    iVar6 = *(int *)(this + 0x34);
    uVar1 = DataInputStream::readShort(this_00);
    *(undefined2 *)(iVar6 + iVar7 + 0xe) = uVar1;
    if (iVar3 == 2) {
      iVar6 = *(int *)(this + 0x34);
      uVar1 = DataInputStream::readShort(this_00);
      *(undefined2 *)(iVar6 + iVar7 + 0x16) = uVar1;
      iVar6 = *(int *)(this + 0x34);
      uVar1 = DataInputStream::readShort(this_00);
      *(undefined2 *)(iVar6 + iVar7 + 0x10) = uVar1;
      iVar6 = *(int *)(this + 0x34);
      uVar1 = DataInputStream::readShort(this_00);
      *(undefined2 *)(iVar6 + iVar7 + 0x12) = uVar1;
      iVar6 = *(int *)(this + 0x34);
      uVar1 = DataInputStream::readShort(this_00);
      *(undefined2 *)(iVar6 + iVar7 + 0x14) = uVar1;
    }
    local_34 = local_34 + 1;
  }
  if (this_00 != (DataInputStream *)0x0) {
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  if (pIVar2 != (InputStream *)0x0) {
    (**(code **)(*(int *)pIVar2 + 4))(pIVar2);
  }
  return;
}


