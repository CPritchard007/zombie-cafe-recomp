/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00246d48 ZombieCafe::backup */

/* ZombieCafe::backup() */

void __thiscall ZombieCafe::backup(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  OutputStream *pOVar4;
  char *pcVar5;
  uint uVar6;
  ZombieCafe *pZVar7;
  char *unaff_r4;
  void *unaff_r5;
  char *unaff_r6;
  uint *puVar8;
  String aSStack_90 [8];
  String aSStack_88 [8];
  char acStack_80 [100];
  uint local_1c;
  
  puVar8 = *(uint **)(DAT_00246ef8 + 0x246d54);
  uVar6 = *puVar8;
  local_1c = uVar6;
  L_PrintLog((char *)(DAT_00246efc + 0x246d5e),(char *)(DAT_00246f00 + 0x246d60));
  iVar2 = CCOptions::GetUInt(*(CCOptions **)(this + 0xa00),(void *)(DAT_00246f04 + 0x246d74),
                             (char *)0x0,uVar6);
  pcVar3 = (char *)CCOptions::GetUInt(*(CCOptions **)(this + 0xa00),
                                      (void *)(DAT_00246f08 + 0x246d88),(char *)0x0,(uint)this);
  if (iVar2 == 1) {
    unaff_r6 = (char *)(DAT_00246f18 + 0x246db8);
    unaff_r5 = (void *)(DAT_00246f1c + 0x246dba);
    unaff_r4 = (char *)(DAT_00246f20 + 0x246dbc);
  }
  else if (iVar2 == 2) {
    unaff_r6 = (char *)(DAT_00246f24 + 0x246dc6);
    unaff_r5 = (void *)(DAT_00246f28 + 0x246dc8);
    unaff_r4 = (char *)(DAT_00246f2c + 0x246dca);
  }
  else if (iVar2 == 0) {
    unaff_r6 = (char *)(DAT_00246f0c + 0x246daa);
    unaff_r5 = (void *)(DAT_00246f10 + 0x246dac);
    unaff_r4 = (char *)(DAT_00246f14 + 0x246dae);
  }
  Platform::getAppTime();
  snprintf(acStack_80,100,(char *)(DAT_00246f30 + 0x246dd6));
  pZVar7 = this;
  CCOptions::SetCString(*(CCOptions **)(this + 0xa00),unaff_r4,acStack_80,(char *)this);
  CCOptions::SetUInt(*(CCOptions **)(this + 0xa00),unaff_r5,pcVar3,(uint)pZVar7);
  L_PrintLog((char *)(DAT_00246f34 + 0x246dfc),unaff_r4);
  String::String(aSStack_90,unaff_r4);
  pOVar4 = (OutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar4,aSStack_90);
  String::~String(aSStack_90);
  if (pOVar4 == (OutputStream *)0x0) {
    pcVar3 = (char *)(DAT_00246f40 + 0x246e30);
    pcVar5 = (char *)(DAT_00246f44 + 0x246e32);
  }
  else {
    pcVar3 = (char *)(DAT_00246f38 + 0x246e26);
    pcVar5 = (char *)(DAT_00246f3c + 0x246e28);
  }
  L_PrintLog(pcVar3,pcVar5);
  serialize(this,pOVar4);
  (**(code **)(*(int *)pOVar4 + 8))(pOVar4);
  (**(code **)(*(int *)pOVar4 + 4))(pOVar4);
  String::String(aSStack_88,unaff_r6);
  pOVar4 = (OutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar4,aSStack_88);
  String::~String(aSStack_88);
  if (*(Cafe **)(this + 0x7e8) != (Cafe *)0x0) {
    Cafe::serialize(*(Cafe **)(this + 0x7e8),pOVar4);
  }
  (**(code **)(*(int *)pOVar4 + 8))(pOVar4);
  iVar1 = DAT_00246f48;
  (**(code **)(*(int *)pOVar4 + 4))(pOVar4);
  L_PrintLog((char *)(iVar1 + 0x246e92),(char *)(DAT_00246f4c + 0x246e96));
  uVar6 = iVar2 + 1;
  CCOptions::SetUInt(*(CCOptions **)(this + 0xa00),(void *)(DAT_00246f50 + 0x246eb2),
                     (char *)(uVar6 & -((uint)(uVar6 < 3) - ((int)uVar6 >> 0x1f))),(uint)this);
  L_PrintLog((char *)(iVar1 + 0x246e92),(char *)(DAT_00246f54 + 0x246ebe));
  if (local_1c != *puVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


