/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a42c CapcomGraphics::drawRegion */

/* CapcomGraphics::drawRegion(CFTexture, float, float, float, float, float, float, unsigned char,
   bool, int) */

void __thiscall
CapcomGraphics::drawRegion
          (CapcomGraphics *this,CFTexture *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9,
          undefined4 param_10,int param_11)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_80;
  CFTexture aCStack_60 [8];
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  
  iVar1 = __fixsfsi(param_7);
  iVar2 = __fixsfsi(param_5);
  localAnchorToGlobalX(this,iVar1,iVar2,param_11);
  fVar3 = (float)__floatsisf();
  iVar1 = __fixsfsi(param_8);
  iVar2 = __fixsfsi(param_6);
  localAnchorToGlobalY(this,iVar1,iVar2,param_11);
  uVar4 = __floatsisf();
  iVar1 = *(int *)param_2;
  if (iVar1 == 0) {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = *(undefined4 *)(iVar1 + 8);
  }
  fVar5 = (float)__mulsf3(param_3,uVar7);
  uVar7 = __addsf3(param_3,param_5);
  if (iVar1 == 0) {
    uVar8 = 0x3f800000;
  }
  else {
    uVar8 = *(undefined4 *)(iVar1 + 8);
  }
  fVar6 = (float)__mulsf3(uVar7,uVar8);
  if (iVar1 == 0) {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
  }
  local_80 = __mulsf3(param_4,uVar7);
  uVar7 = __addsf3(param_4,param_6);
  if (iVar1 == 0) {
    uVar8 = 0x3f800000;
  }
  else {
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
  }
  uVar7 = __mulsf3(uVar7,uVar8);
  local_38 = fVar5;
  if ((int)((uint)param_9 << 0x1f) < 0) {
    local_38 = fVar6;
    fVar6 = fVar5;
  }
  uVar8 = uVar7;
  if (-1 < (int)((uint)param_9 << 0x1e)) {
    uVar8 = local_80;
    local_80 = uVar7;
  }
  local_58 = fVar3;
  local_54 = uVar4;
  uVar7 = __addsf3(fVar3,param_5);
  local_50 = uVar7;
  local_4c = uVar4;
  local_48 = fVar3;
  local_44 = __addsf3(uVar4,param_6);
  local_24 = local_80;
  local_1c = local_80;
  local_40 = uVar7;
  local_3c = local_44;
  local_34 = uVar8;
  local_30 = fVar6;
  local_2c = uVar8;
  local_28 = local_38;
  local_20 = fVar6;
  CFTexture::CFTexture(aCStack_60,param_2);
  ensureBatchReady(this,aCStack_60);
  CFTexture::~CFTexture(aCStack_60);
  createBatchIndices(this,4);
  Vector<float>::copyInto((Vector<float> *)(this + 0x28),&local_58,8);
  Vector<float>::copyInto((Vector<float> *)(this + 0x34),&local_38,8);
  return;
}


