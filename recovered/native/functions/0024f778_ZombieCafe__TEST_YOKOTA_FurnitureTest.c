/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024f778 ZombieCafe::TEST_YOKOTA_FurnitureTest */

/* ZombieCafe::TEST_YOKOTA_FurnitureTest() */

void __thiscall ZombieCafe::TEST_YOKOTA_FurnitureTest(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0024f81c;
  if ((*(int *)(this + 0x7e8) != 0) &&
     (iVar2 = *(int *)(*(int *)(this + 0x7e8) + 0x100) + 1, iVar2 <= DAT_0024f81c)) {
    for (; iVar2 < 100; iVar2 = iVar2 + 1) {
      Vector<int>::addElement((Vector<int> *)(*(int *)(this + 0x7e8) + 0xfc),0x28);
    }
    for (; iVar2 < 200; iVar2 = iVar2 + 1) {
      Vector<int>::addElement((Vector<int> *)(*(int *)(this + 0x7e8) + 0xfc),0x31);
    }
    for (; iVar2 <= DAT_0024f820; iVar2 = iVar2 + 1) {
      Vector<int>::addElement((Vector<int> *)(*(int *)(this + 0x7e8) + 0xfc),0x32);
    }
    for (; iVar2 <= DAT_0024f824; iVar2 = iVar2 + 1) {
      Vector<int>::addElement((Vector<int> *)(*(int *)(this + 0x7e8) + 0xfc),0x33);
    }
    for (; iVar2 <= DAT_0024f828; iVar2 = iVar2 + 1) {
      Vector<int>::addElement((Vector<int> *)(*(int *)(this + 0x7e8) + 0xfc),0x34);
    }
    for (; iVar2 <= DAT_0024f82c; iVar2 = iVar2 + 1) {
      Vector<int>::addElement((Vector<int> *)(*(int *)(this + 0x7e8) + 0xfc),0x35);
    }
    for (; iVar2 != iVar1; iVar2 = iVar2 + 1) {
      Vector<int>::addElement((Vector<int> *)(*(int *)(this + 0x7e8) + 0xfc),0x58);
    }
  }
  return;
}


