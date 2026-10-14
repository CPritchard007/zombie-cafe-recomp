/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001214e8 GameStateCafe::onEatTaskComplete */

/* GameStateCafe::onEatTaskComplete(GameStateCafe*, EatTask*) */

void GameStateCafe::onEatTaskComplete(GameStateCafe *param_1,EatTask *param_2)

{
  CapcomOrderableList<Furniture*> *this;
  ServingCounter *this_00;
  FoodStack *pFVar1;
  Recipe *this_01;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  StatusNote *pSVar6;
  Cafe *pCVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar12 = DAT_00121878 + 0x1214fa;
  if (*(char *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 4) != '\x01') {
    if (param_2[5] == (EatTask)0x0) {
      if ((param_2[0x40] == (EatTask)0x0) &&
         (((*(Cafe **)(param_1 + 0x14))[100] != (Cafe)0x0 ||
          (iVar5 = Cafe::isInside(*(Cafe **)(param_1 + 0x14),
                                  (int)*(short *)(*(int *)(param_2 + 0x20) + 0x2c)), iVar5 != 0))))
      {
        pCVar7 = *(Cafe **)(param_1 + 0x14);
        uVar11 = *(undefined4 *)(param_2 + 0x20);
        String::String(aSStack_3c,(char *)(DAT_001218b4 + 0x121850));
        pSVar6 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote
                  (pSVar6,uVar11,5,aSStack_3c,**(undefined4 **)(iVar12 + DAT_0012189c),0xffffffff,0)
        ;
        Cafe::addStatusNote(pCVar7,pSVar6);
        String::~String(aSStack_3c);
        iVar5 = *(int *)(param_1 + 0xc);
        uVar11 = __subsf3(*(undefined4 *)(iVar5 + 0x688),**(undefined4 **)(iVar12 + DAT_001218b0));
        *(undefined4 *)(iVar5 + 0x688) = uVar11;
      }
    }
    else {
      iVar5 = *(int *)(*(int *)(param_2 + 0x34) + 0x3c);
      if (param_2[0x40] == (EatTask)0x0) {
        pFVar1 = *(FoodStack **)(iVar5 + 100);
        uVar8 = (uint)*(byte *)(*(int *)(*(int *)(param_2 + 0x34) + 0x38) + 0x79);
        this_01 = (Recipe *)FoodStack::getRecipe(pFVar1);
        iVar2 = Recipe::getSellPrice(this_01,(uchar)pFVar1[8]);
        uVar11 = __floatsisf();
        uVar11 = __mulsf3(uVar11,DAT_0012187c);
        uVar3 = __floatsisf(*(undefined1 *)(iVar5 + 0x6c));
        uVar3 = __divsf3(uVar3,DAT_00121880);
        uVar11 = __mulsf3(uVar11,uVar3);
        iVar5 = __fixsfsi();
        uVar3 = __floatsisf();
        uVar11 = __subsf3(uVar11,uVar3);
        iVar4 = CapcomMath::random(100 - uVar8);
        uVar3 = __floatsisf(uVar8 + iVar4);
        uVar11 = __mulsf3(uVar11,DAT_00121880);
        iVar4 = __aeabi_fcmplt(uVar3,uVar11);
        iVar9 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(**(int **)(iVar9 + 0x590) + DAT_00121884) * (iVar5 + (uint)(iVar4 != 0));
        *(int *)(iVar9 + DAT_00121888) = *(int *)(iVar9 + DAT_00121888) + iVar2 + iVar5;
        ObjectiveSystem::serveCustomers
                  (*(ObjectiveSystem **)(*(int *)(param_1 + 0xc) + DAT_0012188c),1);
        StringBuffer::StringBuffer(aSStack_34);
        String::valueOf((int)aSStack_74);
        StringBuffer::append(aSStack_34,aSStack_74);
        fVar13 = (float)String::~String(aSStack_74);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0xc);
        }
        else {
          String::String(aSStack_6c,(char *)(DAT_00121890 + 0x121630));
          StringBuffer::append(aSStack_34,aSStack_6c);
          String::~String(aSStack_6c);
          String::valueOf((int)aSStack_64);
          StringBuffer::append(aSStack_34,aSStack_64);
          String::~String(aSStack_64);
          String::String(aSStack_5c,(char *)(DAT_00121894 + 0x12165e));
          StringBuffer::append(aSStack_34,aSStack_5c);
          String::~String(aSStack_5c);
          Vector<String>::elementAt((int)aSStack_54);
          StringBuffer::append(aSStack_34,aSStack_54);
          fVar13 = (float)String::~String(aSStack_54);
          iVar5 = *(int *)(param_1 + 0xc);
        }
        ZombieCafe::playEffect(iVar5,fVar13);
        pCVar7 = *(Cafe **)(param_1 + 0x14);
        uVar11 = *(undefined4 *)(param_2 + 0x34);
        StringBuffer::toString();
        pSVar6 = (StatusNote *)operator_new(0x30);
        puVar10 = *(undefined4 **)(iVar12 + DAT_0012189c);
        StatusNote::StatusNote(pSVar6,uVar11,0,aSStack_4c,*puVar10,0xffffffff,0);
        Cafe::addStatusNote(pCVar7,pSVar6);
        String::~String(aSStack_4c);
        pCVar7 = *(Cafe **)(param_1 + 0x14);
        uVar11 = *(undefined4 *)(param_2 + 0x20);
        String::String(aSStack_44,(char *)(DAT_001218a0 + 0x1216ea));
        pSVar6 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote(pSVar6,uVar11,4,aSStack_44,*puVar10,0xffffffff,0);
        Cafe::addStatusNote(pCVar7,pSVar6);
        String::~String(aSStack_44);
        iVar2 = *(int *)(param_1 + 0xc);
        uVar11 = __addsf3(*(undefined4 *)(iVar2 + 0x688),**(undefined4 **)(iVar12 + DAT_001218a4));
        iVar5 = DAT_001218a8;
        *(undefined4 *)(iVar2 + 0x688) = uVar11;
        iVar2 = *(int *)(param_1 + 0xc);
        iVar12 = __aeabi_fcmpge(*(undefined4 *)(iVar2 + 0x688),**(undefined4 **)(iVar12 + iVar5));
        if (iVar12 != 0) {
          TutorialSystem::triggerEvent(*(TutorialSystem **)(iVar2 + DAT_001218ac),':',true);
        }
        CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
      }
      else {
        this = (CapcomOrderableList<Furniture*> *)
               Cafe::createDistanceSortedFurnitureList(*(Cafe **)(param_1 + 0x14),'\x02',0);
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
        this_00 = (ServingCounter *)CapcomOrderableList<Furniture*>::nextItem(this);
        if (this_00 != (ServingCounter *)0x0) {
          pFVar1 = (FoodStack *)operator_new(0x24);
          FoodStack::FoodStack(pFVar1,**(uchar **)(iVar5 + 100),(*(uchar **)(iVar5 + 100))[8]);
          *(undefined4 *)(pFVar1 + 4) = 1;
          ServingCounter::addFood(this_00,pFVar1);
        }
        CapcomOrderableList<Furniture*>::removeAll(this);
        operator_delete(this);
      }
    }
    iVar5 = *(int *)(param_1 + 0xc);
    uVar11 = *(undefined4 *)(iVar5 + 0x688);
    iVar12 = __aeabi_fcmplt(uVar11,0);
    if (iVar12 == 0) {
      iVar12 = __aeabi_fcmpgt(uVar11,0x3f800000);
      if (iVar12 != 0) {
        uVar11 = 0x3f800000;
      }
    }
    else {
      uVar11 = 0;
    }
    *(undefined4 *)(iVar5 + 0x688) = uVar11;
  }
  return;
}


