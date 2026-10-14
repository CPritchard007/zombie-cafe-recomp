/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001651fc GameStateMap::paint */

/* GameStateMap::paint(CapcomGraphics*) */

undefined8 __thiscall GameStateMap::paint(GameStateMap *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  float extraout_s0;
  undefined8 uVar7;
  float extraout_s1;
  
  iVar5 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  iVar3 = DAT_001652c4;
  iVar6 = DAT_001652c0 + 0x165210;
  pvVar4 = *(void **)((*(int *)(iVar1 * 4 + iVar6) + 0x136) * 4 + iVar5);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar3 + 0x165224));
  uVar7 = SmDev();
  CCTextRenderer::SetShadowOffset(pvVar4,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  (**(code **)(**(int **)(this + 0x14) + 0xc))(*(int **)(this + 0x14),param_1);
  iVar1 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  CCTextRenderer::SetShadowOffset
            (*(void **)((*(int *)(iVar3 * 4 + iVar6) + 0x136) * 4 + iVar1),extraout_s0,extraout_s1);
  (**(code **)(**(int **)(this + 0x3d4) + 0xc))(*(int **)(this + 0x3d4),param_1);
  (**(code **)(**(int **)(this + DAT_001652c8) + 0xc))(*(int **)(this + DAT_001652c8),param_1);
  (**(code **)(**(int **)(this + DAT_001652cc) + 0xc))(*(int **)(this + DAT_001652cc),param_1);
  (**(code **)(**(int **)(this + 0x438) + 0xc))(*(int **)(this + 0x438),param_1);
  (**(code **)(**(int **)(this + DAT_001652d0) + 0xc))(*(int **)(this + DAT_001652d0),param_1);
  (**(code **)(**(int **)(this + 0x448) + 0xc))(*(int **)(this + 0x448),param_1);
  (**(code **)(**(int **)(this + 0x430) + 0xc))(*(int **)(this + 0x430),param_1);
  return CONCAT44(uVar2,pvVar4);
}


