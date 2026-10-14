/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247b5c ZombieCafe::orderFood */

/* ZombieCafe::orderFood(FriendData*, unsigned char, unsigned char) */

void __thiscall
ZombieCafe::orderFood(ZombieCafe *this,FriendData *param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  String aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  piVar7 = *(int **)(DAT_00247c70 + 0x247b68);
  local_1c = *piVar7;
  iVar3 = canOrderFood(this,param_1);
  uVar2 = 2;
  if (iVar3 != 0) {
    if (*(char *)(*(int *)(this + 0x4e8) + (uint)param_2 * 0x1c + 0x18) == '\x04') {
      uVar2 = 4;
    }
    else {
      snprintf(acStack_9c,0x80,(char *)(DAT_00247c9c + 0x247c2a),(uint)param_2,(uint)param_3);
      L_PrintLog((char *)(DAT_00247ca0 + 0x247c3e),(char *)(DAT_00247ca4 + 0x247c3c));
      pcVar5 = (char *)String::getBytes((String *)(param_1 + 0x24));
      iVar1 = DAT_00247ca8;
      pcVar6 = (char *)CCFacebook::GetUserIdAsString(*(void **)(this + DAT_00247ca8));
      String::String(aSStack_a4,(String *)(param_1 + 0x24));
      Vector<String>::addElement((Vector<String> *)(this + DAT_00247cac),aSStack_a4);
      iVar3 = DAT_00247c74;
      String::~String(aSStack_a4);
      pcVar8 = (char *)(iVar3 + 0x247ba2);
      L_PrintLog(pcVar8,(char *)(DAT_00247c78 + 0x247ba6));
      pcVar4 = (char *)CCFacebook::GetMyName(*(void **)(this + iVar1));
      L_PrintLog((char *)(DAT_00247c7c + 0x247bba),pcVar5);
      L_PrintLog((char *)(DAT_00247c80 + 0x247bc4),pcVar4);
      L_PrintLog((char *)(DAT_00247c84 + 0x247bce),pcVar6);
      L_PrintLog((char *)(DAT_00247c88 + 0x247bd8),acStack_9c);
      GiftManager::SendOrder(*(void **)(this + DAT_00247c8c),pcVar5,pcVar4,pcVar6,acStack_9c);
      L_PrintLog(pcVar8,(char *)(DAT_00247c90 + 0x247bf2));
      ObjectiveSystem::orderFood(*(ObjectiveSystem **)(this + DAT_00247c94));
      L_PrintLog(pcVar8,(char *)(DAT_00247c98 + 0x247c04));
      uVar2 = 0;
    }
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


