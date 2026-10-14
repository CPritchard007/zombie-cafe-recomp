/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fff8 GameStateCafe::exitRecipeBook */

/* GameStateCafe::exitRecipeBook(void*, int, int, bool, short) */

void GameStateCafe::exitRecipeBook(void *param_1,int param_2,int param_3,bool param_4,short param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CapcomOrderableList<Furniture*> *this;
  String *this_00;
  CharacterInstance *this_01;
  NoticeDialog *pNVar4;
  undefined4 local_48;
  undefined4 local_44;
  String aSStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  if (param_1 == *(void **)(iVar1 + 8)) {
    *(undefined1 *)((int)param_1 + DAT_00120194) = 0;
    piVar2 = *(int **)((int)param_1 + 0x54);
    if (param_4) {
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x20))(), iVar3 != 1)) {
        this_01 = *(CharacterInstance **)((int)param_1 + 0x54);
        iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_01 + 0x8c) + 0x40),0);
        if (iVar3 == 0) {
          CharacterInstance::stopTasks(this_01);
          *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x54) + 0x8c) + 0x44) = 0;
        }
      }
    }
    else {
      if (((piVar2 == (int *)0x0) || (iVar3 = (**(code **)(*piVar2 + 0x20))(), iVar3 == 1)) ||
         (iVar3 = __aeabi_fcmple(*(undefined4 *)
                                  (*(int *)(*(int *)((int)param_1 + 0x54) + 0x8c) + 0x40),0),
         iVar3 != 0)) {
        TutorialSystem::triggerEvent(*(TutorialSystem **)(iVar1 + DAT_00120198),'S',false);
      }
      iVar3 = *(int *)((int)param_1 + 0x50);
      if (iVar3 == 0) {
        this = (CapcomOrderableList<Furniture*> *)
               Cafe::createDistanceSortedFurnitureList(*(Cafe **)((int)param_1 + 0x14),'\x01',0);
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
        do {
          iVar3 = CapcomOrderableList<Furniture*>::nextItem(this);
          if (iVar3 == 0) break;
        } while (*(char *)(iVar3 + 0x2e) != '\0');
        CapcomOrderableList<Furniture*>::removeAll(this);
        operator_delete(this);
        if (iVar3 == 0) {
          pNVar4 = *(NoticeDialog **)((int)param_1 + 0xd0);
          Vector<String>::elementAt((int)aSStack_28);
          Vector<String>::elementAt((int)aSStack_20);
          NoticeDialog::show(pNVar4,aSStack_28,aSStack_20,0,0);
          String::~String(aSStack_20);
          this_00 = aSStack_28;
        }
        else {
          this_00 = aSStack_30;
          CapcomDate::now((CapcomDate *)&local_38);
          String::String(this_00,0);
          cook(param_1,iVar3,param_2,param_3,local_38,local_34,(int)param_5,this_00);
        }
      }
      else {
        this_00 = aSStack_40;
        CapcomDate::now((CapcomDate *)&local_48);
        String::String(this_00,0);
        cook(param_1,iVar3,param_2,param_3,local_48,local_44,(int)param_5,this_00);
      }
      String::~String(this_00);
    }
    *(undefined1 *)(iVar1 + DAT_001201a4) = 1;
  }
  return;
}


