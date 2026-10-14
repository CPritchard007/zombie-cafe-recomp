/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4458 CCServer::Android_FacebookFriendCallback */

/* CCServer::Android_FacebookFriendCallback(void*, int, int, char const*, char const*, char const*,
   char const*, char const*) */

void CCServer::Android_FacebookFriendCallback
               (void *param_1,int param_2,int param_3,char *param_4,char *param_5,char *param_6,
               char *param_7,char *param_8)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)((int)param_1 + DAT_002b4598);
  if (param_3 == 0) {
    *(int *)(iVar6 + 0x220) = param_2;
    if (*(void **)(iVar6 + 0x22c) != (void *)0x0) {
      free(*(void **)(iVar6 + 0x22c));
    }
    pvVar3 = malloc(*(int *)(iVar6 + 0x220) * 0x284);
    *(void **)(iVar6 + 0x22c) = pvVar3;
    *(undefined4 *)(iVar6 + 0x224) = 0;
  }
  iVar5 = param_3 * 0x284;
  iVar7 = 0;
  *(undefined1 *)(*(int *)(iVar6 + 0x22c) + iVar5 + 0x204) = 0;
  *(undefined1 *)(*(int *)(iVar6 + 0x22c) + iVar5 + 4) = 0;
  *(undefined1 *)(*(int *)(iVar6 + 0x22c) + iVar5 + 0x84) = 0;
  *(undefined1 *)(*(int *)(iVar6 + 0x22c) + iVar5 + 0x104) = 0;
  *(undefined4 *)(*(int *)(iVar6 + 0x22c) + iVar5) = 0;
  strncpy((char *)(*(int *)(iVar6 + 0x22c) + iVar5 + 0x84),param_6,0x80);
  strncpy((char *)(*(int *)(iVar6 + 0x22c) + iVar5 + 0x104),param_7,0x80);
  do {
    if (param_6[iVar7] == 0) break;
    if ((int)((uint)(byte)param_6[iVar7] << 0x18) < 0) {
      bVar1 = false;
      goto LAB_002b44f6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x80);
  bVar1 = true;
LAB_002b44f6:
  iVar7 = 0;
  do {
    if (param_7[iVar7] == 0) break;
    if ((int)((uint)(byte)param_7[iVar7] << 0x18) < 0) {
      bVar2 = false;
      goto LAB_002b4510;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x80);
  bVar2 = true;
LAB_002b4510:
  if ((bVar1) && (bVar2)) {
    strncpy((char *)(*(int *)(iVar6 + 0x22c) + iVar5 + 4),param_6,0x80);
    if (*param_7 != '\0') {
      iVar7 = *(int *)(iVar6 + 0x22c) + iVar5;
      sVar4 = strlen((char *)(iVar7 + 4));
      *(undefined1 *)(iVar7 + sVar4 + 4) = 0x20;
      *(char *)(*(int *)(iVar6 + 0x22c) + iVar5 + sVar4 + 5) = *param_7;
      *(undefined1 *)(*(int *)(iVar6 + 0x22c) + iVar5 + sVar4 + 6) = 0;
    }
  }
  else {
    strncpy((char *)(*(int *)(iVar6 + 0x22c) + iVar5 + 4),param_4,0x80);
  }
  strncpy((char *)(*(int *)(iVar6 + 0x22c) + iVar5 + 0x184),param_8,0x80);
  snprintf((char *)(*(int *)(iVar6 + 0x22c) + iVar5 + 0x204),0x80,(char *)(DAT_002b459c + 0x2b4592),
           param_5);
  return;
}


