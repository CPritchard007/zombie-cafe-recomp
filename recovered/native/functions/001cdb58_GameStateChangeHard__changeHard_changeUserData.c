/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cdb58 GameStateChangeHard::changeHard_changeUserData */

/* GameStateChangeHard::changeHard_changeUserData() */

void GameStateChangeHard::changeHard_changeUserData(void)

{
  int iVar1;
  OutputStream *pOVar2;
  int iVar3;
  InputStream *pIVar4;
  undefined4 uVar5;
  String *pSVar6;
  Cafe *this;
  ZombieCafe *this_00;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  iVar3 = DAT_001cdc40;
  this_00 = *(ZombieCafe **)(iVar1 + 4);
  if ((this_00 != (ZombieCafe *)0x0) && (iVar1 = **(int **)(DAT_001cdc3c + 0x1cdb6c), iVar1 != 0)) {
    ZombieCafe::save();
    pSVar6 = *(String **)(iVar3 + 0x1cdb7e);
    String::String(aSStack_28,pSVar6);
    pOVar2 = (OutputStream *)operator_new(0x14);
    SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar2,aSStack_28);
    String::~String(aSStack_28);
    Cafe::serialize(*(Cafe **)(iVar1 + 0x7e8),pOVar2);
    (**(code **)(*(int *)pOVar2 + 8))(pOVar2);
    (**(code **)(*(int *)pOVar2 + 4))(pOVar2);
    iVar3 = ZombieCafe::loadGlobalData(this_00);
    if (iVar3 != 0) {
      this = *(Cafe **)(this_00 + 0x7e8);
      if (this != (Cafe *)0x0) {
        Cafe::~Cafe(this);
        operator_delete(this);
      }
      String::String(aSStack_20,pSVar6);
      pIVar4 = (InputStream *)SaveDataInputStream::open(aSStack_20);
      String::~String(aSStack_20);
      uVar5 = Cafe::deserialize(pIVar4,false,(ZombieCafe *)0x0);
      (**(code **)(*(int *)pIVar4 + 0xc))(pIVar4);
      (**(code **)(*(int *)pIVar4 + 4))(pIVar4);
      *(undefined4 *)(this_00 + 0x7e8) = uVar5;
      ZombieCafe::saveServerData(this_00,false);
      **(undefined1 **)(DAT_001cdc44 + 0x1cdc18) = 0;
    }
  }
  return;
}


