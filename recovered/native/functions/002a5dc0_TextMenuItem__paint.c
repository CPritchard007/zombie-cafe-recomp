/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5dc0 TextMenuItem::paint */

/* TextMenuItem::paint(CapcomGraphics*) */

void __thiscall TextMenuItem::paint(TextMenuItem *this,CapcomGraphics *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  int *piVar13;
  undefined4 in_stack_ffffff60;
  undefined4 in_stack_ffffff64;
  int local_7c;
  int local_78;
  undefined4 local_74;
  String aSStack_48 [8];
  String aSStack_40 [12];
  int local_34;
  int local_2c;
  
  ScreenElement::paint((ScreenElement *)this,param_1);
  sVar1 = ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
  CapcomGraphics::pushClip(CONCAT44(in_stack_ffffff64,in_stack_ffffff60));
  local_78 = *(int *)(this + 4);
  CapcomGraphics::peekClip();
  iVar8 = *(int *)(param_1 + 8);
  iVar12 = (int)sVar1;
  iVar9 = (local_34 - iVar8) + local_2c;
  (**(code **)(**(int **)(this + 0x70) + 8))();
  iVar2 = __fixsfsi();
  uVar10 = (uint)(byte)this[0x15];
  uVar4 = (uVar10 << 0x1b) >> 0x1f;
  iVar5 = -((int)(uVar10 << 0x1e) >> 0x1f);
  if (iVar5 != 0) {
    iVar12 = iVar12 + (iVar2 >> 1);
  }
  if ((int)(uVar10 << 0x1a) < 0) {
    local_78 = local_78 - *(int *)(this + 0xc);
  }
  if (this[0x65] == (TextMenuItem)0x0) {
    iVar3 = *(int *)(this + 0x1c);
  }
  else {
    iVar3 = -1;
  }
  CapcomGraphics::setColor(param_1,iVar3);
  if (*(int *)(this + 0x74) != 0) {
    iVar3 = *(int *)(*(int *)(this + 0x74) + 4);
    local_74 = 0;
    for (local_7c = 0; local_7c < iVar3 + 1; local_7c = local_7c + 1) {
      uVar6 = *(undefined4 *)(local_7c * 4 + *(int *)(*(int *)(this + 0x74) + 8));
      iVar7 = iVar12 + iVar2;
      if (local_34 - iVar8 <= iVar7) {
        piVar13 = *(int **)(this + 0x70);
        pcVar11 = *(code **)(*piVar13 + 0x18);
        String::String(aSStack_48,(String *)(this + 0x68));
        (*pcVar11)(piVar13,param_1,aSStack_48,local_78,iVar12,local_74,uVar6,uVar4,iVar5,100,100);
        String::~String(aSStack_48);
      }
      if (iVar9 <= iVar7) goto LAB_002a5f18;
      iVar12 = iVar7;
      local_74 = uVar6;
    }
  }
  if (iVar12 < iVar9) {
    piVar13 = *(int **)(this + 0x70);
    pcVar11 = *(code **)(*piVar13 + 0x14);
    String::substring(aSStack_40,(int)(this + 0x68));
    (*pcVar11)(piVar13,param_1,aSStack_40,local_78,iVar12,uVar4,iVar5,100,100);
    String::~String(aSStack_40);
  }
LAB_002a5f18:
  CapcomGraphics::popClip();
  return;
}


