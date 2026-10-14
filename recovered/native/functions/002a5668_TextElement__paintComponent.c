/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5668 TextElement::paintComponent */

/* TextElement::paintComponent(CapcomGraphics*) */

void __thiscall TextElement::paintComponent(TextElement *this,CapcomGraphics *param_1)

{
  TextElement TVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  String aSStack_38 [8];
  String aSStack_30 [12];
  int local_24;
  int local_1c;
  
  (**(code **)(**(int **)(this + 0x68) + 8))();
  iVar2 = __fixsfsi();
  TVar1 = this[0x7f];
  if ((int)((uint)(byte)TVar1 << 0x1d) < 0) {
    iVar7 = *(int *)(this + 0x10);
    iVar3 = (**(code **)(*(int *)this + 0x4c))(this);
    uVar8 = iVar7 - iVar3;
  }
  else {
    uVar8 = (byte)TVar1 & 2;
    if (((byte)TVar1 & 2) != 0) {
      iVar7 = *(int *)(this + 0x10);
      iVar3 = (**(code **)(*(int *)this + 0x4c))(this);
      uVar8 = iVar7 - iVar3 >> 1;
    }
  }
  CapcomGraphics::peekClip();
  local_60 = local_24 + local_1c;
  if ((this[0x84] != (TextElement)0x0) &&
     (iVar3 = local_24 + iVar2 * (uint)(byte)this[0x86], iVar3 < local_60)) {
    local_60 = iVar3;
  }
  CapcomGraphics::setColor(param_1,*(int *)(this + 0x1c));
  iVar3 = *(int *)(this + 0x70);
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 4);
    if (this[0x84] == (TextElement)0x0) {
      uVar9 = 0;
      local_5c = 0;
    }
    else {
      uVar9 = (uint)(byte)this[0x85];
      local_5c = uVar9 * (byte)this[0x86];
      if (uVar9 != 0) {
        uVar9 = *(uint *)((local_5c + -1) * 4 + *(int *)(iVar3 + 8));
      }
    }
    for (local_68 = 0; (int)(local_68 + local_5c) < iVar7 + 1; local_68 = local_68 + 1) {
      uVar4 = uVar8 + iVar2;
      uVar5 = *(uint *)((local_68 + local_5c) * 4 + *(int *)(*(int *)(this + 0x70) + 8));
      if (local_24 <= (int)uVar4) {
        TVar1 = this[0x7f];
        if (((byte)TVar1 & 0x20) == 0) {
          local_64 = (byte)TVar1 & 0x10;
          if (((byte)TVar1 & 0x10) != 0) {
            local_64 = *(int *)(this + 0xc) -
                       *(int *)(local_68 * 4 + *(int *)(*(int *)(this + 0x74) + 8)) >> 1;
          }
        }
        else {
          local_64 = *(int *)(this + 0xc) -
                     *(int *)(local_68 * 4 + *(int *)(*(int *)(this + 0x74) + 8));
        }
        piVar10 = *(int **)(this + 0x68);
        pcVar6 = *(code **)(*piVar10 + 0x18);
        String::String(aSStack_38,(String *)(this + 0x60));
        (*pcVar6)(piVar10,param_1,aSStack_38,local_64,uVar8,uVar9,uVar5,0,0,100,100);
        String::~String(aSStack_38);
      }
      if (local_60 <= (int)uVar4) {
        return;
      }
      uVar8 = uVar4;
      uVar9 = uVar5;
    }
  }
  if ((int)uVar8 < local_60) {
    TVar1 = this[0x7f];
    if ((int)((uint)(byte)TVar1 << 0x1a) < 0) {
      local_68 = *(int *)(this + 0xc) -
                 *(int *)(*(int *)(*(int *)(this + 0x74) + 4) * 4 +
                         *(int *)(*(int *)(this + 0x74) + 8));
    }
    else {
      local_68 = (byte)TVar1 & 0x10;
      if (((byte)TVar1 & 0x10) != 0) {
        local_68 = *(int *)(this + 0xc) -
                   *(int *)(*(int *)(*(int *)(this + 0x74) + 4) * 4 +
                           *(int *)(*(int *)(this + 0x74) + 8)) >> 1;
      }
    }
    piVar10 = *(int **)(this + 0x68);
    pcVar6 = *(code **)(*piVar10 + 0x14);
    String::substring(aSStack_30,(int)(this + 0x60));
    (*pcVar6)(piVar10,param_1,aSStack_30,local_68,uVar8,0,0,100,100);
    String::~String(aSStack_30);
  }
  return;
}


