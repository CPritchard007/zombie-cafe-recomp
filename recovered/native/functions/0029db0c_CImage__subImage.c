/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029db0c CImage::subImage */

/* CImage::subImage(int, int, int, int) const */

CImage * __thiscall CImage::subImage(CImage *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  CImage *this_00;
  int iVar4;
  undefined4 uVar5;
  int local_30;
  int local_2c;
  short local_28;
  short local_24;
  short local_20;
  short local_1c;
  
  uVar5 = *(undefined4 *)(this + 0x30);
  uVar1 = __floatsisf(param_1);
  __mulsf3(uVar1,uVar5);
  iVar2 = __fixsfsi();
  uVar1 = __floatsisf(param_2);
  __mulsf3(uVar1,uVar5);
  iVar3 = __fixsfsi();
  uVar1 = __floatsisf(param_3);
  __mulsf3(uVar1,uVar5);
  local_30 = __fixsfsi();
  uVar1 = __floatsisf(param_4);
  __mulsf3(uVar1,uVar5);
  local_2c = __fixsfsi();
  iVar2 = iVar2 - *(short *)(this + 0x2a);
  local_1c = 0;
  iVar3 = iVar3 - *(short *)(this + 0x24);
  if (iVar2 < 0) {
    local_1c = -(short)iVar2;
    iVar2 = 0;
  }
  local_28 = 0;
  if (iVar3 < 0) {
    local_28 = -(short)iVar3;
    iVar3 = 0;
  }
  local_2c = local_2c - *(short *)(this + 0x24);
  local_30 = local_30 - *(short *)(this + 0x2a);
  iVar4 = (int)*(short *)(this + 0x1c) + (int)*(short *)(this + 0x20);
  local_24 = 0;
  if (iVar4 < iVar2 + local_30) {
    local_24 = (short)(iVar2 + local_30) - (short)iVar4;
    local_30 = iVar4 - iVar2;
  }
  iVar4 = (int)*(short *)(this + 0x1e) + (int)*(short *)(this + 0x22);
  local_20 = 0;
  if (iVar4 < iVar3 + local_2c) {
    local_20 = (short)(iVar3 + local_2c) - (short)iVar4;
    local_2c = iVar4 - iVar3;
  }
  this_00 = (CImage *)operator_new(0x34);
  CImage(this_00,this,iVar2,iVar3,local_30,local_2c);
  setPadding(this_00,local_28,local_24,local_20,local_1c);
  *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this + 0x2c);
  uVar1 = __divsf3(0x3f800000);
  *(undefined4 *)(this_00 + 0x30) = uVar1;
  return this_00;
}


