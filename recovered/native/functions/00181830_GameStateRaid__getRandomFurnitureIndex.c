/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00181830 GameStateRaid::getRandomFurnitureIndex */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00181864) */
/* WARNING: Removing unreachable block (ram,0x00181864) */
/* GameStateRaid::getRandomFurnitureIndex(int, int) */

undefined4 __thiscall
GameStateRaid::getRandomFurnitureIndex(GameStateRaid *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint unaff_r5;
  Vector<int> aVStack_24 [4];
  int local_20;
  int local_1c;
  
  Vector<int>::Vector(aVStack_24);
  iVar3 = *(int *)((param_2 + -1) * 4 + *(int *)(this + 0x40));
  iVar1 = *(int *)(param_1 * 4 + iVar3);
  iVar3 = *(int *)((param_1 + (uint)(3 < param_1)) * 4 + iVar3);
  switch(param_1) {
  case 0:
    unaff_r5 = 1;
    break;
  case 1:
    unaff_r5 = 2;
    break;
  case 2:
    unaff_r5 = 8;
    break;
  case 3:
    unaff_r5 = 0xb;
    break;
  case 4:
    unaff_r5 = 3;
    break;
  case 6:
    unaff_r5 = 4;
    break;
  case 8:
    unaff_r5 = 0;
    break;
  case 10:
    unaff_r5 = 7;
    break;
  case 0xc:
    unaff_r5 = 5;
    break;
  case 0xe:
    unaff_r5 = 6;
  }
  for (iVar5 = 0; iVar5 < *(int *)(*(int *)(this + 0x78) + 0x90); iVar5 = iVar5 + 1) {
    iVar4 = *(int *)(iVar5 * 4 + *(int *)(*(int *)(this + 0x78) + 0x94));
    uVar2 = (uint)*(byte *)(iVar4 + 0x28);
    if ((((iVar1 <= (int)uVar2) && ((int)uVar2 <= iVar3)) && (iVar5 != 0x4e)) &&
       ((*(byte *)(iVar4 + 0x44) == unaff_r5 && (iVar5 != 0x4f)))) {
      Vector<int>::addElement(aVStack_24,iVar5);
    }
  }
  if (local_20 < 0) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar1 = CapcomMath::random(local_20 + 1);
    uVar6 = *(undefined4 *)(iVar1 * 4 + local_1c);
  }
  Vector<int>::~Vector(aVStack_24);
  return uVar6;
}


