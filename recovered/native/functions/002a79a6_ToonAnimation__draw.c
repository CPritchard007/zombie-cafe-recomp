/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a79a6 ToonAnimation::draw */

/* ToonAnimation::draw(CapcomGraphics*, int, int, ccMat2x3) */

void ToonAnimation::draw(int param_1,CapcomGraphics *param_2,undefined4 param_3,undefined4 param_4,
                        int param_5,undefined4 param_6,undefined4 param_7,int param_8,
                        undefined4 param_9,undefined4 param_10)

{
  CapcomGraphics CVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  param_9 = __floatsisf(param_3);
  param_10 = __floatsisf(param_4);
  if ((int)((uint)*(byte *)(param_1 + 7) << 0x1f) < 0) {
    param_5 = param_5 + -0x80000000;
  }
  if ((int)((uint)*(byte *)(param_1 + 7) << 0x1e) < 0) {
    param_8 = param_8 + -0x80000000;
  }
  CCToon::UpdateAnimation
            ((ccToon *)**(undefined4 **)(param_1 + 0x20),(uint)*(byte *)(param_1 + 9),
             (ccMat2x3 *)&param_5);
  CCToon::PrepareRenderList((ccToon *)**(undefined4 **)(param_1 + 0x20));
  local_78 = 0;
  piVar9 = (int *)0x0;
  do {
    if (*(uint *)(**(int **)(param_1 + 0x20) + 0x24) <= local_78) {
      return;
    }
    iVar10 = *(int *)(**(int **)(param_1 + 0x20) + 0x28) + local_78 * 0x1c;
    iVar5 = *(int *)(param_1 + 0x34) + 1;
    for (local_80 = 0; piVar2 = piVar9, local_80 < iVar5; local_80 = local_80 + 1) {
      piVar7 = (int *)(*(int *)(param_1 + 0x38) + local_80 * 0x14);
      local_6c = piVar7[2];
      local_70 = (uint)*(byte *)(piVar7 + 3);
      local_64 = (uint)*(byte *)((int)piVar7 + 0xd);
      local_68 = (uint)*(byte *)((int)piVar7 + 0xe);
      local_74 = piVar7[4];
      piVar2 = (int *)piVar7[1];
      if (*piVar7 == *(int *)(iVar10 + 0x18)) break;
    }
    piVar9 = piVar2;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    uVar3 = 0x3f800000;
    local_60 = 0x3f800000;
    local_54 = 0x3f800000;
    if (local_80 == iVar5) {
      piVar9 = *(int **)(*(int *)(iVar10 + 0x18) * 4 + *(int *)(param_1 + 0x28));
      local_60 = *(int *)(param_1 + 0x2c);
      local_54 = local_60;
      FUN_002a78be(&local_48,iVar10,&local_60);
      local_60 = local_48;
      local_5c = local_44;
      local_58 = local_40;
      local_54 = local_3c;
      local_50 = local_38;
      local_4c = local_34;
    }
    else if (local_64 == 0) {
      if (local_68 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
      }
      local_54 = __mulsf3(uVar3,local_6c);
      uVar8 = *(byte *)(param_1 + 7) & local_70;
      local_60 = local_54;
      if ((int)(uVar8 << 0x1f) < 0) {
        local_60 = local_54 + -0x80000000;
      }
      if ((int)(uVar8 << 0x1e) < 0) {
        local_54 = local_54 + -0x80000000;
      }
      local_50 = *(undefined4 *)(iVar10 + 0x10);
      local_4c = *(undefined4 *)(iVar10 + 0x14);
    }
    else {
      if (local_68 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
      }
      local_60 = __mulsf3(uVar3,local_6c);
      local_54 = local_60;
      FUN_002a78be(&local_30,iVar10,&local_60);
      iVar10 = local_24;
      iVar5 = local_30;
      local_5c = local_2c;
      local_60 = local_30;
      local_58 = local_28;
      local_54 = local_24;
      local_50 = local_20;
      local_4c = local_1c;
      iVar4 = __aeabi_fcmplt(local_30,0);
      if ((iVar4 != 0) && (-1 < (int)(local_70 << 0x1f))) {
        local_60 = iVar5 + -0x80000000;
      }
      iVar5 = __aeabi_fcmplt(iVar10,0);
      if ((iVar5 != 0) && (-1 < (int)(local_70 << 0x1e))) {
        local_54 = iVar10 + -0x80000000;
      }
    }
    if (piVar9 != (int *)0x0) {
      if ((local_80 == *(int *)(param_1 + 0x34) + 1) || (local_74 == 0xffffffff)) {
        (**(code **)(*piVar9 + 0x18))(piVar9,param_2,&local_60);
      }
      else {
        uVar6 = *(uint *)param_2;
        CVar1 = param_2[0x18];
        uVar8 = local_74;
        if (CVar1 != (CapcomGraphics)0x0) {
          uVar8 = local_74 & 0xffffff | uVar6 & 0xff000000;
        }
        CapcomGraphics::setColorModulation(param_2,true);
        CapcomGraphics::setColor(param_2,uVar8);
        (**(code **)(*piVar9 + 0x18))(piVar9,param_2,&local_60);
        CapcomGraphics::setColorModulation(param_2,CVar1 != (CapcomGraphics)0x0);
        CapcomGraphics::setColor(param_2,uVar6);
      }
    }
    local_78 = local_78 + 1;
  } while( true );
}


