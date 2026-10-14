/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234d90 UserRankDialog::layout */

/* UserRankDialog::layout() */

undefined8 __thiscall UserRankDialog::layout(UserRankDialog *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_1c;
  
  iVar6 = *(int *)this;
  iVar3 = *(int *)(*(int *)(this + 0x70) + 100);
  uVar5 = *(undefined4 *)(iVar3 + 0x2c);
  uVar1 = __floatsisf((int)*(short *)(iVar3 + 0x20));
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar2 = __floatsisf((int)*(short *)(iVar3 + 0x2a));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(iVar3 + 0x26));
  __addsf3(uVar1,uVar2);
  __fixsfsi();
  uVar1 = __floatsisf();
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x60));
  __addsf3(uVar1,uVar1);
  local_1c = __fixsfsi();
  uVar1 = __floatsisf((int)*(short *)(iVar3 + 0x22));
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar2 = __floatsisf((int)*(short *)(iVar3 + 0x24));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(iVar3 + 0x28));
  __addsf3(uVar1,uVar2);
  __fixsfsi();
  uVar1 = __floatsisf();
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 100));
  uVar1 = __addsf3(uVar1,uVar1);
  __addsf3(uVar1,*(undefined4 *)(this + 0x8c));
  uVar1 = __fixsfsi();
  (**(code **)(iVar6 + 0x18))(this,local_1c,uVar1);
  piVar4 = *(int **)(this + 0x70);
  uVar1 = __fixsfsi(*(undefined4 *)(this + 0x8c));
  (**(code **)(*piVar4 + 0x14))(piVar4,0,uVar1);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),*(undefined4 *)(this + 0xc),0);
  piVar4 = *(int **)(this + 0x7c);
  iVar3 = *(int *)(*(int *)(this + 0x70) + 0xc);
  iVar6 = *piVar4;
  uVar1 = __fixsfsi(*(undefined4 *)(this + 0x90));
  (**(code **)(iVar6 + 0x14))(piVar4,iVar3 / 2,uVar1);
  uVar1 = __fixsfsi(*(undefined4 *)(this + 0x94));
  (**(code **)(**(int **)(this + 0x7c) + 0x18))(*(int **)(this + 0x7c),uVar1,1000);
  piVar4 = *(int **)(this + 0x74);
  if (piVar4 != (int *)0x0) {
    iVar3 = piVar4[0x19];
    iVar6 = *piVar4;
    uVar1 = __floatsisf(*(int *)(*(int *)(this + 0x70) + 0xc) / 2);
    uVar2 = __floatsisf((int)*(short *)(iVar3 + 0x20));
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar3 + 0x2c));
    uVar5 = __floatsisf((int)*(short *)(iVar3 + 0x2a));
    local_1c = __addsf3(uVar2,uVar5);
    uVar2 = __floatsisf((int)*(short *)(iVar3 + 0x26));
    __addsf3(local_1c,uVar2);
    __fixsfsi();
    uVar2 = __floatsisf();
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x60));
    uVar2 = __mulsf3(uVar2,0x3f000000);
    __subsf3(uVar1,uVar2);
    uVar1 = __fixsfsi();
    uVar2 = __fixsfsi(*(undefined4 *)(this + 0x9c));
    (**(code **)(iVar6 + 0x14))(piVar4,uVar1,uVar2);
  }
  uVar1 = __fixsfsi(*(undefined4 *)(this + 0xa0));
  uVar2 = __fixsfsi(*(undefined4 *)(this + 0xa4));
  (**(code **)(**(int **)(this + 0x80) + 0x14))(*(int **)(this + 0x80),uVar1,uVar2);
  uVar2 = __fixsfsi(*(undefined4 *)(this + 0xa8));
  (**(code **)(**(int **)(this + 0x80) + 0x18))(*(int **)(this + 0x80),uVar2,1000);
  __mulsf3(*(undefined4 *)(this + 0x60),DAT_00234fb8);
  uVar2 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x84) + 0x18))(*(int **)(this + 0x84),uVar2,3);
  (**(code **)(**(int **)(this + 0x84) + 0x1c))(*(int **)(this + 0x84),0x11);
  *(undefined4 *)(*(int *)(this + 0x84) + 0x18) = 0xffffffff;
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(int *)(*(int *)(this + 0x70) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x7c) + 8) + *(int *)(*(int *)(this + 0x7c) + 0x10));
  return CONCAT44(local_1c,uVar1);
}


