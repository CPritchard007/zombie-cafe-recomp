/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cec44 ImageButton::setImageAndResize */

/* ImageButton::setImageAndResize(CImage*) */

undefined8 __thiscall ImageButton::setImageAndResize(ImageButton *this,CImage *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1c;
  
  *(CImage **)(this + 0x60) = param_1;
  sVar1 = *(short *)(param_1 + 0x2a);
  sVar2 = *(short *)(param_1 + 0x26);
  if (this[0x88] == (ImageButton)0x0) {
    uVar3 = __floatsisf((int)*(short *)(param_1 + 0x20));
    local_1c = __mulsf3(uVar3,*(undefined4 *)(param_1 + 0x2c));
    uVar3 = __floatsisf((int)sVar1);
    uVar3 = __addsf3(local_1c,uVar3);
    uVar4 = __floatsisf((int)sVar2);
    __addsf3(uVar3,uVar4);
    uVar3 = __fixsfsi();
    *(undefined4 *)(this + 0xc) = uVar3;
    uVar3 = __floatsisf((int)*(short *)(param_1 + 0x22));
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_1 + 0x2c));
    uVar4 = __floatsisf((int)*(short *)(param_1 + 0x24));
    uVar3 = __addsf3(uVar3,uVar4);
    uVar4 = __floatsisf((int)*(short *)(param_1 + 0x28));
    __addsf3(uVar3,uVar4);
  }
  else {
    uVar3 = __floatsisf((int)*(short *)(param_1 + 0x20));
    local_1c = __mulsf3(uVar3,*(undefined4 *)(param_1 + 0x2c));
    uVar3 = __floatsisf((int)sVar1);
    uVar3 = __addsf3(local_1c,uVar3);
    uVar4 = __floatsisf((int)sVar2);
    __addsf3(uVar3,uVar4);
    __fixsfsi();
    uVar3 = __floatsisf();
    iVar5 = CapcomApp::getInstance();
    __mulsf3(uVar3,*(undefined4 *)(iVar5 + 0x40));
    uVar3 = __fixsfsi();
    *(undefined4 *)(this + 0xc) = uVar3;
    uVar3 = __floatsisf((int)*(short *)(param_1 + 0x22));
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_1 + 0x2c));
    uVar4 = __floatsisf((int)*(short *)(param_1 + 0x24));
    uVar3 = __addsf3(uVar3,uVar4);
    uVar4 = __floatsisf((int)*(short *)(param_1 + 0x28));
    __addsf3(uVar3,uVar4);
    __fixsfsi();
    uVar3 = __floatsisf();
    iVar5 = CapcomApp::getInstance();
    __mulsf3(uVar3,*(undefined4 *)(iVar5 + 0x44));
  }
  uVar3 = __fixsfsi();
  *(undefined4 *)(this + 0x10) = uVar3;
  return CONCAT44(local_1c,this);
}


