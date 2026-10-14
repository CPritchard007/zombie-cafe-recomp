/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7a9c Food::draw */

/* Food::draw(CapcomGraphics*) */

void __thiscall Food::draw(Food *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar5 = *(int **)(this + 0x68);
  if (piVar5 != (int *)0x0) {
    iVar6 = *(int *)(this + 4);
    iVar4 = *(int *)((short)(*(int **)(this + 0x38))[0xf] * 4 + **(int **)(this + 0x38));
    iVar3 = *piVar5;
    uVar7 = **(undefined4 **)(DAT_000f7b34 + 0xf7abe);
    uVar1 = __floatsisf((int)*(short *)(iVar4 + 0x22));
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(iVar4 + 0x2c));
    uVar2 = __floatsisf((int)*(short *)(iVar4 + 0x24));
    uVar1 = __addsf3(uVar1,uVar2);
    uVar2 = __floatsisf((int)*(short *)(iVar4 + 0x28));
    __addsf3(uVar1,uVar2);
    __fixsfsi();
    uVar1 = __floatsisf();
    uVar1 = __mulsf3(uVar1,uVar7);
    __mulsf3(uVar1,0x3f000000);
    iVar4 = __fixsfsi();
    (**(code **)(iVar3 + 0x14))
              (piVar5,param_1,iVar6 >> 0x10,(short)iVar6 + iVar4,uVar7,uVar7,0,0x14);
  }
  return;
}


