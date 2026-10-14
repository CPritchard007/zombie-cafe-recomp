/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdc84 BuyToxinDialog::BuyToxinDialog */

/* BuyToxinDialog::BuyToxinDialog() */

BuyToxinDialog * __thiscall BuyToxinDialog::BuyToxinDialog(BuyToxinDialog *this)

{
  void *pvVar1;
  int iVar2;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_000bdd54 + 0xbdc98) + 8;
  *(undefined4 *)(this + 0x8c) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x94) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0x8c) << 2);
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 10;
  pvVar1 = operator_new__(0x140);
  *(void **)(this + 0xc4) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xbc) << 5);
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xcc) = 10;
  pvVar1 = operator_new__(DAT_000bdd58);
  iVar2 = DAT_000bdd5c;
  *(void **)(this + 0xd4) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xcc) * iVar2);
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0x60] = (BuyToxinDialog)0x0;
  this[0xb8] = (BuyToxinDialog)0x0;
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(iVar2 + 4);
  *(int *)(this + 100) = DAT_000bdd60 + 0xbdd10;
  initContents(this);
  return this;
}


