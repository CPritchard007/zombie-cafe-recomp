/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc08c BuyToxinDialog::clearOfferWall */

/* BuyToxinDialog::clearOfferWall() */

void __thiscall BuyToxinDialog::clearOfferWall(BuyToxinDialog *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  CFTexture *this_00;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_2c;
  
  for (iVar5 = 0; iVar5 < *(int *)(this + 0x90) + 1; iVar5 = iVar5 + 1) {
    piVar1 = *(int **)(iVar5 * 4 + *(int *)(this + 0x94));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  for (local_2c = 0; local_2c < *(int *)(this + 0xd0) + 1; local_2c = local_2c + 1) {
    piVar4 = (int *)(*(int *)(this + 0xd4) + local_2c * DAT_000bc180);
    piVar1 = (int *)piVar4[3];
    piVar7 = (int *)piVar4[1];
    piVar2 = (int *)piVar4[0x106];
    piVar8 = (int *)piVar4[2];
    piVar6 = *(int **)((int)piVar4 + DAT_000bc184);
    piVar3 = (int *)piVar4[0x108];
    this_00 = *(CFTexture **)((int)piVar4 + DAT_000bc188);
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 4))();
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    if (this_00 != (CFTexture *)0x0) {
      CFTexture::~CFTexture(this_00);
      operator_delete(this_00);
    }
    if ((int *)piVar6[0x19] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[0x19] + 4))();
    }
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  return;
}


