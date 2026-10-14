/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be420 CafeWall::CafeWall */

/* CafeWall::CafeWall(CImage**, short, long, bool) */

CafeWall * __thiscall
CafeWall::CafeWall(CafeWall *this,CImage **param_1,short param_2,long param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  CImage *pCVar3;
  short *psVar4;
  
  *(CafeWall **)(this + 0x10) = this + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x24) = 0;
  this[0x2e] = (CafeWall)0x0;
  this[0x1c] = (CafeWall)0x1;
  iVar2 = DAT_000be49c;
  *(short *)(this + 0x38) = param_2;
  iVar2 = *(int *)(iVar2 + 0xbe44c);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 0x28) = 0;
  *(CImage ***)(this + 0x34) = param_1;
  this[0x3a] = (CafeWall)param_4;
  pCVar3 = param_1[param_2];
  *(undefined4 *)(pCVar3 + 0x2c) = DAT_000be4a0;
  *(undefined4 *)(pCVar3 + 0x30) = 0x3f400000;
  uVar1 = CImage::getHeight(param_1[param_2]);
  psVar4 = *(short **)(DAT_000be4a4 + 0xbe47c);
  *(undefined4 *)(this + 0x44) = 0;
  *(uint *)(this + 0x20) = uVar1 & 0xffff | ((int)*psVar4 >> 1) << 0x10;
  this[0x3c] = (CafeWall)0x0;
  this[0x3b] = (CafeWall)0x0;
  *(long *)(this + 0x40) = param_3;
  return this;
}


