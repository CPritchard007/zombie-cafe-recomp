/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001671c4 GameStateMap::L_GetGameStateFailed */

/* GameStateMap::L_GetGameStateFailed(void*, ccServerFailureCode) */

void GameStateMap::L_GetGameStateFailed(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  NoticeDialog *pNVar4;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  L_PrintLog((char *)(DAT_00167258 + 0x1671d4),(char *)(DAT_00167254 + 0x1671d2));
  iVar3 = CapcomApp::getInstance();
  iVar3 = *(int *)(*(int *)(iVar3 + 4) + 8);
  if (iVar3 == param_1) {
    pNVar4 = *(NoticeDialog **)(iVar3 + DAT_0016725c);
    Vector<String>::elementAt((int)aSStack_20);
    Vector<String>::elementAt((int)aSStack_18);
    NoticeDialog::show(pNVar4,aSStack_20,aSStack_18,0,iVar3);
    String::~String(aSStack_18);
    String::~String(aSStack_20);
    iVar2 = DAT_0016726c;
    iVar1 = DAT_00167268;
    *(undefined1 *)(iVar3 + 0x460) = 0;
    L_PrintLog((char *)(iVar1 + 0x167238),(char *)(iVar2 + 0x16723a));
  }
  return;
}


