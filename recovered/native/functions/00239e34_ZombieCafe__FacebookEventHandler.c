/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239e34 ZombieCafe::FacebookEventHandler */

/* ZombieCafe::FacebookEventHandler(ccFacebookMessageType, void*) */

void ZombieCafe::FacebookEventHandler(int param_1,void *param_2)

{
  int iVar1;
  char *pcVar2;
  
  *(undefined1 *)((int)param_2 + DAT_00239e74) = 0;
  iVar1 = DAT_00239e78;
  if (param_1 == 4) {
    CCServer::GetServerTime(*(void **)((int)param_2 + DAT_00239e78),param_2,-1);
    CCServer::UpdateFriends
              (*(void **)((int)param_2 + iVar1),*(_func_void_void_ptr **)(DAT_00239e7c + 0x239e58),
               param_2);
    pcVar2 = (char *)CCFacebook::GetUserIdAsString(*(void **)((int)param_2 + DAT_00239e80));
    String::operator=((String *)((int)param_2 + 0x9a0),pcVar2);
  }
  return;
}


