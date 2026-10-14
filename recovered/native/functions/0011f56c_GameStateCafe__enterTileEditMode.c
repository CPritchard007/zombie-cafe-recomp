/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f56c GameStateCafe::enterTileEditMode */

/* GameStateCafe::enterTileEditMode() */

void __thiscall GameStateCafe::enterTileEditMode(GameStateCafe *this)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  GameStateCafe *pGVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  code *pcVar11;
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar6 = DAT_0011f82c + 0x11f578;
  this[DAT_0011f830] = (GameStateCafe)0x1;
  pGVar7 = this + 0xf8;
  (**(code **)(**(int **)pGVar7 + 0x20))();
  (**(code **)(**(int **)pGVar7 + 0x24))(*(int **)pGVar7,0xffffffff);
  piVar8 = *(int **)pGVar7;
  pcVar11 = *(code **)(*piVar8 + 0x44);
  Vector<String>::elementAt((int)aSStack_94);
  (*pcVar11)(piVar8,aSStack_94);
  String::~String(aSStack_94);
  *(undefined4 *)(this + 0x168) = 0;
  StringBuffer::StringBuffer(aSStack_34);
  Vector<String>::elementAt((int)aSStack_8c);
  StringBuffer::append(aSStack_34,aSStack_8c);
  String::~String(aSStack_8c);
  if (*(char *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x38) == '\0') {
    String::String(aSStack_84,(char *)(DAT_0011f83c + 0x11f606));
    StringBuffer::append(aSStack_34,aSStack_84);
    String::~String(aSStack_84);
  }
  String::valueOf((int)aSStack_7c);
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  if (*(char *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x38) != '\0') {
    Vector<String>::elementAt((int)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
  }
  piVar8 = *(int **)(this + 0xfc);
  pcVar11 = *(code **)(*piVar8 + 0x44);
  StringBuffer::toString();
  (*pcVar11)(piVar8,aSStack_6c);
  String::~String(aSStack_6c);
  String::String(aSStack_64,(String *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 100));
  setItemDescriptionText(this,aSStack_64);
  String::~String(aSStack_64);
  piVar8 = *(int **)(this + 0x100);
  pcVar11 = *(code **)(*piVar8 + 0x44);
  String::String(aSStack_5c,(char *)(DAT_0011f844 + 0x11f6b0));
  iVar10 = *(int *)(*(int *)(this + 0x84) + 0xd0);
  __divsi3(*(undefined4 *)(this + 0x168),*(undefined4 *)(iVar10 + 0x34));
  uVar2 = __floatsisf();
  __mulsf3(uVar2,*(undefined4 *)(iVar10 + 0x6c));
  __fixsfsi();
  String::valueOf((int)aSStack_54);
  String::operator+(aSStack_4c,aSStack_5c,aSStack_54);
  String::String(aSStack_44,(char *)(DAT_0011f848 + 0x11f6f2));
  String::operator+(aSStack_3c,aSStack_4c,aSStack_44);
  (*pcVar11)(piVar8,aSStack_3c);
  String::~String(aSStack_3c);
  String::~String(aSStack_44);
  String::~String(aSStack_4c);
  String::~String(aSStack_54);
  String::~String(aSStack_5c);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  (**(code **)(**(int **)(this + 0xe8) + 0x20))(*(int **)(this + 0xe8),0);
  (**(code **)(**(int **)(this + 0xf0) + 0x20))(*(int **)(this + 0xf0),0);
  for (iVar10 = 0; iVar10 < **(int **)(iVar6 + DAT_0011f850) * **(int **)(iVar6 + DAT_0011f84c);
      iVar10 = iVar10 + 1) {
    iVar3 = Cafe::isInside(*(Cafe **)(this + 0x14),iVar10);
    if (iVar3 != 0) {
      pbVar9 = *(byte **)(iVar10 * 4 + **(int **)(this + 0x14));
      puVar4 = (undefined4 *)operator_new(0x10);
      bVar1 = *pbVar9;
      uVar2 = *(undefined4 *)(pbVar9 + 4);
      *puVar4 = 0;
      puVar4[1] = iVar10;
      puVar4[2] = (uint)bVar1;
      puVar4[3] = uVar2;
      puVar5 = (undefined4 *)operator_new(8);
      puVar5[1] = 0;
      *(undefined4 **)(*(int *)(this + 0x14c) + 4) = puVar5;
      *(undefined4 **)(this + 0x14c) = puVar5;
      *puVar5 = puVar4;
      *(undefined4 *)(*(int *)(this + 0x14c) + 4) = 0;
      *(int *)(this + 0x154) = *(int *)(this + 0x154) + 1;
    }
  }
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


