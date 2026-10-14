/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a637c TrueTypeTextElement::paintComponent */

/* TrueTypeTextElement::paintComponent(CapcomGraphics*) */

void __thiscall
TrueTypeTextElement::paintComponent(TrueTypeTextElement *this,CapcomGraphics *param_1)

{
  TrueTypeTextElement TVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  CFTexture *this_00;
  undefined4 local_88;
  uint local_78;
  int local_70;
  int local_64;
  CFTexture aCStack_50 [8];
  CFTexture aCStack_48 [12];
  int local_3c;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(TrueTypeTextElement **)(*(int *)(this + 0x68) + 0x15c) = this + 0x98;
  uVar2 = (**(code **)(**(int **)(this + 0x68) + 8))();
  if ((int)((uint)(byte)this[0x7f] << 0x1d) < 0) {
    iVar13 = *(int *)(this + 0x10);
    iVar3 = (**(code **)(*(int *)this + 0x4c))(this);
    iVar13 = iVar13 - iVar3;
  }
  else {
    uVar4 = 0;
    if (-1 < (int)((uint)(byte)this[0x7f] << 0x1e)) goto LAB_002a63ca;
    iVar3 = *(int *)(this + 0x10);
    iVar13 = (**(code **)(*(int *)this + 0x4c))(this);
    iVar13 = iVar3 - iVar13 >> 1;
  }
  uVar4 = __floatsisf(iVar13);
LAB_002a63ca:
  CapcomGraphics::peekClip();
  iVar13 = local_3c - *(int *)(param_1 + 8);
  local_70 = iVar13 + local_34;
  local_78 = (uint)(byte)this[0x84];
  if (local_78 != 0) {
    TVar1 = this[0x86];
    uVar5 = __floatsisf(iVar13);
    uVar6 = __floatsisf((uint)(byte)TVar1);
    uVar6 = __mulsf3(uVar2,uVar6);
    __addsf3(uVar5,uVar6);
    iVar3 = __fixsfsi();
    if (iVar3 < local_70) {
      local_70 = iVar3;
    }
    local_78 = (uint)(byte)this[0x85] * (uint)(byte)TVar1;
  }
  local_64 = local_78 << 2;
  do {
    if (*(int *)(this + 0x90) + 1 <= (int)local_78) {
      return;
    }
    uVar5 = __floatsisf(local_70);
    iVar3 = __aeabi_fcmplt(uVar4,uVar5);
    if ((iVar3 == 0) && (this[0xc4] != (TrueTypeTextElement)0x0)) {
      return;
    }
    this_00 = *(CFTexture **)(*(int *)(this + 0x94) + local_64);
    CFTexture::getHeight(this_00);
    uVar5 = __floatsisf();
    uVar5 = __addsf3(uVar4,uVar5);
    uVar6 = __floatsisf(iVar13);
    iVar3 = __aeabi_fcmplt(uVar5,uVar6);
    if ((iVar3 == 0) || (this[0xc4] == (TrueTypeTextElement)0x0)) {
      if ((int)((uint)(byte)this[0x7f] << 0x1a) < 0) {
        iVar3 = CFTexture::getWidth(this_00);
        iVar3 = *(int *)(this + 0xc) - iVar3;
LAB_002a6454:
        local_88 = __floatsisf(iVar3);
      }
      else {
        if ((int)((uint)(byte)this[0x7f] << 0x1b) < 0) {
          iVar3 = CFTexture::getWidth(this_00);
          iVar3 = *(int *)(this + 0xc) - iVar3 >> 1;
          goto LAB_002a6454;
        }
        local_88 = 0;
      }
      if (this[0xe0] == (TrueTypeTextElement)0x0) {
        CFTexture::CFTexture(aCStack_48,this_00);
        uVar5 = CFTexture::getWidth(this_00);
        uVar6 = CFTexture::getHeight(this_00);
        uVar5 = __floatsisf(uVar5);
        uVar6 = __floatsisf(uVar6);
        uVar6 = __addsf3(uVar6,uVar4);
        CapcomGraphics::drawRegion(param_1,aCStack_48,0,uVar4,uVar5,uVar6,local_88,uVar4,0,1,9);
        CFTexture::~CFTexture(aCStack_48);
      }
      else {
        local_24 = 0x3f800000;
        local_2c = 0;
        local_28 = 0;
        local_20 = 0;
        local_1c = 0;
        local_30 = 0x3f800000;
        iVar3 = CFTexture::getWidth(this_00);
        uVar5 = __floatsisf(iVar3 >> 1);
        uVar5 = __addsf3(local_88,uVar5);
        local_20 = uVar5;
        iVar3 = CFTexture::getHeight(this_00);
        uVar6 = __floatsisf(iVar3 >> 1);
        uVar6 = __addsf3(uVar4,uVar6);
        uVar11 = *(undefined4 *)(this + 200);
        uVar9 = *(undefined4 *)(this + 0xd0);
        uVar10 = *(undefined4 *)(this + 0xcc);
        uVar12 = *(undefined4 *)(this + 0xd4);
        uVar7 = __mulsf3(uVar11,uVar5);
        uVar8 = __mulsf3(uVar9,uVar6);
        uVar7 = __addsf3(uVar7,uVar8);
        uVar7 = __addsf3(uVar7,*(undefined4 *)(this + 0xd8));
        uVar5 = __mulsf3(uVar10,uVar5);
        uVar6 = __mulsf3(uVar12,uVar6);
        uVar5 = __addsf3(uVar5,uVar6);
        uVar5 = __addsf3(uVar5,*(undefined4 *)(this + 0xdc));
        uVar6 = __mulsf3(uVar9,0);
        local_30 = __addsf3(uVar11,uVar6);
        uVar6 = __mulsf3(uVar12,0);
        local_2c = __addsf3(uVar10,uVar6);
        uVar6 = __mulsf3(uVar11,0);
        local_28 = __addsf3(uVar6,uVar9);
        uVar6 = __mulsf3(uVar10,0);
        local_24 = __addsf3(uVar6,uVar12);
        local_20 = uVar7;
        local_1c = uVar5;
        glDisable(DAT_002a6694);
        CFTexture::CFTexture(aCStack_50,this_00);
        uVar5 = CFTexture::getWidth(this_00);
        uVar6 = CFTexture::getHeight(this_00);
        uVar5 = __floatsisf(uVar5);
        uVar6 = __floatsisf(uVar6);
        CapcomGraphics::drawRegion(param_1,aCStack_50,0,0,uVar5,uVar6,&local_30);
        CFTexture::~CFTexture(aCStack_50);
        CapcomGraphics::finishBatch();
        glEnable(DAT_002a6694);
      }
      uVar4 = __addsf3(uVar4,uVar2);
    }
    local_78 = local_78 + 1;
    local_64 = local_64 + 4;
  } while( true );
}


