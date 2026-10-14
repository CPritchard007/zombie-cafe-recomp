/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a2ca CapcomGraphics::drawScaledRegion */

/* CapcomGraphics::drawScaledRegion(CFTexture, float, float, float, float, float, float, unsigned
   char, bool, int, float, float) */

void __thiscall
CapcomGraphics::drawScaledRegion
          (CapcomGraphics *this,CFTexture *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9,
          undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_84;
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
  
  uVar1 = __mulsf3(param_5,param_12);
  iVar2 = __fixsfsi(param_7);
  iVar3 = __fixsfsi(uVar1);
  localAnchorToGlobalX(this,iVar2,iVar3,param_11);
  fVar4 = (float)__floatsisf();
  uVar5 = __mulsf3(param_6,param_13);
  iVar2 = __fixsfsi(param_8);
  iVar3 = __fixsfsi(uVar5);
  localAnchorToGlobalY(this,iVar2,iVar3,param_11);
  uVar6 = __floatsisf();
  iVar2 = *(int *)param_2;
  if (iVar2 == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = *(undefined4 *)(iVar2 + 8);
  }
  fVar7 = (float)__mulsf3(param_3,uVar9);
  uVar9 = __addsf3(param_3,param_5);
  if (iVar2 == 0) {
    uVar10 = 0x3f800000;
  }
  else {
    uVar10 = *(undefined4 *)(iVar2 + 8);
  }
  fVar8 = (float)__mulsf3(uVar9,uVar10);
  if (iVar2 == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
  }
  local_84 = __mulsf3(param_4,uVar9);
  uVar9 = __addsf3(param_4,param_6);
  if (iVar2 == 0) {
    uVar10 = 0x3f800000;
  }
  else {
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
  }
  uVar9 = __mulsf3(uVar9,uVar10);
  local_38 = fVar7;
  if ((int)((uint)param_9 << 0x1f) < 0) {
    local_38 = fVar8;
    fVar8 = fVar7;
  }
  uVar10 = uVar9;
  if (-1 < (int)((uint)param_9 << 0x1e)) {
    uVar10 = local_84;
    local_84 = uVar9;
  }
  local_58 = fVar4;
  local_54 = uVar6;
  uVar1 = __addsf3(fVar4,uVar1);
  local_50 = uVar1;
  local_4c = uVar6;
  local_48 = fVar4;
  local_44 = __addsf3(uVar6,uVar5);
  local_24 = local_84;
  local_1c = local_84;
  local_40 = uVar1;
  local_3c = local_44;
  local_34 = uVar10;
  local_30 = fVar8;
  local_2c = uVar10;
  local_28 = local_38;
  local_20 = fVar8;
  CFTexture::CFTexture(aCStack_60,param_2);
  ensureBatchReady(this,aCStack_60);
  CFTexture::~CFTexture(aCStack_60);
  createBatchIndices(this,4);
  Vector<float>::copyInto((Vector<float> *)(this + 0x28),&local_58,8);
  Vector<float>::copyInto((Vector<float> *)(this + 0x34),&local_38,8);
  return;
}


