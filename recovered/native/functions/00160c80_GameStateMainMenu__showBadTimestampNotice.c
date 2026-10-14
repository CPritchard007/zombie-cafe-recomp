/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160c80 GameStateMainMenu::showBadTimestampNotice */

/* GameStateMainMenu::showBadTimestampNotice() */

void __thiscall GameStateMainMenu::showBadTimestampNotice(GameStateMainMenu *this)

{
  char *pcVar1;
  char *pcVar2;
  NoticeDialog *pNVar3;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  pcVar1 = (char *)(DAT_00160d14 + 0x160c8c);
  pcVar2 = (char *)(DAT_00160d18 + 0x160c8e);
  L_PrintLog(pcVar1,pcVar2);
  L_PrintLog((char *)(DAT_00160d1c + 0x160c9e),(char *)(DAT_00160d20 + 0x160ca0));
  L_PrintLog(pcVar1,pcVar2);
  pNVar3 = *(NoticeDialog **)(this + 0x84);
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(DAT_00160d24 + 0x160cc0) * 8));
  String::String(aSStack_18,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(DAT_00160d28 + 0x160cd8) * 8));
  NoticeDialog::show(pNVar3,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


