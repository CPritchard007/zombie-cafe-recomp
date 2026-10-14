/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2e0c ItemButton::paintComponent */

/* ItemButton::paintComponent(CapcomGraphics*) */

void __thiscall ItemButton::paintComponent(ItemButton *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar5 = *(int *)(this + 0xc);
  uVar1 = __floatsisf(iVar5);
  uVar1 = __mulsf3(uVar1,DAT_001e2f00);
  piVar6 = *(int **)(this + 0x60);
  iVar7 = piVar6[0xb];
  uVar2 = __floatsisf((int)(short)piVar6[8]);
  uVar2 = __mulsf3(uVar2,iVar7);
  uVar3 = __floatsisf((int)*(short *)((int)piVar6 + 0x2a));
  uVar2 = __addsf3(uVar2,uVar3);
  uVar3 = __floatsisf((int)*(short *)((int)piVar6 + 0x26));
  __addsf3(uVar2,uVar3);
  __fixsfsi();
  uVar2 = __floatsisf();
  uVar2 = __divsf3(uVar1,uVar2);
  uVar3 = __floatsisf((int)*(short *)((int)piVar6 + 0x22));
  uVar3 = __mulsf3(uVar3,iVar7);
  uVar4 = __floatsisf((int)(short)piVar6[9]);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)(short)piVar6[10]);
  __addsf3(uVar3,uVar4);
  __fixsfsi();
  uVar3 = __floatsisf();
  uVar1 = __divsf3(uVar1,uVar3);
  iVar7 = __aeabi_fcmplt(uVar2,uVar1);
  local_30 = uVar1;
  if (iVar7 != 0) {
    local_30 = uVar2;
  }
  iVar7 = __aeabi_fcmplt(local_30,0x3f800000);
  if (iVar7 == 0) {
    local_30 = 0x3f800000;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = local_30;
  local_20 = __floatsisf(iVar5 >> 1);
  local_1c = __floatsisf(*(int *)(this + 0x10) >> 1);
  (**(code **)(*piVar6 + 0x18))(piVar6,param_1,&local_30);
  return;
}


