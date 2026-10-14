/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6d68 ComponentAnimation::createAnimationData */

/* ComponentAnimation::createAnimationData(String, int) */

undefined4 * ComponentAnimation::createAnimationData(String *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  Resource *this;
  ByteArrayInputStream *this_00;
  DataInputStream *this_01;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uchar *puVar19;
  undefined4 *puVar20;
  int iVar21;
  ushort *puVar22;
  uint local_a4;
  int local_a0;
  uint local_9c;
  int local_90;
  undefined2 local_84;
  undefined1 local_80;
  int *local_70;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  CapcomApp::getResourceManager();
  String::String(aSStack_60,param_1);
  String::String(aSStack_20,aSStack_60);
  this = (Resource *)ResourceManager::load(aSStack_20,param_2,1);
  String::~String(aSStack_20);
  String::~String(aSStack_60);
  iVar17 = *(int *)(this + 0x18);
  puVar19 = *(uchar **)(this + 0x14);
  this_00 = (ByteArrayInputStream *)operator_new(0x18);
  ByteArrayInputStream::ByteArrayInputStream(this_00,puVar19,iVar17,false);
  this_01 = (DataInputStream *)operator_new(8);
  DataInputStream::DataInputStream(this_01,(InputStream *)this_00);
  iVar17 = DataInputStream::readByte(this_01);
  if (iVar17 != 0) {
    String::operator+(aSStack_58,(char *)param_1);
    String::String(aSStack_50,param_2);
    String::operator+(aSStack_48,aSStack_58,aSStack_50);
    String::operator+(aSStack_40,(char *)aSStack_48);
    CapcomDebug::Assert(0,aSStack_40);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
  }
  iVar17 = DataInputStream::readByte(this_01);
  piVar7 = (int *)operator_new__(iVar17 << 2);
  piVar15 = piVar7;
  for (iVar21 = 0; iVar21 < iVar17; iVar21 = iVar21 + 1) {
    DataInputStream::readUTF();
    uVar13 = DataInputStream::readShort(this_01);
    uVar14 = DataInputStream::readShort(this_01);
    String::String(aSStack_30,aSStack_38);
    String::String(aSStack_28,aSStack_38);
    iVar9 = PackedImage::createPackedImage(aSStack_30,uVar13,aSStack_28,uVar14);
    *piVar15 = iVar9;
    piVar15 = piVar15 + 1;
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
  }
  iVar21 = DataInputStream::readByte(this_01);
  pvVar8 = operator_new__(iVar21 * 0x14);
  sVar1 = 0;
  sVar2 = 0;
  for (local_a0 = 0; local_a0 < iVar21; local_a0 = local_a0 + 1) {
    puVar20 = (undefined4 *)((int)pvVar8 + local_a0 * 0x14);
    uVar4 = DataInputStream::readShort(this_01);
    *(undefined2 *)(puVar20 + 4) = uVar4;
    sVar5 = DataInputStream::readShort(this_01);
    sVar6 = DataInputStream::readShort(this_01);
    *(short *)(puVar20 + 3) = sVar5 - sVar1;
    *(short *)((int)puVar20 + 0xe) = sVar6 - sVar2;
    iVar9 = DataInputStream::readByte(this_01);
    local_80 = (undefined1)iVar9;
    *(undefined1 *)((int)puVar20 + 0x12) = local_80;
    pvVar10 = operator_new__(iVar9 * 0xc);
    uVar13 = DAT_002a710c;
    *puVar20 = pvVar10;
    *(short *)(puVar20 + 1) = (short)uVar13;
    *(short *)((int)puVar20 + 6) = (short)uVar13;
    local_a4 = 0x8000;
    local_9c = 0x8000;
    for (local_90 = 0; local_90 < iVar9; local_90 = local_90 + 1) {
      puVar22 = (ushort *)((int)pvVar10 + local_90 * 0xc);
      iVar11 = DataInputStream::readShort(this_01);
      *puVar22 = (ushort)iVar11;
      if (iVar11 < *(short *)(puVar20 + 1)) {
        *(ushort *)(puVar20 + 1) = (ushort)iVar11;
      }
      iVar11 = DataInputStream::readShort(this_01);
      puVar22[1] = (ushort)iVar11;
      if (iVar11 < *(short *)((int)puVar20 + 6)) {
        *(ushort *)((int)puVar20 + 6) = (ushort)iVar11;
      }
      uVar3 = DataInputStream::readByte(this_01);
      *(undefined1 *)(puVar22 + 4) = uVar3;
      iVar11 = DataInputStream::readByte(this_01);
      iVar12 = DataInputStream::readByte(this_01);
      iVar11 = PackedImage::getImage((PackedImage *)piVar7[iVar11],iVar12,false);
      *(int *)(puVar22 + 2) = iVar11;
      uVar16 = *(undefined4 *)(iVar11 + 0x2c);
      uVar13 = __floatsisf((int)*(short *)(iVar11 + 0x20));
      uVar13 = __mulsf3(uVar13,uVar16);
      uVar14 = __floatsisf((int)*(short *)(iVar11 + 0x2a));
      uVar13 = __addsf3(uVar13,uVar14);
      uVar14 = __floatsisf((int)*(short *)(iVar11 + 0x26));
      __addsf3(uVar13,uVar14);
      iVar12 = __fixsfsi();
      uVar18 = local_9c;
      if ((int)(short)local_9c < (int)((iVar12 + (uint)*puVar22) * 0x10000) >> 0x10) {
        uVar18 = iVar12 + (uint)*puVar22;
      }
      local_9c = uVar18 & 0xffff;
      uVar13 = __floatsisf((int)*(short *)(iVar11 + 0x22));
      uVar13 = __mulsf3(uVar13,uVar16);
      uVar14 = __floatsisf((int)*(short *)(iVar11 + 0x24));
      uVar13 = __addsf3(uVar13,uVar14);
      uVar14 = __floatsisf((int)*(short *)(iVar11 + 0x28));
      __addsf3(uVar13,uVar14);
      iVar11 = __fixsfsi();
      uVar18 = local_a4;
      if ((int)(short)local_a4 < (int)((iVar11 + (uint)puVar22[1]) * 0x10000) >> 0x10) {
        uVar18 = iVar11 + (uint)puVar22[1];
      }
      local_a4 = uVar18 & 0xffff;
    }
    *(short *)(puVar20 + 2) = (short)local_9c - *(short *)(puVar20 + 1);
    *(short *)((int)puVar20 + 10) = (short)local_a4 - *(short *)((int)puVar20 + 6);
    sVar1 = sVar5;
    sVar2 = sVar6;
  }
  puVar20 = (undefined4 *)operator_new(8);
  local_84 = (undefined2)iVar21;
  *puVar20 = pvVar8;
  *(undefined2 *)(puVar20 + 1) = local_84;
  *(undefined2 *)((int)puVar20 + 6) = 1;
  local_70 = piVar7;
  for (iVar21 = 0; iVar21 < iVar17; iVar21 = iVar21 + 1) {
    piVar15 = (int *)*local_70;
    local_70 = local_70 + 1;
    if (piVar15 != (int *)0x0) {
      (**(code **)(*piVar15 + 4))();
    }
  }
  if (piVar7 != (int *)0x0) {
    operator_delete__(piVar7);
  }
  if (this_01 != (DataInputStream *)0x0) {
    (**(code **)(*(int *)this_01 + 4))(this_01);
  }
  if (this_00 != (ByteArrayInputStream *)0x0) {
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  ResourceManager::Resource::releaseHandle(this);
  return puVar20;
}


