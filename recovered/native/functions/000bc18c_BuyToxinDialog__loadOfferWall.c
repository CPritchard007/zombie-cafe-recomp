/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc18c BuyToxinDialog::loadOfferWall */

/* BuyToxinDialog::loadOfferWall() */

undefined8 __thiscall BuyToxinDialog::loadOfferWall(BuyToxinDialog *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  
  CapcomApp::getInstance();
  iVar4 = *(int *)(*(int *)(this + 0xac) + 8);
  iVar3 = *(int *)(*(int *)(this + 0xac) + 0x10);
  iVar1 = SmDev();
  piVar2 = *(int **)(this + 0x78);
  iVar6 = piVar2[3];
  iVar4 = iVar4 + iVar3 + *(int *)(iVar1 * 4 + *(int *)(DAT_000bc1d8 + 0xbc1ac));
  pcVar5 = *(code **)(*piVar2 + 0x18);
  iVar3 = **(int **)(DAT_000bc1dc + 0xbc1c0);
  iVar1 = SmDev();
  (*pcVar5)(piVar2,iVar6,iVar4 + *(int *)(iVar1 * 4 + iVar3) * 2);
  return CONCAT44(iVar4,this);
}


