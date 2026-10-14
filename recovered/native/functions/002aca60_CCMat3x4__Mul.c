/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aca60 CCMat3x4::Mul */

/* CCMat3x4::Mul(ccMat3x4*, ccMat3x4 const*, ccMat3x4 const*) */

void __thiscall CCMat3x4::Mul(CCMat3x4 *this,ccMat3x4 *param_1,ccMat3x4 *param_2,ccMat3x4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = __mulsf3(*(undefined4 *)param_1,*(undefined4 *)param_2,param_2,param_3,param_3);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 4));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 8));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)this = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)param_2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 4));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 8));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 4) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)param_2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 4));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)param_1,*(undefined4 *)(param_2 + 0xc));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0x10));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x14));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0xc) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0xc));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x14));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 0xc));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x10));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x14));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x14) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)param_1,*(undefined4 *)(param_2 + 0x18));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0x1c));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x20));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x18) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x18));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x1c));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 0x18));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x1c));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20));
  uVar1 = __addsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)param_1,*(undefined4 *)(param_2 + 0x24));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0x28));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x2c));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x24));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x28));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x2c));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 0x24));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x28));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x2c));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


