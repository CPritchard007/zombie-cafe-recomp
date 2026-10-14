/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b45a0 L_FacebookFriendCallback */

/* L_FacebookFriendCallback(void*, unsigned int, unsigned int, ccFacebookFriendInfo const*) */

void L_FacebookFriendCallback(void *param_1,uint param_2,uint param_3,ccFacebookFriendInfo *param_4)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != *(uint *)((int)param_1 + 0x220)) {
    *(uint *)((int)param_1 + 0x220) = param_2;
    free(*(void **)((int)param_1 + 0x22c));
    pvVar1 = malloc(*(int *)((int)param_1 + 0x220) * 0x284);
    *(void **)((int)param_1 + 0x22c) = pvVar1;
    *(undefined4 *)((int)param_1 + 0x224) = 0;
  }
  iVar4 = param_3 * 0x284;
  *(undefined4 *)(*(int *)((int)param_1 + 0x22c) + iVar4) = 0;
  strncpy((char *)(*(int *)((int)param_1 + 0x22c) + iVar4 + 0x84),(char *)(param_4 + 0x88),0x80);
  strncpy((char *)(*(int *)((int)param_1 + 0x22c) + iVar4 + 0x104),(char *)(param_4 + 0x108),0x80);
  strncpy((char *)(*(int *)((int)param_1 + 0x22c) + iVar4 + 4),(char *)(param_4 + 0x88),0x80);
  if (param_4[0x108] != (ccFacebookFriendInfo)0x0) {
    iVar3 = *(int *)((int)param_1 + 0x22c) + iVar4;
    sVar2 = strlen((char *)(iVar3 + 4));
    *(undefined1 *)(iVar3 + sVar2 + 4) = 0x20;
    *(ccFacebookFriendInfo *)(*(int *)((int)param_1 + 0x22c) + iVar4 + sVar2 + 5) = param_4[0x108];
    *(undefined1 *)(*(int *)((int)param_1 + 0x22c) + iVar4 + sVar2 + 6) = 0;
  }
  strncpy((char *)(*(int *)((int)param_1 + 0x22c) + iVar4 + 0x184),(char *)(param_4 + 0x188),0x80);
  snprintf((char *)(*(int *)((int)param_1 + 0x22c) + iVar4 + 0x204),0x80,
           (char *)(DAT_002b46d0 + 0x2b4680),param_4 + 0x208);
  if (param_3 == param_2 - 1) {
    if (((int)*(void **)((int)param_1 + 4) - 1U < 0xfffffffe) &&
       (iVar4 = CCGameCenter::IsConnected(*(void **)((int)param_1 + 4)), iVar4 != 0)) {
      CCGameCenter::GetFriends
                (*(void **)((int)param_1 + 4),1,
                 *(_func_void_void_ptr_uint_uint_ccGameCenterFriendInfo_ptr **)
                  (DAT_002b46d4 + 0x2b46a8),param_1);
    }
    else if (*(code **)((int)param_1 + 0x27c) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x27c))(*(undefined4 *)((int)param_1 + 0x280));
      *(undefined4 *)((int)param_1 + 0x27c) = 0;
      *(undefined4 *)((int)param_1 + 0x280) = 0;
    }
  }
  return;
}


