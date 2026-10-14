/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001196b0 GameStateCafe::createFurnitureFromData */

/* GameStateCafe::createFurnitureFromData(FurnitureData*) */

Furniture * __thiscall
GameStateCafe::createFurnitureFromData(GameStateCafe *this,FurnitureData *param_1)

{
  ServingCounter *this_00;
  
  if (param_1[0x44] == (FurnitureData)0x1) {
    this_00 = (ServingCounter *)operator_new(0x8c);
    Furniture::Furniture((Furniture *)this_00,param_1);
    *(int *)this_00 = *(int *)(DAT_0011973c + 0x1196dc) + 8;
    ((Furniture *)this_00)[0x81] = (Furniture)0x1;
    *(FurnitureData **)((Furniture *)this_00 + 0x68) = param_1;
    *(undefined4 *)((Furniture *)this_00 + 0x6c) = 0;
    *(undefined4 *)((Furniture *)this_00 + 0x78) = 0;
    *(undefined4 *)((Furniture *)this_00 + 0x70) = 0;
    *(undefined4 *)((Furniture *)this_00 + 0x74) = 0;
    *(undefined4 *)((Furniture *)this_00 + 100) = 0;
    *(undefined4 *)((Furniture *)this_00 + 0x88) = 0;
    *(undefined4 *)((Furniture *)this_00 + 0x7c) = 0;
    ((Furniture *)this_00)[0x80] = (Furniture)0x1;
    ((Furniture *)this_00)[0x82] = (Furniture)0x0;
    ((Furniture *)this_00)[0x83] = (Furniture)0x0;
    *(undefined2 *)((Furniture *)this_00 + 0x84) = 0;
  }
  else if (param_1[0x44] == (FurnitureData)0x2) {
    this_00 = (ServingCounter *)operator_new(0x7c);
    ServingCounter::ServingCounter(this_00,param_1);
  }
  else {
    this_00 = (ServingCounter *)operator_new(100);
    Furniture::Furniture((Furniture *)this_00,param_1);
  }
  return (Furniture *)this_00;
}


