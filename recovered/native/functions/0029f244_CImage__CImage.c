/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f244 CImage::CImage */

/* CImage::CImage(CImage const*) */

CImage * __thiscall CImage::CImage(CImage *this,CImage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(int *)this = *(int *)(DAT_0029f300 + 0x29f250) + 8;
  String::String((String *)(this + 4));
  CFTexture::CFTexture((CFTexture *)(this + 0x14));
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = __floatsisf((int)*(short *)(param_1 + 0x20));
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar2 = __floatsisf((int)*(short *)(param_1 + 0x2a));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(param_1 + 0x26));
  __addsf3(uVar1,uVar2);
  iVar3 = __fixsfsi();
  uVar1 = __floatsisf((int)*(short *)(param_1 + 0x22));
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar2 = __floatsisf((int)*(short *)(param_1 + 0x24));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(param_1 + 0x28));
  __addsf3(uVar1,uVar2);
  iVar4 = __fixsfsi();
  initCopy(this,param_1,0,0,iVar3,iVar4);
  return this;
}


