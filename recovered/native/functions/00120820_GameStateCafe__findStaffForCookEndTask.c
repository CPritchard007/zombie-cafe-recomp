/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00120820 GameStateCafe::findStaffForCookEndTask */

/* GameStateCafe::findStaffForCookEndTask(Stove*, int) */

CharacterInstance * __thiscall
GameStateCafe::findStaffForCookEndTask(GameStateCafe *this,Stove *param_1,int param_2)

{
  CharacterInstance *pCVar1;
  CapcomOrderableList<CafeObject*> *this_00;
  CapcomOrderableList<Furniture*> *this_01;
  int iVar2;
  CharacterInstance *pCVar3;
  CapcomOrderableListNode *pCVar4;
  CharacterInstance *pCVar5;
  CapcomOrderableListNode *pCVar6;
  CharacterInstance *local_24;
  
  this_00 = (CapcomOrderableList<CafeObject*> *)
            Cafe::createDistanceSortedObjectList
                      (*(Cafe **)(this + 0x14),'\x03',(int)*(short *)(param_1 + 0x2c));
  this_01 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList
                      (*(Cafe **)(this + 0x14),(uchar)param_2,(int)*(short *)(param_1 + 0x2c));
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  local_24 = (CharacterInstance *)0x0;
  pCVar1 = local_24;
LAB_0012093e:
  do {
    do {
      local_24 = pCVar1;
      pCVar3 = (CharacterInstance *)CapcomOrderableList<CafeObject*>::nextItem(this_00);
      if (pCVar3 == (CharacterInstance *)0x0) {
        if (*(int *)(this_00 + 0x14) != 0) {
          pCVar4 = *(CapcomOrderableListNode **)(this_00 + 8);
          while (pCVar4 != (CapcomOrderableListNode *)0x0) {
            pCVar6 = *(CapcomOrderableListNode **)(pCVar4 + 8);
            CapcomOrderableList<CafeObject*>::deleteNode(this_00,pCVar4);
            pCVar4 = pCVar6;
          }
          *(undefined4 *)(this_00 + 0x14) = 0;
          *(CapcomOrderableList<CafeObject*> **)(this_00 + 0xc) = this_00;
          *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
        }
        operator_delete(this_00);
        if (this_01 != (CapcomOrderableList<Furniture*> *)0x0) {
          CapcomOrderableList<Furniture*>::removeAll(this_01);
          operator_delete(this_01);
        }
        return local_24;
      }
      pCVar1 = local_24;
    } while (*(char *)(*(int *)(pCVar3 + 0x8c) + 5) == '\x01');
    pCVar5 = *(CharacterInstance **)(param_1 + 0x7c);
    if ((pCVar5 == pCVar3) &&
       (iVar2 = characterCanFollow(this,pCVar5,(int)*(short *)(param_1 + 0x2c)), iVar2 != 0)) {
      *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(this_01 + 8);
      do {
        iVar2 = CapcomOrderableList<Furniture*>::nextItem(this_01);
        pCVar1 = local_24;
        if (iVar2 == 0) break;
        iVar2 = characterCanFollow(this,pCVar5,(int)*(short *)(iVar2 + 0x2c));
        pCVar1 = pCVar5;
      } while (iVar2 == 0);
      goto LAB_0012093e;
    }
    if ((local_24 == (CharacterInstance *)0x0) ||
       (*(char *)(*(int *)(local_24 + 0x8c) + 0x44) == '\x01')) {
      if ((*(char *)(*(int *)(pCVar3 + 0x8c) + 0x44) == '\0') &&
         (iVar2 = characterCanFollow(this,pCVar3,(int)*(short *)(param_1 + 0x2c)), iVar2 != 0)) {
        *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(this_01 + 8);
        do {
          iVar2 = CapcomOrderableList<Furniture*>::nextItem(this_01);
          pCVar1 = local_24;
          if (iVar2 == 0) break;
          iVar2 = characterCanFollow(this,pCVar3,(int)*(short *)(iVar2 + 0x2c));
          pCVar1 = pCVar3;
        } while (iVar2 == 0);
      }
      else if ((local_24 == (CharacterInstance *)0x0) &&
              ((*(char *)(*(int *)(pCVar3 + 0x8c) + 0x44) == '\x01' &&
               (iVar2 = characterCanFollow(this,pCVar3,(int)*(short *)(param_1 + 0x2c)), iVar2 != 0)
               ))) {
        *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(this_01 + 8);
        do {
          iVar2 = CapcomOrderableList<Furniture*>::nextItem(this_01);
          pCVar1 = local_24;
          if (iVar2 == 0) break;
          iVar2 = characterCanFollow(this,pCVar3,(int)*(short *)(iVar2 + 0x2c));
          pCVar1 = pCVar3;
        } while (iVar2 == 0);
      }
    }
  } while( true );
}


