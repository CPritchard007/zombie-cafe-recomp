/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e278e ConfirmDialog::setNoButtonPosition */

/* ConfirmDialog::setNoButtonPosition(float, float, float, float) */

void __thiscall
ConfirmDialog::setNoButtonPosition
          (ConfirmDialog *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int iVar3;
  undefined4 in_r2;
  int iVar4;
  int *piVar5;
  float extraout_s0;
  float extraout_s1;
  undefined4 in_stack_00000000;
  
  piVar5 = *(int **)(this + 0x6c);
  iVar4 = *(int *)(this + 100);
  iVar3 = *piVar5;
  uVar1 = __floatsisf(*(undefined4 *)(iVar4 + 0xc));
  __mulsf3(uVar1,in_r1);
  uVar1 = __fixsfsi();
  uVar2 = __floatsisf(*(undefined4 *)(iVar4 + 0x10));
  __mulsf3(uVar2,in_r2);
  uVar2 = __fixsfsi();
  (**(code **)(iVar3 + 0x14))(piVar5,uVar1,uVar2);
  __aeabi_fcmpeq(in_stack_00000000,0);
  ImageButton::setScale(*(ImageButton **)(this + 0x6c),extraout_s0,extraout_s1);
  (**(code **)(**(int **)(this + 0x7c) + 0x18))
            (*(int **)(this + 0x7c),*(undefined4 *)(*(int *)(this + 0x6c) + 0xc),
             *(undefined4 *)(*(int *)(this + 0x6c) + 0x10));
  return;
}


