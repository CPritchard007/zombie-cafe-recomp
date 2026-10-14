/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e768 Stove::startCooking */

/* Stove::startCooking(unsigned char, unsigned char, short) */

void __thiscall Stove::startCooking(Stove *this,uchar param_1,uchar param_2,short param_3)

{
  Stove SVar1;
  int iVar2;
  Furniture *this_00;
  ZombieCafe *this_01;
  
  iVar2 = CapcomApp::getInstance();
  this_01 = *(ZombieCafe **)(iVar2 + 4);
  if (param_3 == 1) {
    *(undefined2 *)(this + 0x84) = 1;
    this_00 = (Furniture *)operator_new(100);
    Furniture::Furniture
              (this_00,*(FurnitureData **)
                        (*(int *)(*(int *)(this_01 + 0x7e8) + 0x94) + DAT_0022e818));
    ZombieCafe::addZombieFlowerCookCount(this_01);
  }
  else {
    *(undefined2 *)(this + 0x84) = 0;
    SVar1 = this[0x34];
    if (*(int *)(*(int *)(this + 0x68) + 0x24) == DAT_0022e81c) {
      this_00 = (Furniture *)operator_new(100);
      Furniture::Furniture
                (this_00,*(FurnitureData **)
                          (*(int *)(*(int *)(this_01 + 0x7e8) + 0x94) + DAT_0022e820));
    }
    else {
      this_00 = (Furniture *)operator_new(100);
      Furniture::Furniture
                (this_00,*(FurnitureData **)
                          (**(int **)(DAT_0022e824 + 0x22e7e2) * 4 +
                          *(int *)(*(int *)(this_01 + 0x7e8) + 0x94)));
    }
    Furniture::setOrientation(this_00,(uchar)SVar1);
  }
  startCooking(this,param_1,param_2,this_00);
  return;
}


