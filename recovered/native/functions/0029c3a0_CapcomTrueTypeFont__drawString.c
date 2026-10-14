/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c3a0 CapcomTrueTypeFont::drawString */

/* CapcomTrueTypeFont::drawString(CapcomGraphics*, String, int, int, bool, bool, int, int) */

void __thiscall
CapcomTrueTypeFont::drawString
          (CapcomTrueTypeFont *this,CapcomGraphics *param_1,String *param_3,undefined4 param_4,
          undefined4 param_5,char param_6,char param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int local_30 [2];
  String aSStack_28 [8];
  CFTexture aCStack_20 [12];
  
  String::String(aSStack_28,param_3);
  drawStringToTexture(local_30,this,aSStack_28,param_4,param_5,param_6,param_7,param_8,param_9,0,0,0
                      ,0);
  String::~String(aSStack_28);
  CFTexture::CFTexture(aCStack_20,(CFTexture *)local_30);
  iVar3 = local_30[0];
  iVar1 = local_30[0];
  if (local_30[0] != 0) {
    iVar1 = *(int *)(*(int *)(local_30[0] + 4) + 0x14);
  }
  uVar2 = __floatsisf(iVar1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x18);
  }
  uVar4 = __floatsisf(iVar3);
  uVar5 = __floatsisf(param_4);
  uVar6 = __floatsisf(param_5);
  uVar7 = 8;
  if (param_6 != '\0') {
    uVar7 = 0x10;
  }
  CapcomGraphics::drawRegion
            (param_1,aCStack_20,0,0,uVar2,uVar4,uVar5,uVar6,0,1,uVar7 | 2 - (param_7 == '\0'));
  CFTexture::~CFTexture(aCStack_20);
  if (local_30[0] != 0) {
    local_30[0] = *(int *)(*(int *)(local_30[0] + 4) + 0x14);
  }
  CFTexture::~CFTexture((CFTexture *)local_30);
  __floatsisf(local_30[0]);
  return;
}


