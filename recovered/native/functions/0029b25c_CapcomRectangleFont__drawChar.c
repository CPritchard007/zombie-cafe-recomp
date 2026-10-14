/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b25c CapcomRectangleFont::drawChar */

/* CapcomRectangleFont::drawChar(CapcomGraphics*, char, int, int, int, int) */

undefined4 __thiscall
CapcomRectangleFont::drawChar
          (CapcomRectangleFont *this,CapcomGraphics *param_1,char param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  float extraout_s2;
  float extraout_s3;
  int local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  int local_2c;
  
  bVar8 = param_5 != 100;
  if (param_2 == ' ') {
    if (bVar8) {
      __divsi3(param_5 * (uint)*(byte *)(*(int *)(this + 4) + 3),100);
    }
    local_40 = __floatsisf();
  }
  else if ((param_2 == '\n') || (param_2 == '\r')) {
    local_40 = 0;
  }
  else if (param_2 == '\0') {
    local_40 = 0;
  }
  else {
    iVar3 = getCharIndex(this,param_2);
    iVar6 = *(int *)(this + 4);
    iVar3 = (uint)*(byte *)(iVar6 + iVar3) * 0x80 + *(int *)(this + 0xc) +
            (uint)*(byte *)(iVar6 + iVar3 + 1);
    bVar2 = *(byte *)(iVar6 + iVar3);
    local_40 = __floatunsisf(*(undefined1 *)(iVar6 + iVar3 + 1));
    if (bVar8) {
      uVar4 = __floatsisf(param_5);
      uVar4 = __mulsf3(local_40,uVar4);
      local_40 = __divsf3(uVar4,DAT_0029b450);
    }
    iVar3 = iVar3 + 3;
    iVar6 = iVar3;
    for (local_2c = 0; local_2c < (int)(bVar2 & 0x7f); local_2c = local_2c + 1) {
      iVar7 = *(int *)(this + 4);
      if ((char)bVar2 < '\0') {
        if (bVar8) {
          uVar5 = __divsi3(param_5 * (uint)*(byte *)(iVar7 + iVar3 + -1),100);
          local_38 = __divsi3(param_5 * (uint)*(byte *)(iVar7 + iVar3 + 1),100);
        }
        else {
          uVar5 = (uint)*(byte *)(iVar7 + iVar3 + -1);
          local_38 = (uint)*(byte *)(iVar7 + iVar3 + 1);
        }
        local_3c = uVar5 + param_3;
        if (param_6 != 100) {
          local_44 = __divsi3(param_6 * (uint)*(byte *)(iVar7 + iVar3),100);
          uVar5 = (uint)*(byte *)(iVar7 + iVar3 + 2);
LAB_0029b3e0:
          local_44 = local_44 + param_4;
          uVar5 = __divsi3(param_6 * uVar5,100);
        }
        else {
          uVar5 = (uint)*(byte *)(iVar7 + iVar3 + 2);
          local_44 = (uint)*(byte *)(iVar7 + iVar3) + param_4;
        }
      }
      else {
        bVar1 = *(byte *)(iVar7 + iVar6 + -1);
        if (bVar8) {
          uVar5 = __divsi3(param_5 * (uint)(bVar1 >> 4),100);
          local_38 = __divsi3(param_5 * (bVar1 & 0xf),100);
        }
        else {
          uVar5 = (uint)(bVar1 >> 4);
          local_38 = bVar1 & 0xf;
        }
        local_3c = uVar5 + param_3;
        if (param_6 != 100) {
          bVar1 = *(byte *)(iVar7 + iVar6);
          local_44 = __divsi3(param_6 * (uint)(bVar1 >> 4),100);
          uVar5 = bVar1 & 0xf;
          goto LAB_0029b3e0;
        }
        local_44 = (uint)(*(byte *)(iVar7 + iVar6) >> 4) + param_4;
        uVar5 = *(byte *)(iVar7 + iVar6) & 0xf;
      }
      __floatsisf(local_3c);
      __floatsisf(local_44);
      __floatsisf(local_38);
      uVar9 = __floatsisf(uVar5);
      CapcomGraphics::fillRect
                (param_1,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2,extraout_s3);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 2;
    }
  }
  return local_40;
}


