/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002945b4 GameStateSpecialSale::createFurniture */

/* GameStateSpecialSale::createFurniture(FurnitureData*) */

Furniture * __thiscall
GameStateSpecialSale::createFurniture(GameStateSpecialSale *this,FurnitureData *param_1)

{
  Furniture *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  this_00 = (Furniture *)operator_new(100);
  Furniture::Furniture(this_00,param_1);
  piVar4 = *(int **)(this_00 + 0x38);
  iVar5 = *(int *)(*(short *)((int)piVar4 + ((byte)this_00[0x34] + 0x1c) * 2 + 4) * 4 + *piVar4);
  uVar1 = __floatsisf((int)*(short *)(iVar5 + 0x22));
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(iVar5 + 0x2c));
  uVar2 = __floatsisf((int)*(short *)(iVar5 + 0x24));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(iVar5 + 0x28));
  __addsf3(uVar1,uVar2);
  __fixsfsi();
  uVar1 = __floatsisf();
  __mulsf3(uVar1,DAT_00294640);
  uVar3 = __fixsfsi();
  piVar4[1] = uVar3 & 0xffff | (int)*(short *)((int)piVar4 + 6) << 0x10;
  return this_00;
}


