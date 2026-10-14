/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227594 ServingCounter::draw */

/* ServingCounter::draw(CapcomGraphics*) */

void __thiscall ServingCounter::draw(ServingCounter *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar8;
  String aSStack_20 [12];
  
  Furniture::draw((Furniture *)this,param_1);
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x50);
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  if (*(char *)(iVar1 + DAT_00227694) != '\0') {
    CCTextRenderer::SetTextScale(*(void **)(iVar1 + DAT_00227698),extraout_s0,extraout_s1);
  }
  if (this[0x78] != (ServingCounter)0x0) {
    piVar7 = *(int **)(this + 0x68);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)aSStack_20);
    (*pcVar6)(piVar7,aSStack_20);
    String::~String(aSStack_20);
  }
  if (*(int *)(this + 100) != 0) {
    CapcomGraphics::setColorModulation(param_1,true);
    uVar4 = *(uint *)(*(int *)(this + 0x38) + (uint)(byte)this[0x34] * 4 + 4);
    uVar5 = *(uint *)(this + 4) - uVar4;
    ScreenElement::localToParentCoords
              (*(ScreenElement **)(this + 0x68),
               (int)(uVar5 & 0xffff | ((*(uint *)(this + 4) >> 0x10) - (uVar4 >> 0x10)) * 0x10000)
               >> 0x10,(int)(short)uVar5);
    CapcomGraphics::translate((long)param_1);
    (**(code **)(**(int **)(this + 0x68) + 0x10))(*(int **)(this + 0x68),param_1);
    CapcomGraphics::translate((long)param_1);
    CapcomGraphics::setColorModulation(param_1,false);
  }
  if (*(char *)(iVar1 + DAT_00227694) != '\0') {
    uVar8 = __mulsf3(uVar2,uVar3);
    CCTextRenderer::SetTextScale
              (*(void **)(iVar1 + DAT_00227698),(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  }
  return;
}


