/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001853b0 GameStateRaid::continueNo */

/* GameStateRaid::continueNo(GameStateRaid*) */

void __thiscall GameStateRaid::continueNo(GameStateRaid *this,GameStateRaid *param_1)

{
  ConfirmDialog *pCVar1;
  float in_s0;
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  if (((*(ZombieCafe **)(this + 0xc))[0x48] == (ZombieCafe)0x0) ||
     (this[0x13] == (GameStateRaid)0x0)) {
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,in_s0,false);
    this[0x15c] = (GameStateRaid)0x1;
    layoutState(this);
  }
  else {
    pCVar1 = *(ConfirmDialog **)(this + 0x164);
    String::String(aSStack_28,(char *)(DAT_00185478 + 0x1853d2));
    Vector<String>::elementAt((int)aSStack_20);
    Vector<String>::elementAt((int)aSStack_18);
    ConfirmDialog::show(pCVar1,aSStack_28,aSStack_20,aSStack_18,
                        *(undefined4 *)(DAT_00185484 + 0x18540a),
                        *(undefined4 *)(DAT_00185488 + 0x185416),this,0,0);
    String::~String(aSStack_18);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
  }
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  return;
}


