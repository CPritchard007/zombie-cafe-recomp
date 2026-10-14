/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b64c4 CCServer::GetVisibleNameForFriendIndex */

/* CCServer::GetVisibleNameForFriendIndex(void*, unsigned int) */

undefined * CCServer::GetVisibleNameForFriendIndex(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 == 0) {
    puVar3 = (undefined *)(DAT_002b64fc + 0x2b64f4);
  }
  else {
    uVar2 = L_TotalFriends((SServer *)param_1);
    if (param_2 < uVar2) {
      puVar3 = (undefined *)(*(int *)((int)param_1 + 0x22c) + param_2 * 0x284 + 4);
    }
    else {
      puVar3 = &UNK_002b64fa + DAT_002b6500;
    }
  }
  return puVar3;
}


