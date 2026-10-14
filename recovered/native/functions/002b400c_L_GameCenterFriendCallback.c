/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b400c L_GameCenterFriendCallback */

/* L_GameCenterFriendCallback(void*, unsigned int, unsigned int, ccGameCenterFriendInfo const*) */

void L_GameCenterFriendCallback
               (void *param_1,uint param_2,uint param_3,ccGameCenterFriendInfo *param_4)

{
  void *__dest;
  int iVar1;
  
  if (param_2 == 0) {
    if (*(code **)((int)param_1 + 0x27c) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x27c))(*(undefined4 *)((int)param_1 + 0x280));
      *(undefined4 *)((int)param_1 + 0x27c) = 0;
      *(undefined4 *)((int)param_1 + 0x280) = 0;
    }
  }
  else {
    if (param_2 != *(uint *)((int)param_1 + 0x224)) {
      *(uint *)((int)param_1 + 0x224) = param_2;
      iVar1 = *(int *)((int)param_1 + 0x220);
      __dest = malloc((param_2 + iVar1) * 0x284);
      memcpy(__dest,*(void **)((int)param_1 + 0x22c),iVar1 * 0x284);
      free(*(void **)((int)param_1 + 0x22c));
      *(void **)((int)param_1 + 0x22c) = __dest;
    }
    iVar1 = (param_3 + *(int *)((int)param_1 + 0x220)) * 0x284;
    *(undefined4 *)(*(int *)((int)param_1 + 0x22c) + iVar1) = 1;
    strncpy((char *)(*(int *)((int)param_1 + 0x22c) + iVar1 + 4),(char *)(param_4 + 0x80),0x80);
    *(undefined1 *)(*(int *)((int)param_1 + 0x22c) + iVar1 + 0x84) = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0x22c) + iVar1 + 0x104) = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0x22c) + iVar1 + 0x184) = 0;
    snprintf((char *)(*(int *)((int)param_1 + 0x22c) + iVar1 + 0x204),0x80,
             (char *)(DAT_002b4104 + 0x2b40c2),param_4);
    CCSwapChars((char *)(*(int *)((int)param_1 + 0x22c) + iVar1 + 0x204),':','_',0x80);
    *(undefined4 *)(*(int *)((int)param_1 + 0x22c) + iVar1) = 1;
    if ((param_3 == param_2 - 1) && (*(code **)((int)param_1 + 0x27c) != (code *)0x0)) {
      (**(code **)((int)param_1 + 0x27c))(*(undefined4 *)((int)param_1 + 0x280));
      *(undefined4 *)((int)param_1 + 0x27c) = 0;
      *(undefined4 *)((int)param_1 + 0x280) = 0;
    }
  }
  return;
}


