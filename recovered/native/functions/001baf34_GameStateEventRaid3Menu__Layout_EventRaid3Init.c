/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001baf34 GameStateEventRaid3Menu::Layout_EventRaid3Init */

/* GameStateEventRaid3Menu::Layout_EventRaid3Init() */

void __thiscall GameStateEventRaid3Menu::Layout_EventRaid3Init(GameStateEventRaid3Menu *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),1);
  (**(code **)(**(int **)(this + 0x20) + 0x14))
            (*(int **)(this + 0x20),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar2 = *(int **)(this + 0xa8);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_28,(char *)(DAT_001baff4 + 0x1baf66));
  (*pcVar1)(piVar2,aSStack_28);
  String::~String(aSStack_28);
  piVar2 = *(int **)(this + 0xa8);
  (**(code **)(*piVar2 + 0x14))
            (piVar2,*(int *)(*(int *)(this + 0x20) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x20) + 0x10) / 2);
  piVar2 = *(int **)(this + 0xac);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_20,(char *)(DAT_001baff8 + 0x1baf9c));
  (*pcVar1)(piVar2,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0xac) + 0x14))
            (*(int **)(this + 0xac),*(int *)(*(int *)(this + 0x20) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x20) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x58) + 0x20))(*(int **)(this + 0x58),0);
  (**(code **)(**(int **)(this + 0x54) + 0x20))(*(int **)(this + 0x54),0);
  return;
}


