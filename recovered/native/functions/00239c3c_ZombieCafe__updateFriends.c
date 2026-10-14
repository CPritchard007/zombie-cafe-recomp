/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239c3c ZombieCafe::updateFriends */

/* ZombieCafe::updateFriends() */

int __thiscall ZombieCafe::updateFriends(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  
  iVar1 = DAT_00239c88;
  iVar3 = CCServer::IsConnected(*(void **)(this + DAT_00239c88));
  iVar2 = DAT_00239c8c;
  if (iVar3 != 0) {
    __mutex = (pthread_mutex_t *)(DAT_00239c8c + 0x239cc6);
    pthread_mutex_lock(__mutex);
    *(undefined4 *)(iVar2 + 0x239cce) = 0;
    pthread_mutex_unlock(__mutex);
    CCServer::UpdateFriends
              (*(void **)(this + iVar1),*(_func_void_void_ptr **)(DAT_00239c90 + 0x239c6e),this);
    iVar3 = 1;
    if (-1 < *(long *)(this + DAT_00239c94)) {
      CEvent::wait((CEvent *)&__mutex->__data,*(long *)(this + DAT_00239c94),1);
    }
  }
  return iVar3;
}


