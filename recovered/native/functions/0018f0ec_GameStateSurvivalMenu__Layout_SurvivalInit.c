/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f0ec GameStateSurvivalMenu::Layout_SurvivalInit */

/* GameStateSurvivalMenu::Layout_SurvivalInit() */

void __thiscall GameStateSurvivalMenu::Layout_SurvivalInit(GameStateSurvivalMenu *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  (**(code **)(**(int **)(this + 0x24) + 0x20))(*(int **)(this + 0x24),1);
  (**(code **)(**(int **)(this + 0x24) + 0x14))
            (*(int **)(this + 0x24),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar2 = *(int **)(this + 0x84);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_28,(char *)(DAT_0018f1c8 + 0x18f11e));
  (*pcVar1)(piVar2,aSStack_28);
  String::~String(aSStack_28);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(int *)(*(int *)(this + 0x24) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x24) + 0x10) / 2);
  piVar2 = *(int **)(this + 0x88);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_20,(char *)(DAT_0018f1cc + 0x18f156));
  (*pcVar1)(piVar2,aSStack_20);
  String::~String(aSStack_20);
  piVar2 = *(int **)(this + 0x88);
  (**(code **)(*piVar2 + 0x14))
            (piVar2,*(int *)(*(int *)(this + 0x24) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x24) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x40) + 0x20))(*(int **)(this + 0x40),0);
  (**(code **)(**(int **)(this + 0x48) + 0x20))(*(int **)(this + 0x48),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  (**(code **)(**(int **)(this + 0x50) + 0x20))(*(int **)(this + 0x50),0);
  return;
}


