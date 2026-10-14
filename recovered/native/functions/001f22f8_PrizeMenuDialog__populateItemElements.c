/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f22f8 PrizeMenuDialog::populateItemElements */

/* PrizeMenuDialog::populateItemElements() */

void __thiscall PrizeMenuDialog::populateItemElements(PrizeMenuDialog *this)

{
  PrizeMenuOrder *pPVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  Vector<PrizeMenuItem*> *this_00;
  int iVar6;
  undefined4 *puVar7;
  int local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar6 = 0;
  puts((char *)(DAT_001f23cc + 0x1f2306));
  local_44 = 0;
  while( true ) {
    piVar2 = *(int **)(this + 0x7c);
    if (*(int *)(*(int *)(this + 0x90) + 4) + 1 <= iVar6) break;
    puVar7 = &local_38;
    puVar4 = (undefined4 *)(*(int *)(*(int *)(this + 0x90) + 8) + iVar6 * 0x20);
    local_38 = *puVar4;
    local_34 = puVar4[1];
    local_30 = puVar4[2];
    local_2c = puVar4[3];
    uStack_28 = puVar4[4];
    local_24 = puVar4[5];
    local_20 = puVar4[6];
    uStack_1c = puVar4[7];
    iVar5 = piVar2[3];
    pPVar1 = (PrizeMenuOrder *)operator_new(0xc0);
    PrizeMenuOrder::PrizeMenuOrder
              (pPVar1,this,local_38,local_34,local_30,local_2c,uStack_28,local_24,local_20,uStack_1c
               ,iVar5,*(undefined4 *)(this + 0x98),puVar7);
    (**(code **)(*(int *)pPVar1 + 0x14))(pPVar1,0,local_44);
    local_44 = local_44 + *(int *)(pPVar1 + 0x10) + 10;
    this_00 = *(Vector<PrizeMenuItem*> **)(this + 0x94);
    iVar5 = *(int *)(this_00 + 4) + 2;
    if (*(int *)this_00 < iVar5) {
      iVar3 = *(int *)this_00 * 2;
      if (iVar3 < iVar5) {
        iVar3 = iVar5;
      }
      Vector<PrizeMenuItem*>::resize(this_00,iVar3,-1);
    }
    iVar5 = *(int *)(this_00 + 4);
    *(int *)(this_00 + 4) = iVar5 + 1;
    *(PrizeMenuOrder **)((iVar5 + 1) * 4 + *(int *)(this_00 + 8)) = pPVar1;
    iVar6 = iVar6 + 1;
    (**(code **)(**(int **)(this + 0x7c) + 0x2c))(*(int **)(this + 0x7c),pPVar1);
  }
  (**(code **)(*piVar2 + 0x18))(piVar2,piVar2[3],local_44);
  return;
}


