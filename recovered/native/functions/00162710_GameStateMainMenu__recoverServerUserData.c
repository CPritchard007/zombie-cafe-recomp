/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00162710 GameStateMainMenu::recoverServerUserData */

/* GameStateMainMenu::recoverServerUserData(GameStateMainMenu*) */

void GameStateMainMenu::recoverServerUserData(GameStateMainMenu *param_1)

{
  int iVar1;
  OutputStream *pOVar2;
  InputStream *pIVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  ZombieCafe *this;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  pcVar6 = (char *)(DAT_00162814 + 0x16271c);
  L_PrintLog(pcVar6,(char *)(DAT_00162818 + 0x16271e));
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (this == (ZombieCafe *)0x0) {
    pcVar5 = (char *)(DAT_0016281c + 0x162732);
  }
  else {
    iVar1 = **(int **)(DAT_00162820 + 0x162738);
    if (iVar1 == 0) {
      pcVar5 = (char *)(DAT_00162824 + 0x162744);
    }
    else {
      ZombieCafe::save();
      String::String(aSStack_28,(char *)(DAT_00162828 + 0x162754));
      pOVar2 = (OutputStream *)operator_new(0x14);
      SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar2,aSStack_28);
      String::~String(aSStack_28);
      Cafe::serialize(*(Cafe **)(iVar1 + 0x7e8),pOVar2);
      (**(code **)(*(int *)pOVar2 + 8))(pOVar2);
      (**(code **)(*(int *)pOVar2 + 4))(pOVar2);
      iVar1 = ZombieCafe::loadGlobalData(this);
      if (iVar1 == 0) {
        pcVar6 = (char *)(DAT_0016282c + 0x162798);
        pcVar5 = (char *)(DAT_00162830 + 0x16279a);
      }
      else {
        String::String(aSStack_20,(char *)(DAT_00162834 + 0x1627a2));
        pIVar3 = (InputStream *)SaveDataInputStream::open(aSStack_20);
        String::~String(aSStack_20);
        uVar4 = Cafe::deserialize(pIVar3,false,(ZombieCafe *)0x0);
        (**(code **)(*(int *)pIVar3 + 0xc))(pIVar3);
        (**(code **)(*(int *)pIVar3 + 4))(pIVar3);
        *(undefined4 *)(this + 0x7e8) = uVar4;
        saveServerData(this);
        iVar1 = DAT_00162840;
        pcVar6 = (char *)(DAT_0016283c + 0x1627e6);
        **(undefined1 **)(DAT_00162838 + 0x1627e0) = 0;
        pcVar5 = (char *)(iVar1 + 0x1627ee);
        **(undefined4 **)(DAT_00162844 + 0x1627f0) = 1;
      }
    }
  }
  L_PrintLog(pcVar6,pcVar5);
  return;
}


