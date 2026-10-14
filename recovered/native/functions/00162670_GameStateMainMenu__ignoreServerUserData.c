/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00162670 GameStateMainMenu::ignoreServerUserData */

/* GameStateMainMenu::ignoreServerUserData(GameStateMainMenu*) */

undefined8 __thiscall
GameStateMainMenu::ignoreServerUserData(GameStateMainMenu *this,GameStateMainMenu *param_1)

{
  int iVar1;
  InputStream *pIVar2;
  ZombieCafe *pZVar3;
  GameStateMainMenu *pGStack_18;
  GameStateMainMenu *pGStack_14;
  
  pGStack_18 = this;
  pGStack_14 = param_1;
  iVar1 = CapcomApp::getInstance();
  pZVar3 = *(ZombieCafe **)(iVar1 + 4);
  if (pZVar3 == (ZombieCafe *)0x0) {
    L_PrintLog((char *)(DAT_001626fc + 0x162684),(char *)(DAT_00162700 + 0x162686));
  }
  else {
    String::String((String *)&pGStack_18,(char *)(DAT_00162704 + 0x162692));
    pIVar2 = (InputStream *)SaveDataInputStream::open((String *)&pGStack_18);
    String::~String((String *)&pGStack_18);
    if (((pIVar2 != (InputStream *)0x0) &&
        (iVar1 = Cafe::deserialize(pIVar2,false,(ZombieCafe *)0x0), iVar1 != 0)) ||
       (iVar1 = Cafe::createForNewPlayer(), pIVar2 != (InputStream *)0x0)) {
      (**(code **)(*(int *)pIVar2 + 0xc))(pIVar2);
      (**(code **)(*(int *)pIVar2 + 4))(pIVar2);
    }
    *(int *)(pZVar3 + 0x7e8) = iVar1;
    saveServerData(pZVar3);
    **(undefined1 **)(DAT_00162708 + 0x1626e2) = 0;
    **(undefined4 **)(DAT_0016270c + 0x1626ec) = 2;
  }
  return CONCAT44(pGStack_14,pGStack_18);
}


