/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c0164 Cafe::getDataForRandomCustomer */

/* Cafe::getDataForRandomCustomer(int, float, bool) */

int __thiscall Cafe::getDataForRandomCustomer(Cafe *this,int param_1,float param_2,bool param_3)

{
  int iVar1;
  CapcomLinkedList<CharacterData*> *this_00;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int in_r3;
  ZombieCafe *this_01;
  undefined4 uVar7;
  int local_2c;
  
  iVar1 = CapcomApp::getInstance();
  this_01 = *(ZombieCafe **)(iVar1 + 4);
  this_00 = (CapcomLinkedList<CharacterData*> *)operator_new(0x14);
  iVar1 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  local_2c = 0;
  *(CapcomLinkedList<CharacterData*> **)(this_00 + 8) = this_00;
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  do {
    if ((int)(uint)*(ushort *)(this_01 + DAT_000c0264) <= iVar1) {
      iVar4 = CapcomMath::random(local_2c);
      iVar1 = DAT_000c0260;
      do {
        iVar5 = CapcomLinkedList<CharacterData*>::remove(this_00,0);
        iVar4 = iVar4 - *(short *)(iVar5 + iVar1);
      } while (0 < iVar4);
      if (*(int *)(this_00 + 0x10) != 0) {
        while (pvVar6 = *(void **)(this_00 + 4), pvVar6 != (void *)0x0) {
          uVar7 = *(undefined4 *)((int)pvVar6 + 4);
          operator_delete(pvVar6);
          *(undefined4 *)(this_00 + 4) = uVar7;
        }
        *(undefined4 *)(this_00 + 0x10) = 0;
        *(CapcomLinkedList<CharacterData*> **)(this_00 + 8) = this_00;
        *(undefined4 *)(this_00 + 0xc) = 0;
      }
      operator_delete(this_00);
      return iVar5;
    }
    iVar4 = *(int *)(iVar1 * 4 + *(int *)(this_01 + DAT_000c0258));
    if (((int)(uint)*(byte *)(iVar4 + DAT_000c025c) <= param_1) &&
       (iVar5 = __aeabi_fcmpge(param_3,*(undefined4 *)(iVar4 + 0xaf0)), iVar5 != 0)) {
      iVar5 = ZombieCafe::isGaistColaboZombie(this_01,iVar1);
      if (iVar5 == 0) {
LAB_000c01e4:
        local_2c = local_2c + *(short *)(iVar4 + DAT_000c0260);
        piVar3 = (int *)operator_new(8);
        piVar3[1] = 0;
        *(int **)(*(int *)(this_00 + 8) + 4) = piVar3;
        *(int **)(this_00 + 8) = piVar3;
        *piVar3 = iVar4;
        *(undefined4 *)(*(int *)(this_00 + 8) + 4) = 0;
        *(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1;
      }
      else if (in_r3 != 0) {
        iVar5 = ZombieCafe::isGaistColaboEvent(this_01,true);
        iVar2 = ZombieCafe::isGaistColabo_Bana(this_01,iVar1);
        if (((iVar2 == 0) || (iVar2 = ZombieCafe::isGaistColaboEvent_ComeBana(), iVar2 != 0)) &&
           (iVar5 != 0)) goto LAB_000c01e4;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


