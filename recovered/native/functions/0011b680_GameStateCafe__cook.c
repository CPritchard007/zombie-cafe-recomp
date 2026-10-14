/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b680 GameStateCafe::cook */

/* GameStateCafe::cook(Stove*, int, int, CapcomDate, short, String) */

void GameStateCafe::cook(GameStateCafe *param_1,Stove *param_2,uchar param_3,uchar param_4,
                        undefined4 param_5,undefined4 param_6,short param_7,String *param_8)

{
  short sVar1;
  FoodStack *this;
  int iVar2;
  Recipe *pRVar3;
  int iVar4;
  undefined4 uVar5;
  StatusNote *pSVar6;
  char *pcVar7;
  ZombieCafe *this_00;
  Cafe *this_01;
  undefined4 uVar8;
  char *pcVar9;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  sVar1 = param_7;
  L_PrintLog((char *)(DAT_0011b99c + 0x11b69c),(char *)(DAT_0011b9a0 + 0x11b6a0));
  this = (FoodStack *)operator_new(0x24);
  FoodStack::FoodStack(this,param_3,param_4);
  memcpy(this + 0x1c,&param_5,7);
  String::String(aSStack_60,param_8);
  iVar2 = operator!=(aSStack_60,0);
  String::~String(aSStack_60);
  if (iVar2 != 0) {
    String::String(aSStack_58,param_8);
    String::operator=((String *)(this + 0xc),aSStack_58);
    String::~String(aSStack_58);
    uVar8 = *(undefined4 *)(param_1 + 0xc);
    String::String(aSStack_50,param_8);
    ZombieCafe::getFriendShortName(aSStack_48,uVar8,aSStack_50);
    String::operator=((String *)(this + 0x14),aSStack_48);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
  }
  pRVar3 = (Recipe *)FoodStack::getRecipe(this);
  iVar2 = Recipe::getCost(pRVar3,(uchar)this[8]);
  if (*(int *)(*(ZombieCafe **)(param_1 + 0xc) + DAT_0011b9a4) < iVar2) goto LAB_0011b934;
  ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0xc),-iVar2);
  pRVar3 = (Recipe *)FoodStack::getRecipe(this);
  Recipe::getXp(pRVar3,(uchar)this[8]);
  this_00 = *(ZombieCafe **)(param_1 + 0xc);
  uVar8 = __floatsisf();
  uVar8 = __mulsf3(uVar8,*(undefined4 *)
                          ((*(int *)(this_00 + 0x680) + -1) * 4 +
                          **(int **)(DAT_0011b9a8 + 0x11b766)));
  __mulsf3(uVar8,*(undefined4 *)(**(int **)(this_00 + 0x590) + DAT_0011b9ac));
  uVar8 = __fixsfsi();
  iVar2 = __divsi3(uVar8,3);
  iVar4 = ZombieCafe::isExperienceBoost(this_00);
  if (iVar4 != 0) {
    uVar8 = ZombieCafe::getExperienceBoostRate();
    uVar5 = __floatsisf(iVar2);
    __mulsf3(uVar5,uVar8);
    iVar2 = __fixsfsi();
  }
  iVar4 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar4 == 0) {
    if (iVar2 < 1) {
      if (iVar2 == 0) goto LAB_0011b814;
    }
    else {
      ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),iVar2);
    }
    this_01 = *(Cafe **)(param_1 + 0x14);
    String::valueOf((int)aSStack_40);
    pSVar6 = (StatusNote *)operator_new(0x30);
    StatusNote::StatusNote
              (pSVar6,*(undefined4 *)(param_1 + 0x18),1,aSStack_40,
               **(undefined4 **)(DAT_0011b9b0 + 0x11b7f0),0xffffffff,0);
    Cafe::addStatusNote(this_01,pSVar6);
    String::~String(aSStack_40);
  }
LAB_0011b814:
  Stove::startCooking(param_2,param_3,param_4,sVar1);
  iVar2 = *(int *)(param_2 + 100);
  String::String(aSStack_38,(String *)(this + 0xc));
  String::operator=((String *)(iVar2 + 0xc),aSStack_38);
  String::~String(aSStack_38);
  iVar2 = *(int *)(param_2 + 100);
  String::String(aSStack_30,(String *)(this + 0x14));
  String::operator=((String *)(iVar2 + 0x14),aSStack_30);
  String::~String(aSStack_30);
  iVar2 = DAT_0011b9b8;
  if (*(int *)(*(ZombieCafe **)(param_1 + 0xc) + 0x8b0) == DAT_0011b9b4) {
    ZombieCafe::frequentFryerLevelReset(*(ZombieCafe **)(param_1 + 0xc));
    pcVar9 = (char *)(iVar2 + 0x11b872);
    L_PrintLog(pcVar9,(char *)(DAT_0011b9bc + 0x11b876));
    *(undefined2 *)(*(int *)(param_1 + 0xc) + DAT_0011b9c0) = 0;
    if (param_1[0x1d4] == (GameStateCafe)0x0) {
      pcVar7 = (char *)(DAT_0011b9c4 + 0x11b890);
LAB_0011b910:
      L_PrintLog(pcVar9,pcVar7);
      param_1[0x1d4] = (GameStateCafe)0x1;
      CCServer::GetServerTime
                (*(void **)((int)*(void **)(param_1 + 0xc) + DAT_0011b9e4),*(void **)(param_1 + 0xc)
                 ,-1);
    }
  }
  else {
    pcVar9 = (char *)(DAT_0011b9c8 + 0x11b898);
    L_PrintLog(pcVar9,(char *)(DAT_0011b9cc + 0x11b89a));
    CapcomDate::now((CapcomDate *)&local_28);
    local_20 = local_28;
    local_1c = local_24;
    CapcomDate::addSeconds((int)&local_20);
    iVar2 = CapcomDate::daysBetween
                      (*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x890),
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x894),local_20,local_1c);
    if (iVar2 == 0) goto LAB_0011b934;
    L_PrintLog(pcVar9,(char *)(DAT_0011b9d0 + 0x11b8d6));
    iVar2 = CapcomDate::secondsBetween
                      (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0011b9d4),
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0011b9d4 + 4),local_28,local_24
                      );
    if (iVar2 <= **(short **)(DAT_0011b9d8 + 0x11b8f0)) goto LAB_0011b934;
    L_PrintLog(pcVar9,(char *)(DAT_0011b9dc + 0x11b902));
    if (param_1[0x1d4] == (GameStateCafe)0x0) {
      pcVar7 = (char *)(DAT_0011b9e0 + 0x11b912);
      goto LAB_0011b910;
    }
  }
  frequentFryerServerResponse(param_1,*(ulong *)(*(int *)(param_1 + 0xc) + DAT_0011b9e8));
LAB_0011b934:
  FoodStack::~FoodStack(this);
  operator_delete(this);
  L_PrintLog((char *)(DAT_0011b9ec + 0x11b948),(char *)(DAT_0011b9f0 + 0x11b94a));
  return;
}


