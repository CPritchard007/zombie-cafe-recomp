/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f5a0 GameStateRaid::saveData */

/* GameStateRaid::saveData() */

void __thiscall GameStateRaid::saveData(GameStateRaid *this)

{
  GameStateRaid GVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  SaveDataOutputStream *pSVar5;
  DataOutputStream *this_00;
  char *__format;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  Character *pCVar11;
  int *piVar12;
  
  iVar3 = DAT_0017f840;
  puVar9 = *(undefined4 **)(DAT_0017f848 + 0x17f5b4);
  *(undefined4 *)(&stack0x00000220 + DAT_0017f840) = *puVar9;
  L_PrintLog((char *)(DAT_0017f84c + 0x17f5b8),(char *)(DAT_0017f844 + 0x17f5b2));
  GVar1 = this[0x12];
  *(undefined4 **)(&stack0xfffffff8 + iVar3) = puVar9;
  if (GVar1 == (GameStateRaid)0x0) {
    sprintf(&stack0x00000020 + iVar3,(char *)(DAT_0017f85c + 0x17f5f0),*(int *)(this + 0x4c));
    iVar7 = *(int *)(this + 0x4c);
    __format = (char *)(DAT_0017f860 + 0x17f5fa);
  }
  else {
    pbVar10 = *(byte **)(DAT_0017f850 + 0x17f5d2);
    sprintf(&stack0x00000020 + iVar3,(char *)(DAT_0017f854 + 0x17f5d6),
            (uint)*pbVar10 + *(int *)(this + 0x4c));
    __format = (char *)(DAT_0017f858 + 0x17f5e6);
    iVar7 = (uint)*pbVar10 + *(int *)(this + 0x4c);
  }
  sprintf(&stack0x00000120 + iVar3,__format,iVar7);
  L_PrintLog((char *)(DAT_0017f864 + 0x17f606),&stack0x00000020 + iVar3);
  L_PrintLog((char *)(DAT_0017f868 + 0x17f610),&stack0x00000120 + iVar3);
  if (this[0x12] == (GameStateRaid)0x0) {
    if (this[0x13] == (GameStateRaid)0x0) goto LAB_0017f644;
    printf((char *)(DAT_0017f874 + 0x17f638),*(undefined4 *)(this + 0x50));
    iVar8 = *(int *)(this + 0xc);
    uVar6 = *(undefined4 *)(this + 0x50);
    iVar7 = 0x720;
  }
  else {
    printf((char *)(DAT_0017f86c + 0x17f620),*(undefined4 *)(this + 0x50));
    iVar8 = *(int *)(this + 0xc);
    uVar6 = *(undefined4 *)(this + 0x50);
    iVar7 = DAT_0017f870;
  }
  *(undefined4 *)(iVar8 + iVar7) = uVar6;
LAB_0017f644:
  ZombieCafe::save();
  if ((((this[0x13] == (GameStateRaid)0x0) && (this[0x14] == (GameStateRaid)0x0)) &&
      (this[0x16] == (GameStateRaid)0x0)) && (this[0x15] == (GameStateRaid)0x0)) {
    if (this[0x12] == (GameStateRaid)0x0) {
      String::String((String *)(&stack0x00000008 + iVar3),&stack0x00000020 + iVar3);
      pSVar5 = (SaveDataOutputStream *)operator_new(0x14);
      SaveDataOutputStream::SaveDataOutputStream(pSVar5,&stack0x00000008 + iVar3);
      puVar2 = &stack0x00000008;
    }
    else {
      String::String((String *)(&stack0x00000000 + iVar3),&stack0x00000020 + iVar3);
      pSVar5 = (SaveDataOutputStream *)operator_new(0x14);
      SaveDataOutputStream::SaveDataOutputStream(pSVar5,&stack0x00000000 + iVar3);
      puVar2 = (undefined1 *)register0x00000054;
    }
    String::~String((String *)(puVar2 + iVar3));
    Cafe::serialize(*(Cafe **)(this + 0x78),(OutputStream *)pSVar5);
    (**(code **)(*(int *)pSVar5 + 8))(pSVar5);
    (**(code **)(*(int *)pSVar5 + 4))(pSVar5);
    if (this[0x12] == (GameStateRaid)0x0) {
      String::String((String *)(&stack0x00000018 + iVar3),&stack0x00000120 + iVar3);
      pSVar5 = (SaveDataOutputStream *)operator_new(0x14);
      SaveDataOutputStream::SaveDataOutputStream(pSVar5,&stack0x00000018 + iVar3);
      puVar2 = &stack0x00000018;
    }
    else {
      String::String((String *)(&stack0x00000010 + iVar3),&stack0x00000120 + iVar3);
      pSVar5 = (SaveDataOutputStream *)operator_new(0x14);
      SaveDataOutputStream::SaveDataOutputStream(pSVar5,&stack0x00000010 + iVar3);
      puVar2 = &stack0x00000010;
    }
    String::~String((String *)(puVar2 + iVar3));
    this_00 = (DataOutputStream *)operator_new(4);
    DataOutputStream::DataOutputStream(this_00,(OutputStream *)pSVar5);
    bVar4 = SUB41(this_00,0);
    DataOutputStream::writeByte(bVar4);
    iVar7 = *(int *)(this + 0xf8);
    if (iVar7 == 0) {
      DataOutputStream::writeBoolean(bVar4);
    }
    else {
      __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar7 + 0x8c) + 0x40),0);
      DataOutputStream::writeBoolean(bVar4);
      pCVar11 = *(Character **)(*(int *)(this + 0xf8) + 0x8c);
      iVar7 = __aeabi_fcmple(*(undefined4 *)(pCVar11 + 0x40),0);
      if (iVar7 == 0) {
        Character::serialize(pCVar11,this_00);
      }
    }
    DataOutputStream::writeInt((int)this_00);
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
    *(GameStateRaid **)(&stack0xfffffff4 + iVar3) = this + 0xc4;
    while (*(int *)(&stack0xfffffff0 + iVar3) < *(int *)(*(int *)(&stack0xfffffff4 + iVar3) + 4) + 1
          ) {
      piVar12 = (int *)(*(int *)(*(int *)(&stack0xfffffff0 + iVar3) * 4 +
                                *(int *)(*(int *)(&stack0xfffffff4 + iVar3) + 8)) + 0x8c);
      __aeabi_fcmple(*(undefined4 *)(*piVar12 + 0x40),0);
      DataOutputStream::writeBoolean(bVar4);
      pCVar11 = (Character *)*piVar12;
      iVar7 = __aeabi_fcmple(*(undefined4 *)(pCVar11 + 0x40),0);
      if (iVar7 == 0) {
        Character::serialize(pCVar11,this_00);
      }
      *(int *)(&stack0xfffffff0 + iVar3) = *(int *)(&stack0xfffffff0 + iVar3) + 1;
    }
    DataOutputStream::writeInt((int)this_00);
    DataOutputStream::writeInt((int)this_00);
    operator_delete(this_00);
    (**(code **)(*(int *)pSVar5 + 8))(pSVar5);
    (**(code **)(*(int *)pSVar5 + 4))(pSVar5);
  }
  if (*(int *)(&stack0x00000220 + iVar3) == **(int **)(&stack0xfffffff8 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


