/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c5488 CensoredSign::draw */

/* CensoredSign::draw(CapcomGraphics*) */

void __thiscall CensoredSign::draw(CensoredSign *this,CapcomGraphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined6 uVar3;
  
  uVar3 = CharacterInstance::getBoundingBox(*(CharacterInstance **)(this + 0x10));
  iVar1 = (int)uVar3 >> 0x10;
  iVar2 = (int)uVar3 >> 0x1f;
  if (*(byte *)(*(int *)(*(int *)(this + 0x10) + 0x8c) + 0x4c) - 1 < 2) {
    iVar2 = -(iVar1 - iVar2 >> 1);
  }
  else {
    iVar2 = iVar1 - iVar2 >> 1;
  }
  (**(code **)(**(int **)(this + 8) + 0x14))
            (*(int **)(this + 8),param_1,(*(int *)(*(int *)(this + 4) + 4) >> 0x10) + iVar2,
             (int)(short)*(int *)(*(int *)(this + 4) + 4) + (int)(short)((uint6)uVar3 >> 0x20) +
             (int)(short)uVar3 / 2,0x3f800000,0x3f800000,0,0x12);
  return;
}


