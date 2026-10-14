/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00121ffc GameStateCafe::checkForFridgeClose */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001220ee) */
/* WARNING: Removing unreachable block (ram,0x001220ee) */
/* GameStateCafe::checkForFridgeClose() */

void __thiscall GameStateCafe::checkForFridgeClose(GameStateCafe *this)

{
  char cVar1;
  char cVar2;
  FoodStack *pFVar3;
  undefined4 uVar4;
  ZombieCafe *this_00;
  undefined4 uVar5;
  CapcomOrderableList<Furniture*> *this_01;
  ServingCounter *this_02;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float extraout_s0;
  char acStack_9c [128];
  int local_1c;
  
  piVar7 = *(int **)(DAT_00122180 + 0x122008);
  local_1c = *piVar7;
  iVar6 = *(int *)(this + 0x9c);
  if (*(char *)(iVar6 + 0x14) == '\0') {
    cVar1 = *(char *)(iVar6 + 0xd0);
    cVar2 = *(char *)(iVar6 + 0x100);
    if (*(short *)(iVar6 + 0xce) != DAT_00122184) {
      pFVar3 = (FoodStack *)
               Vector<FoodStack*>::removeElementAt
                         ((Vector<FoodStack*> *)(*(int *)(this + 0xc) + DAT_00122188),
                          (int)*(short *)(iVar6 + 0xce));
      if (cVar1 == '\0') {
        if (cVar2 == '\0') {
          uVar4 = CapcomMath::random(8);
          switch(uVar4) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
          }
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
          this_01 = (CapcomOrderableList<Furniture*> *)
                    Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\b',0);
          *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(this_01 + 8);
          iVar6 = CapcomOrderableList<Furniture*>::nextItem(this_01);
          if (iVar6 != 0) {
            iVar6 = (int)*(short *)(iVar6 + 0x2c);
          }
          CapcomOrderableList<Furniture*>::removeAll(this_01);
          operator_delete(this_01);
          this_02 = (ServingCounter *)
                    Cafe::getAppropriateCounterForDish
                              (*(Cafe **)(this + 0x14),(uint)*(ushort *)pFVar3,iVar6);
          if (this_02 != (ServingCounter *)0x0) {
            ServingCounter::addFood(this_02,pFVar3);
          }
        }
        else {
          *(undefined1 *)(*(int *)(this + 0x9c) + 0x100) = 0;
        }
      }
      else {
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012218c),'%',false);
        unlockRecipe(this,(uchar)*pFVar3,(uchar)pFVar3[8]);
        uVar4 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_00122190));
        this_00 = *(ZombieCafe **)(this + 0xc);
        uVar8 = *(undefined4 *)(this_00 + 0x680);
        uVar9 = *(undefined4 *)(this_00 + DAT_00122194);
        uVar10 = *(undefined4 *)(this_00 + DAT_00122198);
        uVar5 = ZombieCafe::getToxin(this_00);
        snprintf(acStack_9c,0x80,(char *)(DAT_0012219c + 0x12209e),DAT_001221a0 + 0x1220a0,uVar4,
                 uVar8,uVar9,uVar10,uVar5,(uint)*(ushort *)pFVar3,(uint)(byte)pFVar3[8]);
        CCMarketing_RecordAnalyticsEvent
                  (*(undefined4 *)(*(int *)(this + 0xc) + DAT_001221a4),DAT_001221a8 + 0x1220bc,
                   acStack_9c);
        Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),1,(int *)(uint)*(ushort *)pFVar3);
      }
      FridgeDialog::refreshPage(*(FridgeDialog **)(this + 0x9c));
    }
    this[DAT_001221ac] = (GameStateCafe)0x0;
  }
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


