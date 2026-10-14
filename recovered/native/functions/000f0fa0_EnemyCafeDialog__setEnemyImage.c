/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f0fa0 EnemyCafeDialog::setEnemyImage */

/* EnemyCafeDialog::setEnemyImage(int) */

void __thiscall EnemyCafeDialog::setEnemyImage(EnemyCafeDialog *this,int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  CImage *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ImageElement *this_00;
  int extraout_r1;
  uint uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float extraout_s0;
  float extraout_s1;
  
  iVar4 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar4 + 0x40);
  iVar4 = CapcomApp::getInstance();
  uVar11 = __mulsf3(uVar11,*(undefined4 *)(iVar4 + 0x50));
  iVar4 = CapcomApp::getInstance();
  uVar12 = *(undefined4 *)(iVar4 + 0x44);
  iVar4 = CapcomApp::getInstance();
  uVar12 = __mulsf3(uVar12,*(undefined4 *)(iVar4 + 0x50));
  iVar4 = *(int *)(this + 0x88);
  __aeabi_idivmod(param_1,**(undefined1 **)(DAT_000f10e8 + 0xf0fe2));
  uVar9 = (uint)*(byte *)(*(int *)(iVar4 + DAT_000f10ec) + extraout_r1);
  if (3 < uVar9) {
    uVar9 = 3;
  }
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(iVar4 + DAT_000f10f0),uVar9 + 0x6b,false);
  iVar4 = *(int *)(this + 0x68);
  pcVar10 = *(code **)(*(int *)this + 0x2c);
  uVar1 = *(ushort *)(iVar4 + 8);
  uVar13 = *(undefined4 *)(pCVar5 + 0x2c);
  sVar3 = *(short *)(iVar4 + 4);
  uVar2 = *(ushort *)(iVar4 + 0x10);
  uVar6 = __floatsisf((int)*(short *)(pCVar5 + 0x20));
  uVar6 = __mulsf3(uVar6,uVar13);
  uVar7 = __floatsisf((int)*(short *)(pCVar5 + 0x2a));
  uVar6 = __addsf3(uVar6,uVar7);
  uVar7 = __floatsisf((int)*(short *)(pCVar5 + 0x26));
  __addsf3(uVar6,uVar7);
  __fixsfsi();
  uVar6 = __floatsisf();
  __mulsf3(uVar6,uVar11);
  iVar4 = __fixsfsi();
  uVar6 = __floatsisf((int)*(short *)(pCVar5 + 0x22));
  uVar6 = __mulsf3(uVar6,uVar13);
  uVar7 = __floatsisf((int)*(short *)(pCVar5 + 0x24));
  uVar6 = __addsf3(uVar6,uVar7);
  uVar7 = __floatsisf((int)*(short *)(pCVar5 + 0x28));
  __addsf3(uVar6,uVar7);
  __fixsfsi();
  uVar6 = __floatsisf();
  __mulsf3(uVar6,uVar12);
  iVar8 = __fixsfsi();
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this_00,pCVar5,(int)sVar3 << 0x10 | (uint)uVar1 + (uint)uVar2 & 0xffff,iVar4,iVar8,
             extraout_s0,extraout_s1,(uchar)uVar11,SUB41(uVar12,0));
  *(ImageElement **)(this + 0x70) = this_00;
  (*pcVar10)(this,this_00);
  return;
}


