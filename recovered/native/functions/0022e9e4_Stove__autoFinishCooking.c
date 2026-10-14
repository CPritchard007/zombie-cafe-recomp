/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e9e4 Stove::autoFinishCooking */

/* Stove::autoFinishCooking() */

void __thiscall Stove::autoFinishCooking(Stove *this)

{
  int iVar1;
  Recipe *this_00;
  int iVar2;
  StatusNote *pSVar3;
  FoodStack *this_01;
  int iVar4;
  Cafe *this_02;
  float extraout_s0;
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  this_01 = *(FoodStack **)(this + 100);
  iVar4 = *(int *)(iVar1 + 4);
  *(undefined4 *)(this + 0x6c) = 0;
  this_00 = (Recipe *)FoodStack::getRecipe(this_01);
  iVar2 = Recipe::getCookTimeSeconds(this_00,(uchar)this_01[8]);
  iVar1 = DAT_0022ea9c;
  *(int *)(this + 0x70) = iVar2 * 1000;
  TutorialSystem::triggerEvent(*(TutorialSystem **)(iVar4 + iVar1),'\n',true);
  removeStatusNote(this);
  iVar1 = CapcomApp::getInstance();
  ZombieCafe::playEffect(*(int *)(iVar1 + 4),extraout_s0);
  if (this[0x81] != (Stove)0x0) {
    this_02 = *(Cafe **)(iVar4 + 0x7e8);
    String::String(aSStack_20,0);
    pSVar3 = (StatusNote *)operator_new(0x30);
    StatusNote::StatusNote(pSVar3,this,0xb,aSStack_20,DAT_0022eaa0,0xffffffff,1);
    *(StatusNote **)(this + 0x88) = pSVar3;
    Cafe::addStatusNote(this_02,pSVar3);
    String::~String(aSStack_20);
  }
  if (*(code **)(this + 0x74) != (code *)0x0) {
    (**(code **)(this + 0x74))(this,*(undefined4 *)(this + 0x78));
  }
  return;
}


