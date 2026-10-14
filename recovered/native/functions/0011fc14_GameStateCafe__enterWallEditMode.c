/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fc14 GameStateCafe::enterWallEditMode */

/* GameStateCafe::enterWallEditMode() */

void __thiscall GameStateCafe::enterWallEditMode(GameStateCafe *this)

{
  short sVar1;
  undefined4 uVar2;
  CapcomOrderableList<CafeObject*> *this_00;
  undefined4 *puVar3;
  CapcomOrderableListNode *pCVar4;
  int iVar5;
  GameStateCafe *pGVar6;
  int *piVar7;
  CapcomOrderableListNode *pCVar8;
  int iVar9;
  code *pcVar10;
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
  
  this[DAT_0011fee4] = (GameStateCafe)0x6;
  pGVar6 = this + 0xf8;
  (**(code **)(**(int **)pGVar6 + 0x20))(*(int **)pGVar6,1);
  (**(code **)(**(int **)pGVar6 + 0x24))(*(int **)pGVar6,0xffffffff);
  piVar7 = *(int **)pGVar6;
  pcVar10 = *(code **)(*piVar7 + 0x44);
  Vector<String>::elementAt((int)aSStack_94);
  (*pcVar10)(piVar7,aSStack_94);
  String::~String(aSStack_94);
  *(undefined4 *)(this + 0x168) = 0;
  StringBuffer::StringBuffer(aSStack_34);
  Vector<String>::elementAt((int)aSStack_8c);
  StringBuffer::append(aSStack_34,aSStack_8c);
  String::~String(aSStack_8c);
  if (*(char *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x38) == '\0') {
    String::String(aSStack_84,(char *)(DAT_0011fef0 + 0x11fcaa));
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
  piVar7 = *(int **)(this + 0xfc);
  pcVar10 = *(code **)(*piVar7 + 0x44);
  StringBuffer::toString();
  (*pcVar10)(piVar7,aSStack_6c);
  String::~String(aSStack_6c);
  String::String(aSStack_64,(String *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 100));
  setItemDescriptionText(this,aSStack_64);
  String::~String(aSStack_64);
  piVar7 = *(int **)(this + 0x100);
  pcVar10 = *(code **)(*piVar7 + 0x44);
  String::String(aSStack_5c,(char *)(DAT_0011fef8 + 0x11fd54));
  iVar9 = *(int *)(*(int *)(this + 0x84) + 0xd0);
  __divsi3(*(undefined4 *)(this + 0x168),*(undefined4 *)(iVar9 + 0x34));
  uVar2 = __floatsisf();
  __mulsf3(uVar2,*(undefined4 *)(iVar9 + 0x6c));
  __fixsfsi();
  String::valueOf((int)aSStack_54);
  String::operator+(aSStack_4c,aSStack_5c,aSStack_54);
  String::String(aSStack_44,(char *)(DAT_0011fefc + 0x11fd96));
  String::operator+(aSStack_3c,aSStack_4c,aSStack_44);
  (*pcVar10)(piVar7,aSStack_3c);
  String::~String(aSStack_3c);
  String::~String(aSStack_44);
  String::~String(aSStack_4c);
  String::~String(aSStack_54);
  String::~String(aSStack_5c);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  (**(code **)(**(int **)(this + 0xe8) + 0x20))(*(int **)(this + 0xe8),0);
  (**(code **)(**(int **)(this + 0xf0) + 0x20))(*(int **)(this + 0xf0),0);
  this_00 = (CapcomOrderableList<CafeObject*> *)
            Cafe::createDistanceSortedObjectList(*(Cafe **)(this + 0x14),'\x02',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while (iVar9 = CapcomOrderableList<CafeObject*>::nextItem(this_00), iVar9 != 0) {
    piVar7 = (int *)operator_new(0x10);
    sVar1 = *(short *)(iVar9 + 0x38);
    iVar5 = *(int *)(iVar9 + 0x40);
    piVar7[1] = -1;
    *piVar7 = iVar9;
    piVar7[2] = (int)sVar1;
    piVar7[3] = iVar5;
    puVar3 = (undefined4 *)operator_new(8);
    puVar3[1] = 0;
    *(undefined4 **)(*(int *)(this + 0x14c) + 4) = puVar3;
    *(undefined4 **)(this + 0x14c) = puVar3;
    *puVar3 = piVar7;
    *(undefined4 *)(*(int *)(this + 0x14c) + 4) = 0;
    *(int *)(this + 0x154) = *(int *)(this + 0x154) + 1;
  }
  if (*(int *)(this_00 + 0x14) != 0) {
    pCVar4 = *(CapcomOrderableListNode **)(this_00 + 8);
    while (pCVar4 != (CapcomOrderableListNode *)0x0) {
      pCVar8 = *(CapcomOrderableListNode **)(pCVar4 + 8);
      CapcomOrderableList<CafeObject*>::deleteNode(this_00,pCVar4);
      pCVar4 = pCVar8;
    }
    *(undefined4 *)(this_00 + 0x14) = 0;
    *(CapcomOrderableList<CafeObject*> **)(this_00 + 0xc) = this_00;
    *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  }
  operator_delete(this_00);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


