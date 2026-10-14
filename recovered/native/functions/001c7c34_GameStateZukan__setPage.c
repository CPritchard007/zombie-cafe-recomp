/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7c34 GameStateZukan::setPage */

/* GameStateZukan::setPage(unsigned char) */

void __thiscall GameStateZukan::setPage(GameStateZukan *this,uchar param_1)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ZukanHeadButton *pZVar6;
  int iVar7;
  int extraout_r1;
  int extraout_r1_00;
  CharacterData *pCVar8;
  int iVar9;
  int iVar10;
  CharacterData *pCVar11;
  int iVar12;
  GameStateZukan *pGVar13;
  code *pcVar14;
  int *piVar15;
  int iVar16;
  int local_84;
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  this[0x84] = (GameStateZukan)param_1;
  iVar10 = *(int *)(*(int *)(this + 0xc) + 0x10);
  iVar16 = 0;
  iVar10 = 9 - ((((int)(short)iVar10 >> 0x1f) - (iVar10 >> 0x1f)) +
               (uint)((uint)(iVar10 >> 0x10) <= (uint)(int)(short)iVar10));
  pCVar11 = *(CharacterData **)(*(int *)(*(int *)(this + 0xc) + DAT_001c7f10) + 0x3bc);
  pGVar13 = this + 0x8c;
  local_84 = (uint)param_1 * iVar10;
  do {
    if (*(int *)pGVar13 != 0) {
      (**(code **)(**(int **)(this + 0x1c) + 0x34))();
      if (*(int **)pGVar13 != (int *)0x0) {
        (**(code **)(**(int **)pGVar13 + 4))();
      }
    }
    if ((local_84 < *(int *)(this + 0xd0) + 1) && (iVar16 < iVar10)) {
      piVar15 = *(int **)(this + 0x1c);
      pCVar8 = *(CharacterData **)((iVar16 + (uint)param_1 * iVar10) * 4 + *(int *)(this + 0xd4));
      uVar1 = *(uchar *)(*(int *)(this + 0xe0) + local_84);
      iVar7 = *(int *)(DAT_001c7f18 + 0x1c7cd2);
      iVar12 = *(int *)(DAT_001c7f14 + 0x1c7cd0);
      iVar9 = *(int *)(DAT_001c7f1c + 0x1c7ce0);
      if ((uVar1 == '\0') && (3 < (byte)pCVar8[0xb40])) {
        pcVar14 = *(code **)(*piVar15 + 0x2c);
        iVar2 = SmDev();
        __aeabi_idivmod(iVar16,3);
        iVar7 = __fixsfsi(*(undefined4 *)(iVar7 + (extraout_r1_00 * 6 + iVar2) * 4));
        iVar2 = SmDev();
        iVar3 = __divsi3(iVar16,3);
        uVar4 = *(undefined4 *)(iVar12 + (iVar3 * 6 + iVar2) * 4);
        iVar12 = SmDev();
        uVar5 = __floatsisf(*(undefined4 *)(iVar9 + iVar12 * 4));
        __addsf3(uVar4,uVar5);
        iVar9 = __fixsfsi();
        pZVar6 = (ZukanHeadButton *)operator_new(0x70);
        ZukanHeadButton::ZukanHeadButton
                  (pZVar6,pCVar11,'\0',local_84,local_84,iVar7,iVar9,DAT_001c7f20);
        *(ZukanHeadButton **)pGVar13 = pZVar6;
        (*pcVar14)(piVar15);
      }
      else {
        pcVar14 = *(code **)(*piVar15 + 0x2c);
        iVar2 = SmDev();
        __aeabi_idivmod(iVar16,3);
        iVar7 = __fixsfsi(*(undefined4 *)(iVar7 + (extraout_r1 * 6 + iVar2) * 4));
        iVar2 = SmDev();
        iVar3 = __divsi3(iVar16,3);
        uVar4 = *(undefined4 *)(iVar12 + (iVar3 * 6 + iVar2) * 4);
        iVar12 = SmDev();
        uVar5 = __floatsisf(*(undefined4 *)(iVar9 + iVar12 * 4));
        __addsf3(uVar4,uVar5);
        iVar9 = __fixsfsi();
        pZVar6 = (ZukanHeadButton *)operator_new(0x70);
        ZukanHeadButton::ZukanHeadButton
                  (pZVar6,pCVar8,uVar1,local_84,local_84,iVar7,iVar9,DAT_001c7f20);
        *(ZukanHeadButton **)pGVar13 = pZVar6;
        (*pcVar14)(piVar15,pZVar6);
      }
    }
    else {
      *(undefined4 *)pGVar13 = 0;
    }
    iVar16 = iVar16 + 1;
    pGVar13 = pGVar13 + 4;
    local_84 = local_84 + 1;
  } while (iVar16 != 9);
  (**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),1);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),1);
  if (*(int *)(this + 0x5c) != 0) {
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_54);
    StringBuffer::append(aSStack_34,aSStack_54);
    String::~String(aSStack_54);
    String::String(aSStack_4c,(char *)(DAT_001c7f24 + 0x1c7de2));
    StringBuffer::append(aSStack_34,aSStack_4c);
    String::~String(aSStack_4c);
    iVar16 = *(int *)(this + 0xd0);
    __divsi3(iVar16 + 1,iVar10);
    __aeabi_idivmod(iVar16 + 1,iVar10);
    String::valueOf((int)aSStack_44);
    StringBuffer::append(aSStack_34,aSStack_44);
    String::~String(aSStack_44);
    piVar15 = *(int **)(this + 0x5c);
    pcVar14 = *(code **)(*piVar15 + 0x44);
    StringBuffer::toString();
    (*pcVar14)(piVar15,aSStack_3c);
    String::~String(aSStack_3c);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  }
  return;
}


