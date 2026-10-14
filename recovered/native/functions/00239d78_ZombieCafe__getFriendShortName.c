/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239d78 ZombieCafe::getFriendShortName */

/* ZombieCafe::getFriendShortName(String) */

String * ZombieCafe::getFriendShortName(String *param_1,int param_2,String *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String(aSStack_28);
  pcVar2 = (char *)String::getBytes(param_3);
  L_PrintLog((char *)(DAT_00239e18 + 0x239d98),pcVar2);
  iVar1 = DAT_00239e1c;
  if (*(int *)(param_2 + DAT_00239e1c) != 0) {
    String::String(aSStack_20,param_3);
    iVar3 = operator==(aSStack_20,0);
    bVar5 = true;
    if (iVar3 == 0) {
      iVar3 = CCServer::IsConnected(*(void **)(param_2 + iVar1));
      bVar5 = iVar3 == 0;
    }
    String::~String(aSStack_20);
    if (!bVar5) {
      uVar4 = CCServer::GetFriendIndexOfUniqueId(*(void **)(param_2 + iVar1),pcVar2);
      free(pcVar2);
      if (uVar4 != 0xffffffff) {
        pcVar2 = (char *)CCServer::GetVisibleNameForFriendIndex(*(void **)(param_2 + iVar1),uVar4);
        String::String(param_1,pcVar2);
        goto LAB_00239dfa;
      }
    }
  }
  String::String(param_1,0);
LAB_00239dfa:
  String::~String(aSStack_28);
  return param_1;
}


