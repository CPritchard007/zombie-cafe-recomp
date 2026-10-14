/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024c4bc ZombieCafe::deserialize */

/* ZombieCafe::deserialize(InputStream*, int, int) */

void __thiscall
ZombieCafe::deserialize(ZombieCafe *this,InputStream *param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  ZombieCafe ZVar6;
  bool bVar7;
  byte bVar8;
  undefined2 uVar9;
  DataInputStream *this_00;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  size_t sVar14;
  Order *pOVar15;
  FoodStack *pFVar16;
  RaidNotification *pRVar17;
  ObjectiveSystem *this_01;
  Quest *this_02;
  short *psVar18;
  PicGiftBoxInfo *__s;
  byte *pbVar19;
  int iVar20;
  undefined1 *puVar21;
  void *pvVar22;
  int iVar23;
  byte *pbVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  char *pcVar27;
  Character *pCVar28;
  String *this_03;
  ZombieCafe *pZVar29;
  uint uVar30;
  Vector<unsigned_char> *this_04;
  int *piVar31;
  Vector<String> *pVVar32;
  Vector<Order*> *this_05;
  char *pcVar33;
  uint *puVar34;
  undefined4 *puVar35;
  undefined8 uVar54;
  uint uStack_4;
  int *piVar36;
  int *piVar37;
  int *piVar38;
  int *piVar39;
  int *piVar40;
  undefined4 *puVar41;
  int *piVar42;
  uint *puVar43;
  uint *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  int *piVar51;
  double *pdVar52;
  undefined4 *puVar53;
  
  iVar3 = DAT_0024c804;
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  piVar36 = (int *)(&stack0xffffffec + DAT_0024c804);
  piVar37 = (int *)(&stack0xffffffec + DAT_0024c804);
  piVar38 = (int *)(&stack0xffffffec + DAT_0024c804);
  piVar39 = (int *)(&stack0xffffffec + DAT_0024c804);
  piVar40 = (int *)(&stack0xffffffec + DAT_0024c804);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  piVar42 = (int *)(&stack0xffffffec + DAT_0024c804);
  puVar43 = (uint *)(&stack0xffffffec + DAT_0024c804);
  puVar44 = (uint *)(&stack0xffffffec + DAT_0024c804);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  puVar47 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  puVar49 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  piVar51 = (int *)(&stack0xffffffec + DAT_0024c804);
  pdVar52 = (double *)(&stack0xffffffec + DAT_0024c804);
  puVar53 = (undefined4 *)(&stack0xffffffec + DAT_0024c804);
  *(int *)(&stack0x00000010 + DAT_0024c804) = param_3;
  *(int *)(&stack0x00000004 + DAT_0024c804) = DAT_0024c808 + 0x24c4d0;
  *(int *)(&stack0xfffffff4 + DAT_0024c804) = param_2;
  puVar26 = *(undefined4 **)(DAT_0024c808 + 0x24c4d0 + DAT_0024c80c);
  *(undefined4 *)(&stack0x00000360 + DAT_0024c804) = *puVar26;
  this_00 = (DataInputStream *)operator_new(8);
  *(undefined4 **)(&stack0x00000018 + iVar3) = puVar26;
  DataInputStream::DataInputStream(this_00,param_1);
  L_PrintLog((char *)(DAT_0024c810 + 0x24c4f0),(char *)(DAT_0024c814 + 0x24c4f2));
  iVar10 = DataInputStream::readByte(this_00);
  snprintf(&stack0x00000160 + iVar3,0x100,(char *)(DAT_0024c818 + 0x24c506),iVar10);
  L_PrintLog((char *)(DAT_0024c81c + 0x24c514),&stack0x00000160 + iVar3);
  piVar31 = *(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024c820);
  if ((iVar10 < *(int *)(&stack0xfffffff4 + iVar3)) && (0 < *(int *)(&stack0xfffffff4 + iVar3))) {
    L_PrintLog((char *)(DAT_0024c824 + 0x24c52e),(char *)(DAT_0024c828 + 0x24c530));
    if (*piVar31 == 0) {
      *piVar31 = iVar10;
    }
LAB_0024c54e:
    if (this_00 == (DataInputStream *)0x0) {
      FUN_0024ea54();
    }
    iVar10 = 0;
    (**(code **)(*(int *)this_00 + 4))(this_00);
    FUN_0024ea54();
  }
  else {
    *piVar31 = iVar10;
    if (0x7c < iVar10) {
      L_PrintLog((char *)(DAT_0024c82c + 0x24c54a),(char *)(DAT_0024c830 + 0x24c54c));
      goto LAB_0024c54e;
    }
  }
  snprintf(&stack0x00000160 + iVar3,0x100,(char *)(DAT_0024c834 + 0x24c56e),iVar10);
  L_PrintLog((char *)(DAT_0024c838 + 0x24c57c),&stack0x00000160 + iVar3);
  if (0x37 < *piVar31) {
    DataInputStream::readByte(this_00);
  }
  DataInputStream::readDouble();
  uVar11 = __fixdfsi();
  *(undefined4 *)(this + 0x880) = uVar11;
  snprintf(&stack0x00000160 + iVar3,0x100,(char *)(DAT_0024c83c + 0x24c5a4),uVar11);
  iVar10 = DAT_0024c844;
  L_PrintLog((char *)(DAT_0024c840 + 0x24c5b4),&stack0x00000160 + iVar3);
  uVar11 = DataInputStream::readFloat();
  *(undefined4 *)(this + 0x688) = uVar11;
  uVar11 = DataInputStream::readInt(this_00);
  *(undefined4 *)(this + DAT_0024c848) = uVar11;
  uVar11 = DataInputStream::readInt(this_00);
  *(undefined4 *)(this + iVar10) = uVar11;
  uVar11 = DataInputStream::readInt(this_00);
  *(undefined4 *)(this + 0x680) = uVar11;
  uVar11 = DataInputStream::readInt(this_00);
  *(undefined4 *)(this + DAT_0024c84c) = uVar11;
  uVar11 = DataInputStream::readInt(this_00);
  *(undefined4 *)(this + 0x690) = uVar11;
  uVar11 = DataInputStream::readFloat();
  *(undefined4 *)(this + DAT_0024c850) = uVar11;
  uVar11 = DataInputStream::readInt(this_00);
  *(undefined4 *)(this + 0x6a8) = uVar11;
  iVar12 = DAT_0024c848;
  iVar10 = DAT_0024c844;
  if (0x42 < *(int *)(this + 0x680)) {
    *(undefined4 *)(this + 0x680) = 0x42;
    *(undefined4 *)(this + DAT_0024c84c) = 0;
  }
  this[DAT_0024c854] = (ZombieCafe)0x0;
  if (0x37 < *piVar31) {
    *(uint *)(&stack0xfffffff8 + iVar3) = *(int *)(this + iVar12) + *(int *)(this + iVar10) & 0xff;
    uVar11 = DataInputStream::readByte(this_00);
    *(undefined4 *)((int)&uStack_4 + iVar3) = uVar11;
    iVar12 = DataInputStream::readBoolean(this_00);
    iVar10 = DAT_0024c854;
    this[DAT_0024c854] = SUB41(iVar12,0);
    if ((iVar12 == 0) && (*(int *)(&stack0xfffffff8 + iVar3) != *(int *)((int)&uStack_4 + iVar3))) {
      this[iVar10] = (ZombieCafe)0x1;
    }
  }
  if (0x46 < *piVar31) {
    iVar10 = *(int *)(&stack0x00000004 + iVar3);
    pvVar22 = *(void **)(iVar10 + DAT_0024c858);
    *(void **)(&stack0xfffffff4 + iVar3) = pvVar22;
    memset(pvVar22,0,0x80);
    pvVar22 = *(void **)(iVar10 + DAT_0024c85c);
    iVar10 = 0;
    *(void **)(&stack0x00000000 + iVar3) = pvVar22;
    memset(pvVar22,0,0x80);
    do {
      uVar5 = DataInputStream::readByte(this_00);
      *(undefined1 *)(*(int *)(&stack0xfffffff4 + iVar3) + iVar10) = uVar5;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x80);
    iVar10 = 0;
    do {
      uVar5 = DataInputStream::readByte(this_00);
      *(undefined1 *)(*(int *)(&stack0x00000000 + iVar3) + iVar10) = uVar5;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x80);
    pcVar27 = (char *)(DAT_0024c860 + 0x24c6ae);
    L_PrintLog(pcVar27,(char *)(DAT_0024c864 + 0x24c6b0));
    L_PrintLog((char *)(DAT_0024c868 + 0x24c6bc),*(char **)(&stack0xfffffff4 + iVar3));
    L_PrintLog((char *)(DAT_0024c86c + 0x24c6c6),*(char **)(&stack0x00000000 + iVar3));
    L_PrintLog(pcVar27,(char *)(DAT_0024c870 + 0x24c6d0));
  }
  pCVar28 = *(Character **)(this + 0x590);
  if (pCVar28 != (Character *)0x0) {
    Character::~Character(pCVar28);
    operator_delete(pCVar28);
    *(undefined4 *)(this + 0x590) = 0;
  }
  iVar10 = DataInputStream::readBoolean(this_00);
  if (iVar10 != 0) {
    piVar13 = (int *)Character::deserialize
                               (this_00,*(CharacterData ***)(this + DAT_0024c878),
                                *(short *)(this + DAT_0024c874) - 1,false);
    *(int **)(this + 0x590) = piVar13;
    if ((*(char *)(*piVar13 + DAT_0024c87c) == '\0') || (*(char *)((int)piVar13 + 5) != '\0')) {
      String::String((String *)(&stack0x00000020 + iVar3),(String *)(piVar13 + 2));
      pCVar28 = *(Character **)(this + 0x590);
      if (pCVar28 != (Character *)0x0) {
        Character::~Character(pCVar28);
        operator_delete(pCVar28);
        *(undefined4 *)(this + 0x590) = 0;
      }
      String::String((String *)(&stack0x00000028 + iVar3),(String *)(&stack0x00000020 + iVar3));
      pvVar22 = operator_new(0x6c);
      *(void **)(&stack0xfffffff4 + iVar3) = pvVar22;
      pCVar28 = *(Character **)(&stack0xfffffff4 + iVar3);
      uVar11 = *(undefined4 *)(*(int *)(this + DAT_0024c878) + 0xdc);
      *puVar35 = (String *)(&stack0x00000028 + iVar3);
      Character::Character(pCVar28,uVar11,0,0);
      *(undefined4 *)(this + 0x590) = *(undefined4 *)(&stack0xfffffff4 + iVar3);
      String::~String((String *)(&stack0x00000028 + iVar3));
      String::~String((String *)(&stack0x00000020 + iVar3));
    }
    L_PrintLog((char *)(DAT_0024c880 + 0x24c790),(char *)(DAT_0024c884 + 0x24c792));
    goto LAB_0024c96c;
  }
  iVar10 = *(int *)(this + 0x690);
  if ((iVar10 < 0) || ((int)(uint)*(ushort *)(this + DAT_0024c874) <= iVar10)) {
    L_PrintLog((char *)(DAT_0024cbcc + 0x24c960),(char *)(DAT_0024cbd0 + 0x24c962));
    *(undefined4 *)(this + 0x590) = 0;
    goto LAB_0024c96c;
  }
  pcVar27 = *(char **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024c858);
  if (*(int *)(*(int *)(iVar10 * 4 + *(int *)(this + DAT_0024c878)) + 0x560) == 0) {
    sVar14 = strlen(pcVar27);
    if (sVar14 < 4) {
      Vector<String>::elementAt((int)(&stack0x00000048 + iVar3));
      pvVar22 = operator_new(0x6c);
      *(void **)(&stack0xfffffff4 + iVar3) = pvVar22;
      this_03 = (String *)(&stack0x00000048 + iVar3);
      uVar11 = *(undefined4 *)(*(int *)(this + 0x690) * 4 + *(int *)(this + DAT_0024cbc8));
      pCVar28 = *(Character **)(&stack0xfffffff4 + iVar3);
      *piVar39 = (int)this_03;
      Character::Character(pCVar28,uVar11,0,1);
LAB_0024c938:
      *(undefined4 *)(this + 0x590) = *(undefined4 *)(&stack0xfffffff4 + iVar3);
    }
    else {
      String::String((String *)(&stack0x00000040 + iVar3),pcVar27);
      pvVar22 = operator_new(0x6c);
      *(void **)(&stack0xfffffff4 + iVar3) = pvVar22;
      this_03 = (String *)(&stack0x00000040 + iVar3);
      uVar11 = *(undefined4 *)(*(int *)(this + 0x690) * 4 + *(int *)(this + DAT_0024cbc8));
      pCVar28 = *(Character **)(&stack0xfffffff4 + iVar3);
      *piVar38 = (int)this_03;
      Character::Character(pCVar28,uVar11,0,1);
      *(undefined4 *)(this + 0x590) = *(undefined4 *)(&stack0xfffffff4 + iVar3);
    }
  }
  else {
    sVar14 = strlen(pcVar27);
    if (sVar14 < 4) {
      Vector<String>::elementAt((int)(&stack0x00000038 + iVar3));
      pvVar22 = operator_new(0x6c);
      *(void **)(&stack0xfffffff4 + iVar3) = pvVar22;
      this_03 = (String *)(&stack0x00000038 + iVar3);
      uVar11 = *(undefined4 *)(*(int *)(this + 0x690) * 4 + *(int *)(this + DAT_0024cbc8));
      pCVar28 = *(Character **)(&stack0xfffffff4 + iVar3);
      *piVar37 = (int)this_03;
      Character::Character(pCVar28,uVar11,0,0);
      goto LAB_0024c938;
    }
    String::String((String *)(&stack0x00000030 + iVar3),pcVar27);
    pCVar28 = (Character *)operator_new(0x6c);
    this_03 = (String *)(&stack0x00000030 + iVar3);
    uVar11 = *(undefined4 *)(*(int *)(this + 0x690) * 4 + *(int *)(this + DAT_0024c878));
    *(Character **)(&stack0xfffffff4 + iVar3) = pCVar28;
    *piVar36 = (int)this_03;
    Character::Character(pCVar28,uVar11,0,0);
    *(undefined4 *)(this + 0x590) = *(undefined4 *)(&stack0xfffffff4 + iVar3);
  }
  String::~String(this_03);
  iVar10 = *(int *)(this + 0x590);
  Platform::getAppTime();
  uVar11 = __fixdfsi();
  *(undefined4 *)(iVar10 + 0x10) = uVar11;
LAB_0024c96c:
  pZVar29 = this + DAT_0024cbdc;
  L_PrintLog((char *)(DAT_0024cbd4 + 0x24c976),(char *)(DAT_0024cbd8 + 0x24c978));
  *(ZombieCafe **)(&stack0xfffffff4 + iVar3) = pZVar29;
  while (iVar10 = DAT_0024cbdc, -1 < *(int *)(*(int *)(&stack0xfffffff4 + iVar3) + 4)) {
    pCVar28 = (Character *)
              Vector<Character*>::removeElementAt
                        (*(Vector<Character*> **)(&stack0xfffffff4 + iVar3),0);
    if (pCVar28 != (Character *)0x0) {
      Character::~Character(pCVar28);
      operator_delete(pCVar28);
    }
  }
  L_PrintLog((char *)(DAT_0024cbe0 + 0x24c9aa),(char *)(DAT_0024cbe4 + 0x24c9ac));
  iVar12 = DataInputStream::readByte(this_00);
  *(int *)(&stack0x00000000 + iVar3) = iVar12;
  iVar23 = *(int *)(this + DAT_0024cbdc);
  *(ZombieCafe **)(&stack0x0000000c + iVar3) = this + iVar10;
  if (iVar23 < iVar12) {
    if (iVar12 + iVar23 * -2 < 0 != SBORROW4(iVar12,iVar23 * 2)) {
      iVar12 = iVar23 * 2;
    }
    Vector<Character*>::resize(*(Vector<Character*> **)(&stack0x0000000c + iVar3),iVar12,-1);
  }
  *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar3) = 0;
  while (*(int *)(&stack0xfffffff4 + iVar3) < *(int *)(&stack0x00000000 + iVar3)) {
    pCVar28 = (Character *)
              Character::deserialize
                        (this_00,*(CharacterData ***)(this + DAT_0024cbc8),
                         *(short *)(this + DAT_0024cbe8) - 1,false);
    if (pCVar28 != (Character *)0x0) {
      uVar30 = (uint)*(ushort *)(*(int *)pCVar28 + DAT_0024cbec);
      *(uint *)(&stack0x00000008 + iVar3) = *(int *)(&stack0x00000008 + iVar3) + uVar30;
      if (((uVar30 == 0xfc) || (uVar30 == 0x2b8)) ||
         ((int)*(short *)((*(int *)(this + 0x680) + -1) * 2 +
                         **(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024cbf0)) <=
          *(int *)(&stack0xfffffff4 + iVar3))) {
        Character::~Character(pCVar28);
        operator_delete(pCVar28);
      }
      else {
        Vector<Character*>::addElement(*(Vector<Character*> **)(&stack0x0000000c + iVar3),pCVar28);
      }
    }
    *(int *)(&stack0xfffffff4 + iVar3) = *(int *)(&stack0xfffffff4 + iVar3) + 1;
  }
  pcVar27 = *(char **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024cbf4);
  memset(pcVar27,0,0x100);
  snprintf(pcVar27,0x100,(char *)(DAT_0024cbf8 + 0x24ca6e),*(undefined4 *)(&stack0x00000000 + iVar3)
          );
  L_PrintLog((char *)(DAT_0024cbfc + 0x24ca7c),pcVar27);
  L_PrintLog((char *)(DAT_0024cc00 + 0x24ca86),(char *)(DAT_0024cc04 + 0x24ca88));
  *(char **)(&stack0xfffffff4 + iVar3) = pcVar27;
  *(ZombieCafe **)(&stack0x00000000 + iVar3) = this + 0x5a0;
  while (-1 < *(int *)(*(int *)(&stack0x00000000 + iVar3) + 4)) {
    pCVar28 = (Character *)
              Vector<Character*>::removeElementAt
                        (*(Vector<Character*> **)(&stack0x00000000 + iVar3),0);
    if (pCVar28 != (Character *)0x0) {
      Character::~Character(pCVar28);
      operator_delete(pCVar28);
    }
  }
  if (*piVar31 < 0x38) {
    *(undefined4 *)(this + 0x5b8) = 10;
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    iVar10 = *piVar31;
    *(undefined4 *)(this + 0x5b8) = uVar11;
    if (iVar10 < 0x78) {
      uVar11 = DataInputStream::readByte(this_00);
    }
    else {
      uVar11 = DataInputStream::readInt(this_00);
    }
    *(undefined4 *)(&stack0x00000000 + iVar3) = uVar11;
    *(ZombieCafe **)(&stack0x00000014 + iVar3) = this + 0x5a0;
    iVar12 = *(int *)(this + 0x5a0);
    iVar10 = *(int *)(&stack0x00000000 + iVar3);
    if (iVar12 < iVar10) {
      if (iVar10 + iVar12 * -2 < 0 != SBORROW4(iVar10,iVar12 * 2)) {
        iVar10 = iVar12 * 2;
      }
      Vector<Character*>::resize(*(Vector<Character*> **)(&stack0x00000014 + iVar3),iVar10,-1);
    }
    iVar10 = 0;
    while (*(int *)(&stack0x0000000c + iVar3) = iVar10,
          *(int *)(&stack0x0000000c + iVar3) < *(int *)(&stack0x00000000 + iVar3)) {
      pCVar28 = (Character *)
                Character::deserialize
                          (this_00,*(CharacterData ***)(this + DAT_0024cbc8),
                           *(short *)(this + DAT_0024cbe8) - 1,false);
      if (pCVar28 != (Character *)0x0) {
        uVar1 = *(ushort *)(*(int *)pCVar28 + DAT_0024cbec);
        *(uint *)(&stack0x00000008 + iVar3) = *(int *)(&stack0x00000008 + iVar3) + (uint)uVar1;
        if (uVar1 == 0xfc) {
          Character::~Character(pCVar28);
          operator_delete(pCVar28);
        }
        else {
          Vector<Character*>::addElement(*(Vector<Character*> **)(&stack0x00000014 + iVar3),pCVar28)
          ;
        }
      }
      iVar10 = *(int *)(&stack0x0000000c + iVar3) + 1;
    }
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    *piVar40 = *(int *)(this + 0x5a4) + 1;
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024cc08 + 0x24cb76),
             *(undefined4 *)(&stack0x00000000 + iVar3));
    L_PrintLog((char *)(DAT_0024cc0c + 0x24cb86),*(char **)(&stack0xfffffff4 + iVar3));
  }
  if (0x37 < *piVar31) {
    uVar30 = *(uint *)(&stack0x00000008 + iVar3);
    *(uint *)(&stack0xfffffff8 + iVar3) = uVar30 & 0xff;
    uVar11 = DataInputStream::readByte(this_00);
    iVar10 = DAT_0024cbdc;
    *(undefined4 *)((int)&uStack_4 + iVar3) = uVar11;
    if ((this[DAT_0024cc10] == (ZombieCafe)0x0) &&
       ((uVar30 & 0xff) != *(uint *)((int)&uStack_4 + iVar3))) {
      this[DAT_0024cc10] = (ZombieCafe)0x1;
      iVar23 = DAT_0024cbc8;
      iVar20 = *(int *)(this + iVar10 + 4);
      for (iVar12 = 0; iVar4 = DAT_0024ceac, iVar12 < iVar20 + 1; iVar12 = iVar12 + 1) {
        **(undefined4 **)(iVar12 * 4 + *(int *)(this + iVar10 + 8)) =
             **(undefined4 **)(this + iVar23);
      }
      iVar10 = *(int *)(this + 0x5a4);
      for (iVar12 = 0; iVar12 < iVar10 + 1; iVar12 = iVar12 + 1) {
        **(undefined4 **)(iVar12 * 4 + *(int *)(this + 0x5a8)) = **(undefined4 **)(this + iVar4);
      }
    }
  }
  if (*piVar31 < 0x73) {
    uVar11 = DataInputStream::readByte(this_00);
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
  }
  *(undefined4 *)(&stack0x00000000 + iVar3) = uVar11;
  *(undefined4 *)(&stack0x00000008 + iVar3) = 0;
  for (iVar10 = 0; iVar10 < *(int *)(&stack0x00000000 + iVar3); iVar10 = iVar10 + 1) {
    iVar12 = DataInputStream::readByte(this_00);
    if (iVar10 < *(int *)(this + 0x18)) {
      *(char *)(*(int *)(this + 0x1c) + iVar10) = (char)iVar12;
    }
    *(int *)(&stack0x00000008 + iVar3) = iVar12 + *(int *)(&stack0x00000008 + iVar3);
  }
  if (0x4b < *piVar31) {
    uVar30 = DataInputStream::readByte(this_00);
    *(uint *)((int)&uStack_4 + iVar3) = uVar30;
    *(uint *)(&stack0xfffffff8 + iVar3) = *(uint *)(&stack0x00000008 + iVar3) & 0xff;
    if (uVar30 != (*(uint *)(&stack0x00000008 + iVar3) & 0xff)) {
      this[DAT_0024ceb0] = (ZombieCafe)0x1;
    }
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  *puVar41 = *(undefined4 *)((int)&uStack_4 + iVar3);
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)(&stack0xfffffff8 + iVar3);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024ceb4 + 0x24ccbe),
           *(undefined4 *)(&stack0x00000000 + iVar3));
  L_PrintLog((char *)(DAT_0024ceb8 + 0x24ccd0),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x21 < *piVar31) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[0x950] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024cebc + 0x24ccf8),
           (uint)(byte)this[0x950]);
  L_PrintLog((char *)(DAT_0024cec0 + 0x24cd06),*(char **)(&stack0xfffffff4 + iVar3));
  if ((0 < *(int *)(&stack0x00000010 + iVar3)) && (*piVar31 < *(int *)(&stack0x00000010 + iVar3))) {
    if (this_00 == (DataInputStream *)0x0) {
      FUN_0024ea54();
    }
    (**(code **)(*(int *)this_00 + 4))(this_00);
    FUN_0024ea54();
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024cec4 + 0x24cd40),
           *(undefined4 *)(&stack0x00000010 + iVar3));
  L_PrintLog((char *)(DAT_0024cec8 + 0x24cd4e),*(char **)(&stack0xfffffff4 + iVar3));
  pVVar32 = (Vector<String> *)(this + DAT_0024cecc);
  *(undefined4 *)(pVVar32 + 4) = 0xffffffff;
  iVar10 = DataInputStream::readShort(this_00);
  iVar12 = *(int *)(this + DAT_0024cecc);
  if (iVar12 < iVar10) {
    iVar23 = iVar10;
    if (iVar10 + iVar12 * -2 < 0 != SBORROW4(iVar10,iVar12 * 2)) {
      iVar23 = iVar12 * 2;
    }
    Vector<String>::resize(pVVar32,iVar23,-1);
  }
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    DataInputStream::readUTF();
    Vector<String>::addElement(pVVar32,&stack0x00000050 + iVar3);
    String::~String((String *)(&stack0x00000050 + iVar3));
  }
  CapcomDate::deserialize((CapcomDate *)(&stack0x00000058 + iVar3),this_00);
  memcpy(this + 0x8d0,&stack0x00000058 + iVar3,7);
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024ced0 + 0x24cdc8),iVar10);
  L_PrintLog((char *)(DAT_0024ced4 + 0x24cdd8),*(char **)(&stack0xfffffff4 + iVar3));
  pVVar32 = (Vector<String> *)(this + DAT_0024ced8);
  *(undefined4 *)(pVVar32 + 4) = 0xffffffff;
  iVar10 = DataInputStream::readShort(this_00);
  iVar12 = *(int *)(this + DAT_0024ced8);
  if (iVar12 < iVar10) {
    iVar23 = iVar10;
    if (iVar10 + iVar12 * -2 < 0 != SBORROW4(iVar10,iVar12 * 2)) {
      iVar23 = iVar12 * 2;
    }
    Vector<String>::resize(pVVar32,iVar23,-1);
  }
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    DataInputStream::readUTF();
    Vector<String>::addElement(pVVar32,&stack0x00000060 + iVar3);
    String::~String((String *)(&stack0x00000060 + iVar3));
  }
  CapcomDate::deserialize((CapcomDate *)(&stack0x00000068 + iVar3),this_00);
  memcpy(this + DAT_0024cedc,&stack0x00000068 + iVar3,7);
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024cee0 + 0x24ce4e),iVar10);
  L_PrintLog((char *)(DAT_0024cee4 + 0x24ce5c),*(char **)(&stack0xfffffff4 + iVar3));
  uVar11 = DataInputStream::readShort(this_00);
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
  this_05 = (Vector<Order*> *)(this + DAT_0024cee8);
  while (-1 < *(int *)(this_05 + 4)) {
    pOVar15 = (Order *)Vector<Order*>::removeElementAt(this_05,0);
    if (pOVar15 != (Order *)0x0) {
      Order::~Order(pOVar15);
      operator_delete(pOVar15);
    }
  }
  iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
  iVar12 = *(int *)(this + DAT_0024cee8);
  if (iVar12 < iVar10) {
    if (iVar10 + iVar12 * -2 < 0 != SBORROW4(iVar10,iVar12 * 2)) {
      iVar10 = iVar12 * 2;
    }
    Vector<Order*>::resize(this_05,iVar10,-1);
  }
  iVar10 = 0;
  while( true ) {
    iVar12 = *(int *)(&stack0xfffffff8 + iVar3);
    iVar10 = iVar10 + 1;
    if (iVar12 - iVar10 < 0) break;
    pOVar15 = (Order *)Order::deserialize(this_00);
    Vector<Order*>::addElement(this_05,pOVar15);
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  uVar1 = *(ushort *)(&stack0xfffffff8 + iVar3);
  pcVar33 = (char *)(DAT_0024d298 + 0x24cf38);
  pcVar27 = *(char **)(&stack0xfffffff4 + iVar3);
  *piVar42 = *(int *)(this + DAT_0024d294 + 4) + 1;
  snprintf(pcVar27,0x100,(char *)(DAT_0024d290 + 0x24cf32),
           (iVar12 + -1) - (int)(short)(uVar1 & (short)~((short)uVar1 >> 0xf) >> 0xf));
  iVar10 = DAT_0024d29c;
  L_PrintLog(pcVar33,*(char **)(&stack0xfffffff4 + iVar3));
  L_PrintLog((char *)(iVar10 + 0x24cf54),(char *)(DAT_0024d2a0 + 0x24cf58));
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  pbVar19 = *(byte **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024d2a4);
  pbVar24 = *(byte **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024d2a8);
  *(byte **)((int)&uStack_4 + iVar3) = pbVar19;
  bVar8 = *pbVar24;
  pcVar27 = *(char **)(&stack0xfffffff4 + iVar3);
  *puVar43 = (uint)*pbVar19;
  snprintf(pcVar27,0x100,(char *)(DAT_0024d2ac + 0x24cf76),(uint)bVar8);
  L_PrintLog((char *)(iVar10 + 0x24cf54),*(char **)(&stack0xfffffff4 + iVar3));
  ZVar6 = (ZombieCafe)DataInputStream::readByte(this_00);
  this[0x3f8] = ZVar6;
  ZVar6 = (ZombieCafe)DataInputStream::readByte(this_00);
  this[DAT_0024d2b0] = ZVar6;
  ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
  this[DAT_0024d2b4] = ZVar6;
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  ZVar6 = this[0x3f8];
  pcVar27 = *(char **)(&stack0xfffffff4 + iVar3);
  *puVar44 = (uint)(byte)this[DAT_0024d2b0];
  snprintf(pcVar27,0x100,(char *)(DAT_0024d2b8 + 0x24cfc8),(uint)(byte)ZVar6);
  L_PrintLog(pcVar33,*(char **)(&stack0xfffffff4 + iVar3));
  puVar34 = *(uint **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024d2bc);
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  if ((int)*puVar34 < 0x37) {
    do {
      iVar12 = *(int *)(&stack0xfffffff8 + iVar3);
      iVar23 = *(int *)(this + DAT_0024d2c0);
      uVar11 = DataInputStream::readLong(this_00);
      iVar10 = DAT_0024d2c4;
      *(undefined4 *)(iVar23 + iVar12 * 4) = uVar11;
      iVar12 = *(int *)(&stack0xfffffff8 + iVar3);
      iVar10 = *(int *)(this + iVar10);
      uVar5 = DataInputStream::readByte(this_00);
      *(undefined1 *)(iVar10 + iVar12) = uVar5;
      if ((int)*puVar34 < 0x2e) {
        iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
        iVar12 = *(int *)(this + DAT_0024d2c4);
        uVar5 = __udivsi3(*(undefined1 *)(iVar12 + iVar10),3);
        *(undefined1 *)(iVar12 + iVar10) = uVar5;
      }
      iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
      iVar12 = *(int *)(this + 0x6a0);
      DataInputStream::readUTF();
      String::operator=((String *)(iVar12 + iVar10 * 8),&stack0x00000078 + iVar3);
      String::~String((String *)(&stack0x00000078 + iVar3));
      iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
      *(int *)(&stack0xfffffff8 + iVar3) = iVar10 + 1;
    } while (iVar10 + 1 != 4);
  }
  else {
    while (*(int *)(&stack0xfffffff8 + iVar3) < (int)(uint)**(byte **)((int)&uStack_4 + iVar3)) {
      iVar12 = *(int *)(&stack0xfffffff8 + iVar3);
      iVar23 = *(int *)(this + DAT_0024d2c0);
      uVar11 = DataInputStream::readLong(this_00);
      iVar10 = DAT_0024d2c4;
      *(undefined4 *)(iVar23 + iVar12 * 4) = uVar11;
      iVar12 = *(int *)(&stack0xfffffff8 + iVar3);
      iVar10 = *(int *)(this + iVar10);
      uVar5 = DataInputStream::readByte(this_00);
      *(undefined1 *)(iVar10 + iVar12) = uVar5;
      if ((int)*puVar34 < 0x2e) {
        iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
        iVar12 = *(int *)(this + DAT_0024d2c4);
        uVar5 = __udivsi3(*(undefined1 *)(iVar12 + iVar10),3);
        *(undefined1 *)(iVar12 + iVar10) = uVar5;
      }
      iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
      iVar12 = *(int *)(this + 0x6a0);
      DataInputStream::readUTF();
      String::operator=((String *)(iVar12 + iVar10 * 8),&stack0x00000070 + iVar3);
      String::~String((String *)(&stack0x00000070 + iVar3));
      *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + 1;
    }
  }
  iVar10 = DAT_0024d2c0;
  iVar12 = 0;
  if ((int)*puVar34 < 0x30) {
    for (; iVar12 < (int)(uint)**(byte **)((int)&uStack_4 + iVar3); iVar12 = iVar12 + 1) {
      *(undefined4 *)(iVar12 * 4 + *(int *)(this + iVar10)) = 1;
    }
  }
  L_PrintLog((char *)(DAT_0024d2c8 + 0x24d0e8),(char *)(DAT_0024d2cc + 0x24d0ea));
  uVar30 = *puVar34;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  if (0x32 < (int)uVar30) {
    *(undefined4 *)(&stack0x00000000 + iVar3) =
         *(undefined4 *)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024d2dc);
    while (*(int *)(&stack0xfffffff8 + iVar3) < (int)(uint)**(byte **)(&stack0x00000000 + iVar3)) {
      *(int *)((int)&uStack_4 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) << 2;
      iVar10 = *(int *)((int)&uStack_4 + iVar3);
      iVar12 = *(int *)(this + 0x698);
      uVar11 = DataInputStream::readLong(this_00);
      *(undefined4 *)(iVar12 + iVar10) = uVar11;
      piVar31 = (int *)(*(int *)(this + 0x698) + *(int *)((int)&uStack_4 + iVar3));
      if (**(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024d2d0) < *piVar31) {
        *piVar31 = 0;
      }
      memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
      *puVar45 = *(undefined4 *)(*(int *)(this + 0x698) + *(int *)((int)&uStack_4 + iVar3));
      snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d2d4 + 0x24d148),
               *(undefined4 *)(&stack0xfffffff8 + iVar3));
      L_PrintLog((char *)(DAT_0024d2d8 + 0x24d15a),*(char **)(&stack0xfffffff4 + iVar3));
      *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + 1;
    }
  }
  uVar30 = *puVar34;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  if (0x33 < (int)uVar30) {
    *(undefined4 *)(&stack0x00000000 + iVar3) =
         *(undefined4 *)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024d2ec);
    while (*(int *)(&stack0xfffffff8 + iVar3) < **(int **)(&stack0x00000000 + iVar3)) {
      *(int *)((int)&uStack_4 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) << 2;
      iVar10 = *(int *)((int)&uStack_4 + iVar3);
      iVar12 = *(int *)(this + DAT_0024d2e0);
      uVar11 = DataInputStream::readLong(this_00);
      *(undefined4 *)(iVar12 + iVar10) = uVar11;
      iVar10 = DAT_0024d2e0;
      memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
      *puVar46 = *(undefined4 *)(*(int *)(this + iVar10) + *(int *)((int)&uStack_4 + iVar3));
      snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d2e4 + 0x24d1b4),
               *(undefined4 *)(&stack0xfffffff8 + iVar3));
      L_PrintLog((char *)(DAT_0024d2e8 + 0x24d1c6),*(char **)(&stack0xfffffff4 + iVar3));
      *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + 1;
    }
    CapcomDate::deserialize((CapcomDate *)(&stack0x00000080 + iVar3),this_00);
    memcpy(this + 0x6c0,&stack0x00000080 + iVar3,7);
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024d2f0) = uVar11;
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d2f4 + 0x24d21a),uVar11);
    L_PrintLog((char *)(DAT_0024d2f8 + 0x24d228),*(char **)(&stack0xfffffff4 + iVar3));
  }
  TutorialSystem::deserialize(*(TutorialSystem **)(this + DAT_0024d2fc),this_00);
  ZVar6 = (ZombieCafe)DataInputStream::readByte(this_00);
  iVar12 = DAT_0024d308;
  iVar10 = DAT_0024d304;
  this[DAT_0024d300] = ZVar6;
  L_PrintLog((char *)(DAT_0024d30c + 0x24d24a),(char *)(iVar10 + 0x24d248));
  CapcomDate::deserialize((CapcomDate *)(&stack0x00000088 + iVar3),this_00);
  memcpy(this + 0x890,&stack0x00000088 + iVar3,7);
  if ((int)*puVar34 < 0x1b) {
    uVar9 = DataInputStream::readByte(this_00);
  }
  else {
    CapcomDate::deserialize((CapcomDate *)(&stack0x00000090 + iVar3),this_00);
    memcpy(this + DAT_0024d310,&stack0x00000090 + iVar3,7);
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x8b0) = uVar11;
    uVar9 = DataInputStream::readShort(this_00);
  }
  uVar30 = *puVar34;
  *(undefined2 *)(this + iVar12) = uVar9;
  iVar10 = DAT_0024d600;
  if (0x32 < (int)uVar30) {
    CapcomDate::deserialize((CapcomDate *)(&stack0x00000098 + iVar3),this_00);
    memcpy(this + 0x8a0,&stack0x00000098 + iVar3,7);
    CapcomDate::deserialize((CapcomDate *)(&stack0x000000a0 + iVar3),this_00);
    memcpy(this + DAT_0024d604,&stack0x000000a0 + iVar3,7);
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024d608) = uVar11;
    uVar11 = DataInputStream::readInt(this_00);
    uVar30 = *puVar34;
    *(undefined4 *)(this + iVar10) = uVar11;
    if (0x3a < (int)uVar30) {
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(this + DAT_0024d60c) = uVar11;
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(this + 0x9d0) = uVar11;
    }
    CapcomDate::deserialize((CapcomDate *)(&stack0x000000a8 + iVar3),this_00);
    memcpy(this + DAT_0024d610,&stack0x000000a8 + iVar3,7);
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  *puVar47 = *(undefined4 *)(this + iVar10);
  pcVar33 = (char *)(DAT_0024d618 + 0x24d3b2);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d614 + 0x24d3ae),
           *(undefined4 *)(this + DAT_0024d608));
  L_PrintLog(pcVar33,*(char **)(&stack0xfffffff4 + iVar3));
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  uVar11 = *(undefined4 *)(this + DAT_0024d60c);
  pcVar27 = *(char **)(&stack0xfffffff4 + iVar3);
  *puVar48 = *(undefined4 *)(this + 0x9d0);
  snprintf(pcVar27,0x100,(char *)(DAT_0024d61c + 0x24d3e0),uVar11);
  L_PrintLog(pcVar33,*(char **)(&stack0xfffffff4 + iVar3));
  if (0x44 < (int)*puVar34) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024d620) = uVar11;
  }
  if (0x49 < (int)*puVar34) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024d624) = uVar11;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024d628] = ZVar6;
  }
  if (0x6a < (int)*puVar34) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024d62c) = uVar11;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024d630] = ZVar6;
  }
  pcVar27 = *(char **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024d634);
  memset(pcVar27,0,0x100);
  snprintf(pcVar27,0x100,(char *)(DAT_0024d638 + 0x24d44e),*(undefined4 *)(this + DAT_0024d624));
  L_PrintLog((char *)(DAT_0024d63c + 0x24d45c),pcVar27);
  *(char **)(&stack0xfffffff4 + iVar3) = pcVar27;
  *(ZombieCafe **)(&stack0xfffffff8 + iVar3) = this + DAT_0024d640;
  while (-1 < *(int *)(*(int *)(&stack0xfffffff8 + iVar3) + 4)) {
    pFVar16 = (FoodStack *)
              Vector<FoodStack*>::removeElementAt
                        (*(Vector<FoodStack*> **)(&stack0xfffffff8 + iVar3),0);
    if (pFVar16 != (FoodStack *)0x0) {
      FoodStack::~FoodStack(pFVar16);
      operator_delete(pFVar16);
    }
  }
  uVar11 = DataInputStream::readShort(this_00);
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar3) = uVar11;
  *(ZombieCafe **)(&stack0x00000008 + iVar3) = this + DAT_0024d640;
  while (*(int *)(&stack0xfffffff8 + iVar3) < *(int *)(&stack0x00000000 + iVar3)) {
    pFVar16 = (FoodStack *)operator_new(0x24);
    *(String **)((int)&uStack_4 + iVar3) = (String *)(pFVar16 + 0xc);
    String::String((String *)(pFVar16 + 0xc));
    String::String((String *)(pFVar16 + 0x14));
    FoodStack::deserialize(pFVar16,this_00);
    Vector<FoodStack*>::addElement(*(Vector<FoodStack*> **)(&stack0x00000008 + iVar3),pFVar16);
    *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + 1;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d644 + 0x24d4f4),
           *(undefined4 *)(&stack0x00000000 + iVar3));
  iVar10 = DAT_0024d64c;
  L_PrintLog((char *)(DAT_0024d648 + 0x24d504),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x1c < (int)*puVar34) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + iVar10) = uVar11;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024d650] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d654 + 0x24d534),
           *(undefined4 *)(this + iVar10));
  iVar10 = DAT_0024d65c;
  L_PrintLog((char *)(DAT_0024d658 + 0x24d544),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x1f < (int)*puVar34) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + iVar10) = uVar11;
    ZVar6 = (ZombieCafe)DataInputStream::readByte(this_00);
    this[0x6e0] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d660 + 0x24d576),
           *(undefined4 *)(this + iVar10));
  L_PrintLog((char *)(DAT_0024d664 + 0x24d584),*(char **)(&stack0xfffffff4 + iVar3));
  iVar10 = DAT_0024d9c8;
  if (0x20 < (int)*puVar34) {
    if ((int)*puVar34 < 0x30) {
      CapcomDate::deserialize((CapcomDate *)(&stack0x000000c0 + iVar3),this_00);
      Vector<CapcomDate>::addElement
                (this + iVar10,*(undefined4 *)(&stack0x000000c0 + iVar3),
                 *(undefined4 *)(&stack0x000000c4 + iVar3));
      DataInputStream::readUTF();
      Vector<String>::addElement((Vector<String> *)(this + DAT_0024d9cc),&stack0x000000c8 + iVar3);
      String::~String((String *)(&stack0x000000c8 + iVar3));
    }
    else {
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
      *(ZombieCafe **)((int)&uStack_4 + iVar3) = this + DAT_0024d668;
      for (iVar10 = 0; iVar10 < *(int *)(&stack0xfffffff8 + iVar3); iVar10 = iVar10 + 1) {
        CapcomDate::deserialize((CapcomDate *)(&stack0x000000b0 + iVar3),this_00);
        Vector<CapcomDate>::addElement
                  (*(undefined4 *)((int)&uStack_4 + iVar3),*(undefined4 *)(&stack0x000000b0 + iVar3)
                   ,*(undefined4 *)(&stack0x000000b4 + iVar3));
        DataInputStream::readUTF();
        Vector<String>::addElement((Vector<String> *)(this + DAT_0024d66c),&stack0x000000b8 + iVar3)
        ;
        String::~String((String *)(&stack0x000000b8 + iVar3));
      }
      memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
      snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d670 + 0x24d5ec),
               *(undefined4 *)(&stack0xfffffff8 + iVar3));
      L_PrintLog((char *)(DAT_0024d674 + 0x24d5fa),*(char **)(&stack0xfffffff4 + iVar3));
    }
    CapcomDate::deserialize((CapcomDate *)(&stack0x000000d0 + iVar3),this_00);
    memcpy(this + DAT_0024d9d0,&stack0x000000d0 + iVar3,7);
    DataInputStream::readUTF();
    String::operator=((String *)(this + DAT_0024d9d4),&stack0x000000d8 + iVar3);
    String::~String((String *)(&stack0x000000d8 + iVar3));
  }
  if (0x21 < (int)*puVar34) {
    uVar54 = DataInputStream::readLong(this_00);
    *(undefined8 *)(this + 0x940) = uVar54;
    CapcomDate::deserialize((CapcomDate *)(&stack0x000000e0 + iVar3),this_00);
    memcpy(this + DAT_0024d9d8,&stack0x000000e0 + iVar3,7);
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  uVar11 = *(undefined4 *)(this + 0x944);
  *puVar49 = *(undefined4 *)(this + 0x940);
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar11;
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d9dc + 0x24d71c));
  L_PrintLog((char *)(DAT_0024d9e0 + 0x24d72c),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x22 < (int)*puVar34) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[0x6e8] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024d9e4] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d9e8 + 0x24d75e),
           (uint)(byte)this[0x6e8]);
  iVar10 = DAT_0024d9f0;
  L_PrintLog((char *)(DAT_0024d9ec + 0x24d76e),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x23 < (int)*puVar34) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[iVar10] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d9f4 + 0x24d794),
           (uint)(byte)this[iVar10]);
  L_PrintLog((char *)(DAT_0024d9f8 + 0x24d7a2),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x25 < (int)*puVar34) {
    uVar11 = DataInputStream::readShort(this_00);
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
    if (*(int *)(this + 0x6d8) != 0) {
      while (pvVar22 = *(void **)(this + 0x6cc), pvVar22 != (void *)0x0) {
        *(undefined4 *)((int)&uStack_4 + iVar3) = *(undefined4 *)((int)pvVar22 + 4);
        operator_delete(pvVar22);
        *(undefined4 *)(this + 0x6cc) = *(undefined4 *)((int)&uStack_4 + iVar3);
      }
      *(undefined4 *)(this + 0x6d8) = 0;
      *(ZombieCafe **)(this + 0x6d0) = this + 0x6c8;
      *(undefined4 *)(this + 0x6d4) = 0;
    }
    *(ZombieCafe **)((int)&uStack_4 + iVar3) = this + 0x6c8;
    for (iVar10 = 0; iVar10 < *(int *)(&stack0xfffffff8 + iVar3); iVar10 = iVar10 + 1) {
      uVar30 = DataInputStream::readInt(this_00);
      CapcomLinkedList<unsigned_int>::add
                (*(CapcomLinkedList<unsigned_int> **)((int)&uStack_4 + iVar3),uVar30);
    }
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024d9fc + 0x24d810),
             *(undefined4 *)(&stack0xfffffff8 + iVar3));
    L_PrintLog((char *)(DAT_0024da00 + 0x24d81e),*(char **)(&stack0xfffffff4 + iVar3));
  }
  if (0x26 < (int)*puVar34) {
    DataInputStream::readDouble();
    uVar11 = __fixdfsi();
    *(undefined4 *)(this + DAT_0024da04) = uVar11;
  }
  if (0x27 < (int)*puVar34) {
    uVar11 = DataInputStream::readShort(this_00);
    pZVar29 = this + DAT_0024da08;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
    *(undefined4 *)(pZVar29 + 4) = 0xffffffff;
    *(ZombieCafe **)((int)&uStack_4 + iVar3) = pZVar29;
    for (iVar10 = 0; iVar10 < *(int *)(&stack0xfffffff8 + iVar3); iVar10 = iVar10 + 1) {
      if ((iVar10 < 0x12) || ((uint)(*puVar34 < 0x2f) == (int)*puVar34 >> 0x1f)) {
        bVar7 = (bool)DataInputStream::readBoolean(this_00);
        Vector<bool>::addElement(*(Vector<bool> **)((int)&uStack_4 + iVar3),bVar7);
      }
      else {
        DataInputStream::readBoolean(this_00);
      }
    }
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    *(ZombieCafe **)((int)&uStack_4 + iVar3) = this + DAT_0024da08;
    for (iVar10 = 0; iVar10 < (int)(uint)*(ushort *)(this + DAT_0024da14); iVar10 = iVar10 + 1) {
      if (*(char *)(*(int *)(iVar10 * 4 + *(int *)(this + DAT_0024da0c)) + DAT_0024da10) != '\0') {
        *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + 1;
        if (*(int *)(*(Vector<bool> **)((int)&uStack_4 + iVar3) + 4) + 1 <
            *(int *)(&stack0xfffffff8 + iVar3)) {
          Vector<bool>::addElement(*(Vector<bool> **)((int)&uStack_4 + iVar3),false);
        }
      }
    }
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x990) = uVar11;
  }
  iVar10 = DAT_0024da18;
  if (0x28 < (int)*puVar34) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024da1c] = ZVar6;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + iVar10) = uVar11;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[0x6f0] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024da20] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024da24 + 0x24d914),
           *(undefined4 *)(this + iVar10));
  L_PrintLog((char *)(DAT_0024da28 + 0x24d922),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x29 < (int)*puVar34) {
    DataInputStream::readUTF();
    String::operator=((String *)(this + 0x9a0),&stack0x000000e8 + iVar3);
    String::~String((String *)(&stack0x000000e8 + iVar3));
    DataInputStream::readUTF();
    String::operator=((String *)(this + DAT_0024da2c),&stack0x000000f0 + iVar3);
    String::~String((String *)(&stack0x000000f0 + iVar3));
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024da30] = ZVar6;
  }
  iVar10 = DAT_0024da34;
  if (0x2b < (int)*puVar34) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[iVar10] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024da38 + 0x24d98c),
           (uint)(byte)this[iVar10]);
  L_PrintLog((char *)(DAT_0024da3c + 0x24d99a),*(char **)(&stack0xfffffff4 + iVar3));
  iVar10 = DAT_0024da40;
  if (0x2c < (int)*puVar34) {
    CapcomDate::deserialize((CapcomDate *)(&stack0x000000f8 + iVar3),this_00);
    memcpy(this + iVar10,&stack0x000000f8 + iVar3,7);
    uVar11 = DataInputStream::readShort(this_00);
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
    *(ZombieCafe **)((int)&uStack_4 + iVar3) = this + DAT_0024da44;
    while (-1 < *(int *)(*(int *)((int)&uStack_4 + iVar3) + 4)) {
      pRVar17 = (RaidNotification *)
                Vector<RaidNotification*>::removeElementAt
                          (*(Vector<RaidNotification*> **)((int)&uStack_4 + iVar3),0);
      if (pRVar17 != (RaidNotification *)0x0) {
        RaidNotification::~RaidNotification(pRVar17);
        operator_delete(pRVar17);
      }
    }
    iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
    iVar12 = *(int *)(this + DAT_0024dd28);
    if (iVar12 < iVar10) {
      if (iVar10 + iVar12 * -2 < 0 != SBORROW4(iVar10,iVar12 * 2)) {
        iVar10 = iVar12 * 2;
      }
      Vector<RaidNotification*>::resize
                (*(Vector<RaidNotification*> **)((int)&uStack_4 + iVar3),iVar10,-1);
    }
    iVar10 = 0;
    while (iVar10 = iVar10 + 1, -1 < *(int *)(&stack0xfffffff8 + iVar3) - iVar10) {
      pRVar17 = (RaidNotification *)RaidNotification::deserialize(this_00);
      Vector<RaidNotification*>::addElement
                (*(Vector<RaidNotification*> **)((int)&uStack_4 + iVar3),pRVar17);
    }
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024dd2c) = uVar11;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x9c0) = uVar11;
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024dd30 + 0x24dad4),
             *(int *)(this + DAT_0024dd28 + 4) + 1);
    L_PrintLog((char *)(DAT_0024dd34 + 0x24dae0),*(char **)(&stack0xfffffff4 + iVar3));
  }
  if (0x2d < (int)*puVar34) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    iVar10 = DAT_0024dd38;
    this[DAT_0024dd38] = ZVar6;
    CapcomDate::deserialize((CapcomDate *)(&stack0x00000100 + iVar3),this_00);
    memcpy(this + DAT_0024dd3c,&stack0x00000100 + iVar3,7);
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024dd40 + 0x24db1c),
             (uint)(byte)this[iVar10]);
    L_PrintLog((char *)(DAT_0024dd44 + 0x24db2a),*(char **)(&stack0xfffffff4 + iVar3));
  }
  if (0x2e < (int)*puVar34) {
    uVar11 = DataInputStream::readShort(this_00);
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
    *(undefined4 *)(this + 0x984) = 0xffffffff;
    *(ZombieCafe **)((int)&uStack_4 + iVar3) = this + 0x980;
    for (iVar10 = 0; iVar10 < *(int *)(&stack0xfffffff8 + iVar3); iVar10 = iVar10 + 1) {
      bVar7 = (bool)DataInputStream::readBoolean(this_00);
      Vector<bool>::addElement(*(Vector<bool> **)((int)&uStack_4 + iVar3),bVar7);
    }
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024dd48 + 0x24db78),
             *(undefined4 *)(&stack0xfffffff8 + iVar3));
    L_PrintLog((char *)(DAT_0024dd4c + 0x24db88),*(char **)(&stack0xfffffff4 + iVar3));
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    *(ZombieCafe **)(&stack0x00000000 + iVar3) = this + 0x980;
    for (iVar10 = 0; uVar1 = *(ushort *)(this + DAT_0024dd58),
        *(uint *)((int)&uStack_4 + iVar3) = (uint)uVar1, iVar10 < (int)(uint)uVar1;
        iVar10 = iVar10 + 1) {
      if (*(char *)(*(int *)(iVar10 * 4 + *(int *)(this + DAT_0024dd50)) + DAT_0024dd54) != '\0') {
        iVar12 = *(int *)(&stack0xfffffff8 + iVar3);
        iVar23 = *(int *)(*(Vector<bool> **)(&stack0x00000000 + iVar3) + 4);
        *(int *)(&stack0xfffffff8 + iVar3) = iVar12 + 1;
        if (iVar23 + 1 < iVar12 + 1) {
          Vector<bool>::addElement(*(Vector<bool> **)(&stack0x00000000 + iVar3),false);
        }
      }
    }
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024dd5c + 0x24dbde),
             *(undefined4 *)((int)&uStack_4 + iVar3));
    L_PrintLog((char *)(DAT_0024dd60 + 0x24dbec),*(char **)(&stack0xfffffff4 + iVar3));
  }
  if ((int)*puVar34 < 0x30) {
    this[DAT_0024dd94] = (ZombieCafe)0x1;
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024dd64 + 0x24dc14),
             *(undefined4 *)(&stack0xfffffff8 + iVar3));
    L_PrintLog((char *)(DAT_0024dd68 + 0x24dc24),*(char **)(&stack0xfffffff4 + iVar3));
    *(ZombieCafe **)((int)&uStack_4 + iVar3) = this + DAT_0024dd6c;
    for (iVar10 = 0; iVar10 < *(int *)(&stack0xfffffff8 + iVar3); iVar10 = iVar10 + 1) {
      CapcomDate::deserialize((CapcomDate *)(&stack0x00000108 + iVar3),this_00);
      Vector<CapcomDate>::addElement
                (*(undefined4 *)((int)&uStack_4 + iVar3),*(undefined4 *)(&stack0x00000108 + iVar3),
                 *(undefined4 *)(&stack0x0000010c + iVar3));
      DataInputStream::readUTF();
      Vector<String>::addElement((Vector<String> *)(this + 0xbe0),&stack0x00000110 + iVar3);
      String::~String((String *)(&stack0x00000110 + iVar3));
    }
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024dd70 + 0x24dc78),
             *(undefined4 *)(&stack0xfffffff8 + iVar3));
    L_PrintLog((char *)(DAT_0024dd74 + 0x24dc86),*(char **)(&stack0xfffffff4 + iVar3));
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd78] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd7c] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd80] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd84] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd88] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd8c] = ZVar6;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x960) = uVar11;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024dd90) = uVar11;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd94] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024dd98] = ZVar6;
  }
  iVar10 = DAT_0024dd9c;
  if ((int)*puVar34 < 0x31) {
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'\x11');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'\x12');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'J');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'K');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'L');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'M');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'N');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'O');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'P');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'Q');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'R');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'\x14');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'\x15');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'\x16');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'!');
  }
  else {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    uVar30 = *puVar34;
    this[DAT_0024dda0] = ZVar6;
    if ((int)uVar30 < 0x32) {
      *(undefined4 *)(this + iVar10) = 0;
    }
    else {
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(this + iVar10) = uVar11;
    }
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024dda4) = uVar11;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  *puVar50 = *(undefined4 *)(this + iVar10);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e0c0 + 0x24de5a),
           (uint)(byte)this[DAT_0024e0bc]);
  L_PrintLog((char *)(DAT_0024e0c4 + 0x24de68),*(char **)(&stack0xfffffff4 + iVar3));
  L_PrintLog((char *)(DAT_0024e0c8 + 0x24de72),(char *)(DAT_0024e0cc + 0x24de74));
  iVar12 = DAT_0024e0d0;
  iVar10 = DAT_0024e0b8;
  if ((int)*puVar34 < 0x32) {
    iVar23 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(this + DAT_0024e0b8),'O');
    if ((iVar23 != 0) &&
       (iVar23 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(this + iVar10),'\"'),
       iVar23 == 0)) {
      TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(this + iVar10),'\"');
    }
    this_01 = (ObjectiveSystem *)operator_new(0x20);
    ObjectiveSystem::ObjectiveSystem(this_01);
    *(ObjectiveSystem **)(this + iVar12) = this_01;
    ObjectiveSystem::clear(this_01);
  }
  else {
    uVar11 = ObjectiveSystem::deserialize(this_00);
    *(undefined4 *)(this + iVar12) = uVar11;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024e0d4] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e0d8 + 0x24dee0),
           (uint)(byte)this[DAT_0024e0d4]);
  L_PrintLog((char *)(DAT_0024e0dc + 0x24deee),*(char **)(&stack0xfffffff4 + iVar3));
  iVar10 = DAT_0024e0e4;
  piVar31 = *(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e0e0);
  if (*piVar31 < 0x35) {
    CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000128 + iVar3),0);
    pvVar22 = memcpy(this + DAT_0024e0e8,&stack0x00000128 + iVar3,7);
    memcpy(this + DAT_0024e0ec,pvVar22,7);
    *(undefined4 *)(this + iVar10) = 100;
  }
  else {
    CapcomDate::deserialize((CapcomDate *)(&stack0x00000118 + iVar3),this_00);
    memcpy(this + DAT_0024e0e8,&stack0x00000118 + iVar3,7);
    CapcomDate::deserialize((CapcomDate *)(&stack0x00000120 + iVar3),this_00);
    memcpy(this + DAT_0024e0ec,&stack0x00000120 + iVar3,7);
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + iVar10) = uVar11;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e0f0 + 0x24df6a),
           *(undefined4 *)(this + iVar10));
  iVar10 = DAT_0024e0f8;
  L_PrintLog((char *)(DAT_0024e0f4 + 0x24df7a),*(char **)(&stack0xfffffff4 + iVar3));
  if (*piVar31 < 0x37) {
    *(undefined4 *)(this + iVar10) = 0xff;
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + iVar10) = uVar11;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e0fc + 0x24dfa6),
           *(undefined4 *)(this + iVar10));
  iVar10 = DAT_0024e104;
  L_PrintLog((char *)(DAT_0024e100 + 0x24dfb6),*(char **)(&stack0xfffffff4 + iVar3));
  if (*piVar31 < 0x39) {
    *(undefined4 *)(this + iVar10) = 0;
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + iVar10) = uVar11;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e108 + 0x24dfe2),
           *(undefined4 *)(this + iVar10));
  L_PrintLog((char *)(DAT_0024e10c + 0x24dff2),*(char **)(&stack0xfffffff4 + iVar3));
  if (*piVar31 < 0x37) {
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x720) = 0xff;
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x44) = uVar11;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x720) = uVar11;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e110 + 0x24e02c),
           *(undefined4 *)(this + 0x44));
  L_PrintLog((char *)(DAT_0024e114 + 0x24e03c),*(char **)(&stack0xfffffff4 + iVar3));
  if (*piVar31 < 0x43) {
    this[0x48] = (ZombieCafe)0x0;
    this[0x49] = (ZombieCafe)0x0;
  }
  else {
    ZVar6 = (ZombieCafe)DataInputStream::readByte(this_00);
    this[0x48] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[0x49] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e118 + 0x24e07e),
           (uint)(byte)this[0x48]);
  L_PrintLog((char *)(DAT_0024e11c + 0x24e08e),*(char **)(&stack0xfffffff4 + iVar3));
  iVar10 = *piVar31;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) =
       *(undefined4 *)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e120);
  puVar26 = *(undefined4 **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e124);
  if (iVar10 < 0x4b) {
    puVar21 = *(undefined1 **)(&stack0xfffffff8 + iVar3);
    *puVar26 = 0;
    *puVar21 = 0;
  }
  else {
    uVar5 = DataInputStream::readUnsignedByte(this_00);
    **(undefined1 **)(&stack0xfffffff8 + iVar3) = uVar5;
    uVar11 = DataInputStream::readLong(this_00);
    *puVar26 = uVar11;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e434 + 0x24e148),
           (uint)**(byte **)(&stack0xfffffff8 + iVar3));
  iVar10 = DAT_0024e43c;
  L_PrintLog((char *)(DAT_0024e438 + 0x24e158),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x4b < *piVar31) {
    uVar9 = DataInputStream::readShort(this_00);
    *(undefined2 *)(this + iVar10) = uVar9;
    uVar9 = DataInputStream::readShort(this_00);
    *(undefined2 *)(this + DAT_0024e440) = uVar9;
    uVar9 = DataInputStream::readShort(this_00);
    *(undefined2 *)(this + DAT_0024e444) = uVar9;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024e448] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  iVar12 = DAT_0024e450;
  sVar2 = *(short *)(this + iVar10);
  pcVar27 = *(char **)(&stack0xfffffff4 + iVar3);
  *piVar51 = (int)*(short *)(this + DAT_0024e440);
  snprintf(pcVar27,0x100,(char *)(DAT_0024e44c + 0x24e1a0),(int)sVar2);
  L_PrintLog((char *)(DAT_0024e454 + 0x24e1b2),*(char **)(&stack0xfffffff4 + iVar3));
  if (*piVar31 < 0x36) {
    this[iVar12] = (ZombieCafe)0x0;
  }
  else {
    DataInputStream::readBoolean(this_00);
    ZVar6 = (ZombieCafe)DataInputStream::readByte(this_00);
    this[iVar12] = ZVar6;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e458 + 0x24e1e4),
           (uint)(byte)this[iVar12]);
  L_PrintLog((char *)(DAT_0024e45c + 0x24e1f2),*(char **)(&stack0xfffffff4 + iVar3));
  if (*piVar31 < 0x38) {
    *(undefined4 *)(this + DAT_0024e460) = 0xffffffff;
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024e460) = uVar11;
  }
  pcVar27 = *(char **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e464);
  memset(pcVar27,0,0x100);
  snprintf(pcVar27,0x100,(char *)(DAT_0024e468 + 0x24e22e),*(undefined4 *)(this + DAT_0024e460));
  L_PrintLog((char *)(DAT_0024e46c + 0x24e23a),pcVar27);
  iVar10 = *piVar31;
  *(char **)(&stack0xfffffff4 + iVar3) = pcVar27;
  if (iVar10 < 0x39) {
    *(undefined4 *)(this + 0x728) =
         **(undefined4 **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e470);
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x728) = uVar11;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e474 + 0x24e272),
           *(undefined4 *)(this + 0x728));
  L_PrintLog((char *)(DAT_0024e478 + 0x24e280),*(char **)(&stack0xfffffff4 + iVar3));
  L_PrintLog((char *)(DAT_0024e47c + 0x24e28a),(char *)(DAT_0024e480 + 0x24e28c));
  pbVar19 = *(byte **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e484);
  *pbVar19 = 0;
  if (0x3c < *piVar31) {
    bVar8 = DataInputStream::readBoolean(this_00);
    *pbVar19 = bVar8;
  }
  memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
  snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e488 + 0x24e2bc),
           (uint)*pbVar19);
  L_PrintLog((char *)(DAT_0024e48c + 0x24e2ca),*(char **)(&stack0xfffffff4 + iVar3));
  if (0x40 < *piVar31) {
    while (-1 < *(int *)(this + 0x6b4)) {
      pvVar22 = (void *)Vector<EarlyBirdSaleBuyTimer*>::removeElementAt
                                  ((Vector<EarlyBirdSaleBuyTimer*> *)(this + 0x6b0),0);
      operator_delete(pvVar22);
    }
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)((int)&uStack_4 + iVar3) = uVar11;
    snprintf(&stack0x00000160 + iVar3,0x100,(char *)(DAT_0024e490 + 0x24e2fc),
             *(undefined4 *)((int)&uStack_4 + iVar3));
    L_PrintLog((char *)(DAT_0024e494 + 0x24e30e),&stack0x00000160 + iVar3);
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    *(int **)(&stack0x00000000 + iVar3) = piVar31;
    while (*(int *)(&stack0xfffffff8 + iVar3) < *(int *)((int)&uStack_4 + iVar3)) {
      puVar26 = (undefined4 *)operator_new(8);
      *puVar26 = 0xffffffff;
      puVar26[1] = 0;
      uVar11 = DataInputStream::readInt(this_00);
      *puVar26 = uVar11;
      uVar11 = DataInputStream::readLong(this_00);
      puVar26[1] = uVar11;
      iVar10 = *(int *)(this + 0x6b4) + 2;
      if (*(int *)(this + 0x6b0) < iVar10) {
        iVar12 = *(int *)(this + 0x6b0) * 2;
        if (iVar12 < iVar10) {
          iVar12 = iVar10;
        }
        Vector<EarlyBirdSaleBuyTimer*>::resize
                  ((Vector<EarlyBirdSaleBuyTimer*> *)(this + 0x6b0),iVar12,-1);
      }
      iVar12 = *(int *)(this + 0x6b4);
      iVar10 = *(int *)(&stack0xfffffff8 + iVar3);
      *(int *)(this + 0x6b4) = iVar12 + 1;
      *(undefined4 **)((iVar12 + 1) * 4 + *(int *)(this + 0x6b8)) = puVar26;
      *(int *)(&stack0xfffffff8 + iVar3) = iVar10 + 1;
    }
    piVar31 = *(int **)(&stack0x00000000 + iVar3);
  }
  L_PrintLog((char *)(DAT_0024e498 + 0x24e382),(char *)(DAT_0024e49c + 0x24e384));
  if (0x45 < *piVar31) {
    uVar11 = DataInputStream::readShort(this_00);
    pZVar29 = this + DAT_0024e4a0;
    *(undefined4 *)(&stack0x00000000 + iVar3) = uVar11;
    *(undefined4 *)(pZVar29 + 4) = 0xffffffff;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar3) = 0;
    *(ZombieCafe **)(&stack0x00000008 + iVar3) = pZVar29;
    while (iVar10 = DAT_0024e4ac,
          *(int *)(&stack0xfffffff8 + iVar3) < *(int *)(&stack0x00000000 + iVar3)) {
      iVar10 = DataInputStream::readByte(this_00);
      Vector<unsigned_char>::addElement
                (*(Vector<unsigned_char> **)(&stack0x00000008 + iVar3),(uchar)iVar10);
      *(int *)((int)&uStack_4 + iVar3) = *(int *)((int)&uStack_4 + iVar3) + iVar10;
      *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) + 1;
    }
    L_PrintLog((char *)(DAT_0024e4a4 + 0x24e3d8),(char *)(DAT_0024e4a8 + 0x24e3da));
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e4b0 + 0x24e3f2),
             *(undefined4 *)(&stack0x00000000 + iVar3));
    L_PrintLog((char *)(iVar10 + 0x24e3f4),*(char **)(&stack0xfffffff4 + iVar3));
    memset(*(void **)(&stack0xfffffff4 + iVar3),0,0x100);
    snprintf(*(char **)(&stack0xfffffff4 + iVar3),0x100,(char *)(DAT_0024e4b8 + 0x24e41c),
             (uint)*(ushort *)(this + DAT_0024e4b4));
    L_PrintLog((char *)(iVar10 + 0x24e3f4),*(char **)(&stack0xfffffff4 + iVar3));
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
    this_04 = (Vector<unsigned_char> *)(this + DAT_0024e4a0);
    while (*(int *)(&stack0xfffffff4 + iVar3) < (int)(uint)*(ushort *)(this + DAT_0024e7ec)) {
      iVar10 = *(int *)(&stack0xfffffff4 + iVar3) + 1;
      iVar12 = *(int *)(this_04 + 4) + 1;
      *(int *)(&stack0xfffffff4 + iVar3) = iVar10;
      if (iVar10 + iVar12 * -4 < 0 == SBORROW4(iVar10,iVar12 * 4)) {
        Vector<unsigned_char>::addElement(this_04,'\0');
      }
    }
    if (0x4a < *piVar31) {
      L_PrintLog((char *)(DAT_0024e7f0 + 0x24e4ec),(char *)(DAT_0024e7f4 + 0x24e4ee));
      uVar30 = DataInputStream::readByte(this_00);
      if ((*(uint *)((int)&uStack_4 + iVar3) & 0xff) != uVar30) {
        this[DAT_0024e7f8] = (ZombieCafe)0x1;
      }
    }
  }
  L_PrintLog((char *)(DAT_0024e7fc + 0x24e50e),(char *)(DAT_0024e800 + 0x24e510));
  iVar10 = *piVar31;
  piVar13 = *(int **)(this + 0x40);
  *(undefined4 *)(&stack0xfffffff4 + iVar3) =
       *(undefined4 *)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e804);
  if (iVar10 < 0x46) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))();
      *(undefined4 *)(this + 0x40) = 0;
    }
    L_PrintLog((char *)(DAT_0024e810 + 0x24e55c),(char *)(DAT_0024e814 + 0x24e55e));
    *(undefined4 *)(this + 0x40) = 0;
    this_02 = (Quest *)operator_new(0x50);
    Quest::Quest(this_02);
    psVar18 = *(short **)(&stack0xfffffff4 + iVar3);
    *(Quest **)(this + 0x40) = this_02;
    Quest::initQuestStates(this_02,(int)*psVar18);
  }
  else {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))();
      *(undefined4 *)(this + 0x40) = 0;
    }
    uVar11 = Quest::deserialize(this_00);
    iVar10 = DAT_0024e808;
    *(undefined4 *)(this + 0x40) = uVar11;
    L_PrintLog((char *)(DAT_0024e80c + 0x24e542),(char *)(iVar10 + 0x24e540));
  }
  Quest::calEnableQuestCnt(*(Quest **)(this + 0x40));
  L_PrintLog((char *)(DAT_0024e818 + 0x24e58e),(char *)(DAT_0024e81c + 0x24e590));
  for (iVar10 = 0; iVar10 < **(short **)(&stack0xfffffff4 + iVar3); iVar10 = iVar10 + 1) {
    piVar13 = (int *)QuestData::getData(iVar10);
    Quest::checkQuestState(*(Quest **)(this + 0x40),*piVar13);
    piVar13 = (int *)QuestData::getData(iVar10);
    Quest::changedQuestState(*(Quest **)(this + 0x40),*piVar13,1,2);
  }
  L_PrintLog((char *)(DAT_0024e820 + 0x24e5ce),(char *)(DAT_0024e824 + 0x24e5d0));
  for (iVar10 = 0; iVar10 < **(short **)(&stack0xfffffff4 + iVar3); iVar10 = iVar10 + 1) {
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = *(undefined4 *)(this + 0x40);
    puVar26 = (undefined4 *)QuestData::getData(iVar10);
    *(undefined4 *)((int)&uStack_4 + iVar3) = *puVar26;
    Platform::getAppTime();
    Quest::addActiveQuest(*(int *)(&stack0xfffffff8 + iVar3),*pdVar52);
  }
  L_PrintLog((char *)(DAT_0024e828 + 0x24e606),(char *)(DAT_0024e82c + 0x24e608));
  Quest::checkCompleteStartGame(*(Quest **)(this + 0x40));
  Quest::adjustedActiveState(*(Quest **)(this + 0x40));
  if (0x4e < *piVar31) {
    uVar11 = DataInputStream::readLong(this_00);
    *(undefined4 *)(this + DAT_0024e830) = uVar11;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024e834) = uVar11;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0xa40) = uVar11;
  }
  if (0x4f < *piVar31) {
    uVar11 = DataInputStream::readLong(this_00);
    *(undefined4 *)(this + DAT_0024e838) = uVar11;
    CapcomDate::deserialize((CapcomDate *)(&stack0x00000130 + iVar3),this_00);
    memcpy(this + DAT_0024e83c,&stack0x00000130 + iVar3,7);
  }
  clearGiftBox(this);
  iVar10 = *piVar31;
  if (0x4f < iVar10) {
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 10;
    if (0x5d < iVar10) {
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0xe;
    }
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
    pZVar29 = this;
    do {
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(pZVar29 + 0x5c8) = uVar11;
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(pZVar29 + DAT_0024e840) = uVar11;
      uVar11 = DataInputStream::readInt(this_00);
      iVar10 = *(int *)(&stack0xfffffff4 + iVar3);
      *(undefined4 *)(pZVar29 + 0x5d0) = uVar11;
      *(int *)(&stack0xfffffff4 + iVar3) = iVar10 + 1;
      pZVar29 = pZVar29 + 0xc;
    } while (iVar10 + 1 < *(int *)(&stack0xfffffff8 + iVar3));
  }
  if (0x53 < *piVar31) {
    deserializeZombieFlowerInfo(this,this_00);
  }
  if (0x55 < *piVar31) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0xa50) = uVar11;
  }
  if (0x55 < *piVar31) {
    deserializeZombie_EventRaidInfo(this,this_00);
  }
  if (0x5a < *piVar31) {
    deserializeZombie_EventRaid2Info(this,this_00);
  }
  *(undefined4 *)(this + 0x498) = 0;
  if (0x5c < *piVar31) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x498) = uVar11;
  }
  if (0x5d < *piVar31) {
    deserializeZombie_InstallGiftInfo(this,this_00);
  }
  if (0x5e < *piVar31) {
    deserializeZombie_AmpouleRaidInfo(this,this_00);
  }
  if (0x62 < *piVar31) {
    deserializeZombie_WeekRaidInfo(this,this_00);
  }
  if (0x62 < *piVar31) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024e844] = ZVar6;
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024e848] = ZVar6;
  }
  if (0x6e < *piVar31) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024e84c] = ZVar6;
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024e850) = uVar11;
  }
  piVar31 = *(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0024e854);
  if (0x79 < *piVar31) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0xa60) = uVar11;
  }
  iVar10 = DAT_0024e858;
  if (*piVar31 < 99) {
    *(undefined4 *)(this + DAT_0024e858) = 0;
    iVar10 = 0;
    do {
      iVar23 = arc4random();
      iVar12 = iVar10 + 0x730;
      iVar10 = iVar10 + 4;
      *(int *)(this + iVar12) = iVar23 + (iVar23 >> 0x1f) ^ iVar23 >> 0x1f;
    } while (iVar10 != 0x58);
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    iVar12 = DAT_0024e85c;
    *(undefined4 *)(this + iVar10) = uVar11;
    snprintf(&stack0x00000260 + iVar3,0x100,(char *)(iVar12 + 0x24e796),uVar11);
    L_PrintLog((char *)(DAT_0024e860 + 0x24e7a6),&stack0x00000260 + iVar3);
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0;
    *(ZombieCafe **)(&stack0x00000004 + iVar3) = this;
    pcVar27 = (char *)(DAT_0024e864 + 0x24e7b2);
    do {
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(*(int *)(&stack0x00000004 + iVar3) + 0x730) = uVar11;
      uVar25 = *(undefined4 *)(&stack0xfffffff4 + iVar3);
      *puVar53 = uVar11;
      snprintf(&stack0x00000260 + iVar3,0x100,pcVar27,uVar25);
      L_PrintLog((char *)(DAT_0024e868 + 0x24e7d8),&stack0x00000260 + iVar3);
      iVar10 = *(int *)(&stack0xfffffff4 + iVar3);
      *(int *)(&stack0xfffffff4 + iVar3) = iVar10 + 1;
      *(int *)(&stack0x00000004 + iVar3) = *(int *)(&stack0x00000004 + iVar3) + 4;
    } while (iVar10 + 1 != 0x16);
  }
  if (*piVar31 < 0x7a) {
    *(undefined4 *)(this + 0x788) = 0;
    iVar10 = 0;
    do {
      iVar23 = arc4random();
      iVar12 = DAT_0024eb54 + iVar10;
      iVar10 = iVar10 + 4;
      *(int *)(this + iVar12) = iVar23 + (iVar23 >> 0x1f) ^ iVar23 >> 0x1f;
    } while (iVar10 != 0x58);
  }
  else {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + 0x788) = uVar11;
    iVar10 = 0;
    do {
      uVar11 = DataInputStream::readInt(this_00);
      iVar12 = iVar10 + 4;
      *(undefined4 *)(this + DAT_0024eb54 + iVar10) = uVar11;
      iVar10 = iVar12;
    } while (iVar12 != 0x58);
  }
  if (0x67 < *piVar31) {
    deserializeZombie_EventRaid3Info(this,this_00);
    ClearPicGiftBox(this);
    uVar11 = DataInputStream::readInt(this_00);
    iVar10 = 0;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
    while (*(int *)(&stack0xfffffff4 + iVar3) = iVar10,
          *(int *)(&stack0xfffffff4 + iVar3) < *(int *)(&stack0xfffffff8 + iVar3)) {
      __s = (PicGiftBoxInfo *)operator_new(0x18);
      memset(__s,0,0x18);
      *(String **)(&stack0x00000004 + iVar3) = (String *)(__s + 0x10);
      String::String((String *)(__s + 0x10));
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)__s = uVar11;
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(__s + 4) = uVar11;
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(__s + 8) = uVar11;
      uVar11 = DataInputStream::readInt(this_00);
      *(undefined4 *)(__s + 0xc) = uVar11;
      DataInputStream::readUTF();
      String::operator=(*(String **)(&stack0x00000004 + iVar3),&stack0x00000138 + iVar3);
      String::~String((String *)(&stack0x00000138 + iVar3));
      Vector<PicGiftBoxInfo*>::addElement((Vector<PicGiftBoxInfo*> *)(this + 0x670),__s);
      iVar10 = *(int *)(&stack0xfffffff4 + iVar3) + 1;
    }
  }
  if (0x69 < *piVar31) {
    deserializeZombie_basicEventInfo(this,this_00);
  }
  if (0x70 < *piVar31) {
    uVar11 = DataInputStream::readInt(this_00);
    *(undefined4 *)(this + DAT_0024eb58) = uVar11;
    *(ZombieCafe **)(&stack0xfffffff4 + iVar3) = this + 0x9b0;
    DataInputStream::readUTF();
    String::operator=(*(String **)(&stack0xfffffff4 + iVar3),&stack0x00000140 + iVar3);
    String::~String((String *)(&stack0x00000140 + iVar3));
    String::String((String *)(&stack0x00000148 + iVar3),*(String **)(&stack0xfffffff4 + iVar3));
    iVar10 = operator!=(&stack0x00000148 + iVar3,0);
    String::~String((String *)(&stack0x00000148 + iVar3));
    if (iVar10 != 0) {
      String::String((String *)(&stack0x00000150 + iVar3),(char *)(DAT_0024eb5c + 0x24e9be));
      iVar10 = String::equals(*(String **)(&stack0xfffffff4 + iVar3),&stack0x00000150 + iVar3);
      String::~String((String *)(&stack0x00000150 + iVar3));
      if (iVar10 != 0) {
        String::String((String *)(&stack0x00000158 + iVar3),(char *)(DAT_0024eb60 + 0x24e9dc));
        String::operator=(*(String **)(&stack0xfffffff4 + iVar3),&stack0x00000158 + iVar3);
        String::~String((String *)(&stack0x00000158 + iVar3));
      }
    }
  }
  if (0x75 < *piVar31) {
    ZVar6 = (ZombieCafe)DataInputStream::readBoolean(this_00);
    this[DAT_0024eb64] = ZVar6;
  }
  iVar10 = DAT_0024eb6c;
  if (*piVar31 < 0x7c) {
    if ((this[DAT_0024eb68] != (ZombieCafe)0x0) && (this[DAT_0024eb6c] != (ZombieCafe)0x0)) {
      this[0x6f8] = (ZombieCafe)0x1;
    }
    this[iVar10] = (ZombieCafe)0x0;
    this[DAT_0024eb70] = (ZombieCafe)0x0;
    *(undefined4 *)(this + DAT_0024eb74) = 0;
  }
  if (this_00 != (DataInputStream *)0x0) {
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  setMusicVolume(this,(uchar)this[0x3f8]);
  iVar12 = DAT_0024eb7c;
  iVar10 = DAT_0024eb78;
  this[0x3fc] = (ZombieCafe)0x0;
  L_PrintLog((char *)(iVar10 + 0x24ea4e),(char *)(iVar12 + 0x24ea50));
  if (*(int *)(&stack0x00000360 + iVar3) == **(int **)(&stack0x00000018 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


