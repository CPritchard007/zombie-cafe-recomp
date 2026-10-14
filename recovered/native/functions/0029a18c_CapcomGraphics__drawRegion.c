/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a18c CapcomGraphics::drawRegion */

/* CapcomGraphics::drawRegion(CFTexture, float, float, float, float, ccMat2x3&) */

void __thiscall
CapcomGraphics::drawRegion
          (CapcomGraphics *this,CFTexture *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  CFTexture aCStack_60 [8];
  float local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar6 = *(int *)param_2;
  if (iVar6 == 0) {
    uVar3 = 0x3f800000;
  }
  else {
    uVar3 = *(undefined4 *)(iVar6 + 8);
  }
  fVar1 = (float)__mulsf3(param_3,uVar3);
  uVar3 = __addsf3(param_3,param_5);
  if (iVar6 == 0) {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = *(undefined4 *)(iVar6 + 8);
  }
  uVar3 = __mulsf3(uVar3,uVar4);
  if (iVar6 == 0) {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = *(undefined4 *)(iVar6 + 0xc);
  }
  uVar4 = __mulsf3(param_4,uVar4);
  uVar2 = __addsf3(param_4,param_6);
  if (iVar6 == 0) {
    uVar5 = 0x3f800000;
  }
  else {
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
  }
  uVar2 = __mulsf3(uVar2,uVar5);
  iVar6 = __mulsf3(param_5,0x3f000000);
  local_44 = __mulsf3(param_6,0x3f000000);
  local_54 = local_44 + -0x80000000;
  local_58 = (float)(iVar6 + -0x80000000);
  local_50 = iVar6;
  local_4c = local_54;
  local_48 = local_58;
  local_40 = iVar6;
  local_3c = local_44;
  FUN_002994aa(&local_80,param_7,&local_58);
  local_58 = local_80;
  local_54 = local_7c;
  FUN_002994aa(&local_78,param_7,&local_50);
  local_50 = local_78;
  local_4c = local_74;
  FUN_002994aa(&local_70,param_7,&local_48);
  local_48 = local_70;
  local_44 = local_6c;
  FUN_002994aa(&local_68,param_7,&local_40);
  local_40 = local_68;
  local_3c = local_64;
  local_38 = fVar1;
  local_34 = uVar4;
  local_30 = uVar3;
  local_2c = uVar4;
  local_28 = fVar1;
  local_24 = uVar2;
  local_20 = uVar3;
  local_1c = uVar2;
  CFTexture::CFTexture(aCStack_60,param_2);
  ensureBatchReady(this,aCStack_60);
  CFTexture::~CFTexture(aCStack_60);
  createBatchIndices(this,4);
  Vector<float>::copyInto((Vector<float> *)(this + 0x28),&local_58,8);
  Vector<float>::copyInto((Vector<float> *)(this + 0x34),&local_38,8);
  return;
}


