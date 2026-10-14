/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e15c GameStateFriendCafe::L_GotGameStateSuccess */

/* GameStateFriendCafe::L_GotGameStateSuccess(void*, char const*, unsigned char const*, unsigned
   int) */

void GameStateFriendCafe::L_GotGameStateSuccess
               (void *param_1,char *param_2,uchar *param_3,uint param_4)

{
  int iVar1;
  void *__dest;
  GameState *pGVar2;
  GameStateLoading *this;
  void *pvVar3;
  CapcomGame *this_00;
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  pvVar3 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar3 == param_1) {
    __dest = operator_new__(param_4);
    memcpy(__dest,param_3,param_4);
    this_00 = *(CapcomGame **)((int)pvVar3 + 0xc);
    String::String(aSStack_20,param_2);
    pGVar2 = (GameState *)operator_new(0x21c);
    GameStateFriendCafe((GameStateFriendCafe *)pGVar2,aSStack_20,__dest,param_4,0,1);
    this = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this,pGVar2);
    CapcomGame::setNextState(this_00,(GameState *)this);
    String::~String(aSStack_20);
  }
  return;
}


