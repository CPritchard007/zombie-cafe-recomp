/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b150 GameStateCafe::showEquipInfoDialog */

/* GameStateCafe::showEquipInfoDialog(String, String) */

void __thiscall
GameStateCafe::showEquipInfoDialog(GameStateCafe *this,String *param_2,String *param_3)

{
  EquipInfoDialog *pEVar1;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  L_PrintLog((char *)(DAT_0011b1dc + 0x11b160),(char *)(DAT_0011b1e0 + 0x11b162));
  pEVar1 = *(EquipInfoDialog **)(this + 0x134);
  if (pEVar1 != (EquipInfoDialog *)0x0) {
    String::String(aSStack_28,param_2);
    String::String(aSStack_20,param_3);
    String::String(aSStack_30,(char *)(DAT_0011b1e4 + 0x11b188));
    EquipInfoDialog::show
              (pEVar1,aSStack_28,aSStack_20,aSStack_30,*(undefined4 *)(DAT_0011b1e8 + 0x11b194),this
              );
    String::~String(aSStack_30);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
  }
  L_PrintLog((char *)(DAT_0011b1ec + 0x11b1ba),(char *)(DAT_0011b1f0 + 0x11b1bc));
  return;
}


