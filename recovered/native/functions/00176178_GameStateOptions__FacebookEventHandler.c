/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00176178 GameStateOptions::FacebookEventHandler */

/* GameStateOptions::FacebookEventHandler(ccFacebookMessageType, void*) */

void GameStateOptions::FacebookEventHandler(int param_1,int param_2)

{
  int iVar1;
  CFTexture *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  FriendData aFStack_154 [80];
  int *local_104;
  CFTexture *local_100;
  FriendData aFStack_f8 [92];
  char acStack_9c [128];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00176274 + 0x176184);
  local_1c = *piVar5;
  iVar3 = CapcomApp::getInstance();
  iVar6 = *(int *)(iVar3 + 4);
  iVar3 = *(int *)(iVar6 + 8);
  if (iVar3 == param_2) {
    *(undefined1 *)(iVar3 + 0xa8) = 0;
    if (param_1 == 4) {
      (**(code **)(**(int **)(iVar3 + 100) + 0x20))(*(int **)(iVar3 + 100),0);
      (**(code **)(**(int **)(iVar3 + 0x68) + 0x20))(*(int **)(iVar3 + 0x68),1);
      iVar1 = DAT_0017627c;
      CCServer::UpdateFriends
                (*(void **)((int)*(void **)(iVar3 + 0xc) + DAT_0017627c),
                 *(_func_void_void_ptr **)(DAT_00176278 + 0x1761ca),*(void **)(iVar3 + 0xc));
      uVar4 = CCServer::GetMyUserID(*(void **)(iVar6 + iVar1));
      snprintf(acStack_9c,0x80,(char *)(DAT_00176280 + 0x1761e0),DAT_00176284 + 0x1761e2,uVar4);
      CCMarketing_RecordAnalyticsEvent
                (*(undefined4 *)(iVar6 + DAT_00176288),DAT_0017628c + 0x1761f4,acStack_9c);
    }
    else if (param_1 == 5) {
      (**(code **)(**(int **)(iVar3 + 100) + 0x20))(*(int **)(iVar3 + 100),1);
      (**(code **)(**(int **)(iVar3 + 0x68) + 0x20))(*(int **)(iVar3 + 0x68),0);
      while (-1 < *(int *)(iVar6 + DAT_00176290 + 4)) {
        FriendData::FriendData(aFStack_154,*(FriendData **)(iVar6 + DAT_00176290 + 8));
        if (local_104 != (int *)0x0) {
          (**(code **)(*local_104 + 4))();
        }
        pCVar2 = local_100;
        if (local_100 != (CFTexture *)0x0) {
          CFTexture::~CFTexture(local_100);
          operator_delete(pCVar2);
        }
        Vector<FriendData>::removeElementAt((int)aFStack_f8);
        FriendData::~FriendData(aFStack_f8);
        FriendData::~FriendData(aFStack_154);
      }
    }
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


