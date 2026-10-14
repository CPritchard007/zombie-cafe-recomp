/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00165ec0 GameStateMap::L_GotGameStateSuccess */

/* GameStateMap::L_GotGameStateSuccess(void*, char const*, unsigned char const*, unsigned int) */

void GameStateMap::L_GotGameStateSuccess(void *param_1,char *param_2,uchar *param_3,uint param_4)

{
  int iVar1;
  void *__dest;
  char *pcVar2;
  GameState *pGVar3;
  GameStateLoading *pGVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  CapcomGame *pCVar9;
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  FriendData aFStack_74 [36];
  String aSStack_50 [60];
  
  pcVar7 = (char *)(DAT_0016607c + 0x165ece);
  L_PrintLog(pcVar7,(char *)(DAT_00166080 + 0x165ed2));
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  pvVar6 = *(void **)(iVar1 + 8);
  if (pvVar6 == param_1) {
    L_PrintLog(pcVar7,(char *)(DAT_00166084 + 0x165ef2));
    __dest = operator_new__(param_4);
    memcpy(__dest,param_3,param_4);
    String::String(aSStack_8c);
    L_PrintLog((char *)(DAT_00166088 + 0x165f12),param_2);
    pcVar7 = (char *)(DAT_00166090 + 0x165fc2);
    for (iVar8 = 0; iVar5 = iVar1 + DAT_00166094, iVar8 < *(int *)(iVar5 + 4) + 1; iVar8 = iVar8 + 1
        ) {
      FriendData::FriendData(aFStack_74,(FriendData *)(*(int *)(iVar5 + 8) + iVar8 * 0x5c));
      pcVar2 = (char *)String::getBytes(aSStack_50);
      L_PrintLog(pcVar7,pcVar2);
      free(pcVar2);
      pcVar2 = (char *)String::getBytes(aSStack_50);
      iVar5 = strcmp(pcVar2,param_2);
      if (iVar5 == 0) {
        free(pcVar2);
        *(int *)(*(int *)((int)pvVar6 + 0xc) + DAT_0016608c) =
             *(int *)(*(int *)((int)pvVar6 + 0xc) + DAT_0016608c) + 1;
        pCVar9 = *(CapcomGame **)((int)pvVar6 + 0xc);
        String::String(aSStack_84,param_2);
        pGVar3 = (GameState *)operator_new(0x21c);
        GameStateFriendCafe::GameStateFriendCafe
                  ((GameStateFriendCafe *)pGVar3,aSStack_84,__dest,param_4,iVar8,0);
        pGVar4 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar4,pGVar3);
        CapcomGame::setNextState(pCVar9,(GameState *)pGVar4);
        String::~String(aSStack_84);
        ZombieCafe::clear_isEventRaid2Cafe_flag();
        FriendData::~FriendData(aFStack_74);
        L_PrintLog((char *)(DAT_00166098 + 0x165fd8),(char *)(DAT_0016609c + 0x165fda));
        goto LAB_0016601e;
      }
      free(pcVar2);
      FriendData::~FriendData(aFStack_74);
    }
    L_PrintLog((char *)(DAT_001660a0 + 0x166068),(char *)(DAT_001660a4 + 0x16606a));
    pCVar9 = *(CapcomGame **)((int)pvVar6 + 0xc);
    String::String(aSStack_7c,param_2);
    pGVar3 = (GameState *)operator_new(0x21c);
    GameStateFriendCafe::GameStateFriendCafe
              ((GameStateFriendCafe *)pGVar3,aSStack_7c,__dest,param_4,0xffffffff,1);
    pGVar4 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar4,pGVar3);
    CapcomGame::setNextState(pCVar9,(GameState *)pGVar4);
    String::~String(aSStack_7c);
    ZombieCafe::clear_isEventRaid2Cafe_flag();
LAB_0016601e:
    String::~String(aSStack_8c);
  }
  return;
}


