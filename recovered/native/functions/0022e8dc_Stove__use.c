/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e8dc Stove::use */

/* Stove::use(CharacterInstance*, long) */

void __thiscall Stove::use(Stove *this,CharacterInstance *param_1,long param_2)

{
  int iVar1;
  StatusNote *pSVar2;
  Recipe *this_00;
  FoodStack *this_01;
  Cafe *this_02;
  int iVar3;
  float extraout_s0;
  String aSStack_18 [8];
  
  if ((this[0x2e] != (Stove)0x0) && (iVar1 = isDoneCooking(this), iVar1 == 0)) {
    this[0x46] = (Stove)0x0;
    this[0x80] = (Stove)0x3;
    *(CharacterInstance **)(this + 0x7c) = param_1;
    this_01 = *(FoodStack **)(this + 100);
    *(int *)(this + 0x70) = *(int *)(this + 0x70) + param_2;
    iVar3 = *(int *)(this + 0x6c);
    this_00 = (Recipe *)FoodStack::getRecipe(this_01);
    iVar1 = Recipe::getBurnTimeSeconds(this_00,(uchar)this_01[8]);
    iVar1 = (iVar1 - **(short **)(DAT_0022e9e0 + 0x22e9b6)) * 1000;
    if (iVar1 - iVar3 != 0 && iVar3 <= iVar1) {
      iVar1 = iVar3;
    }
    *(int *)(this + 0x6c) = iVar1;
    iVar1 = isDoneCooking(this);
    if (iVar1 != 0) {
      iVar1 = CapcomApp::getInstance();
      iVar3 = *(int *)(iVar1 + 4);
      TutorialSystem::triggerEvent(*(TutorialSystem **)(iVar3 + DAT_0022e9d8),'\n',true);
      removeStatusNote(this);
      iVar1 = CapcomApp::getInstance();
      ZombieCafe::playEffect(*(int *)(iVar1 + 4),extraout_s0);
      if (this[0x81] != (Stove)0x0) {
        this_02 = *(Cafe **)(iVar3 + 0x7e8);
        String::String(aSStack_18,0);
        pSVar2 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote(pSVar2,this,0xb,aSStack_18,DAT_0022e9dc,0xffffffff,1);
        *(StatusNote **)(this + 0x88) = pSVar2;
        Cafe::addStatusNote(this_02,pSVar2);
        String::~String(aSStack_18);
      }
      if (*(code **)(this + 0x74) != (code *)0x0) {
        (**(code **)(this + 0x74))(this,*(undefined4 *)(this + 0x78));
      }
    }
  }
  return;
}


