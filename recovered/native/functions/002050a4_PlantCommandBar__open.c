/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002050a4 PlantCommandBar::open */

/* PlantCommandBar::open() */

void __thiscall PlantCommandBar::open(PlantCommandBar *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  
  if (this[0xc4] != (PlantCommandBar)0x2) {
    setState(this,'\x01');
    if (*(int **)(this + 0xc0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xc0) + 4))();
    }
    uVar6 = *(uint *)(*(int *)(this + 0x74) + 0x10);
    iVar3 = *(int *)(this + 0x10);
    uVar7 = (((int)uVar6 >> 0x10) - ((int)uVar6 >> 0x1f) >> 1) << 0x10;
    piVar1 = (int *)operator_new(0x1c);
    iVar2 = DAT_00205158;
    piVar1[2] = uVar6 & 0xffff | uVar7;
    piVar4 = *(int **)(iVar2 + 0x2050fa);
    piVar1[3] = uVar7 | (short)uVar6 - iVar3 & 0xffffU;
    piVar1[5] = 0;
    iVar2 = DAT_0020515c;
    piVar1[4] = *piVar4;
    iVar3 = DAT_00205160;
    piVar1[6] = **(int **)(iVar2 + 0x205108);
    *piVar1 = *(int *)(iVar3 + 0x205112) + 8;
    *(int **)(this + 0xc0) = piVar1;
    (**(code **)(*piVar1 + 0xc))();
    iVar2 = ZombieCafe::isZombieFlowerFreeFlag(*(ZombieCafe **)(this + 0x74));
    pcVar5 = *(code **)(**(int **)(this + 0xb0) + 0x20);
    if (iVar2 == 0) {
      (*pcVar5)();
      piVar1 = *(int **)(this + 0xb4);
      pcVar5 = *(code **)(*piVar1 + 0x20);
    }
    else {
      (*pcVar5)(*(int **)(this + 0xb0),1);
      piVar1 = *(int **)(this + 0xb4);
      pcVar5 = *(code **)(*piVar1 + 0x20);
    }
    (*pcVar5)(piVar1,iVar2 == 0);
  }
  return;
}


