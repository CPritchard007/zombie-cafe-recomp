/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239e84 ZombieCafe::GameCenterEventHandler */

/* ZombieCafe::GameCenterEventHandler(void*, ccGCEventCode) */

void ZombieCafe::GameCenterEventHandler(void *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = DAT_00239ebc;
  if (param_2 == 0) {
    CCServer::GetServerTime(*(void **)((int)param_1 + DAT_00239ebc),param_1,-1);
    CCServer::UpdateFriends
              (*(void **)((int)param_1 + iVar1),*(_func_void_void_ptr **)(DAT_00239ec0 + 0x239ea4),
               param_1);
    pcVar2 = (char *)CCServer::GetMyGameCenterId(*(void **)((int)param_1 + iVar1));
    String::operator=((String *)((int)param_1 + DAT_00239ec4),pcVar2);
  }
  return;
}


