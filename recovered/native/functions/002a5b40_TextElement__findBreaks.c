/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5b40 TextElement::findBreaks */

/* TextElement::findBreaks() */

void __thiscall TextElement::findBreaks(TextElement *this)

{
  short sVar1;
  undefined4 uVar2;
  Vector<int> *pVVar3;
  uint uVar4;
  wchar_t wVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_38;
  int local_30;
  
  (**(code **)(*(int *)this + 0x54))();
  if (this[0x7d] == (TextElement)0x0) {
    if (*(int *)(this + 0xc) < 1) {
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0xc) = DAT_002a5dbc;
  }
  local_44 = *(int **)(this + 0x68);
  if (local_44 != (int *)0x0) {
    (**(code **)(*local_44 + 0xc))(local_44);
    local_44 = (int *)__fixsfsi();
  }
  if (*(int **)(this + 0x68) == (int *)0x0) {
    uVar2 = CCTextRenderer::GetTextHeight(*(void **)(this + 0x6c));
    uVar2 = __addsf3(uVar2,*(undefined4 *)(this + 0x88));
  }
  else {
    uVar2 = (**(code **)(**(int **)(this + 0x68) + 8))();
  }
  this[0x86] = (TextElement)0x4;
  if ((byte)this[0x7c] == 0) {
    iVar10 = 1000;
  }
  else {
    iVar10 = (uint)(byte)this[0x7c] << 1;
  }
  pVVar3 = (Vector<int> *)operator_new(0xc);
  Vector<int>::Vector(pVVar3);
  *(Vector<int> **)(this + 0x74) = pVVar3;
  pVVar3 = (Vector<int> *)operator_new(0xc);
  Vector<int>::Vector(pVVar3);
  *(Vector<int> **)(this + 0x78) = pVVar3;
  sVar1 = *(short *)(this + 0x66);
  iVar11 = 0;
  iVar12 = 0;
  local_48 = 0;
  local_50 = 0;
  uVar13 = 0;
  local_30 = 0;
  local_40 = 0;
  local_4c = uVar2;
  while (iVar12 < sVar1) {
    uVar4 = String::charAt((String *)(this + 0x60),iVar11);
    wVar5 = String::charAt((String *)(this + 0x60),iVar11 + 1);
    local_38 = 3;
    if (uVar4 < 0x80) {
      local_38 = 1;
    }
    puVar6 = *(undefined4 **)(this + 0x68);
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = CCTextRenderer::GetCharacterWidth(*(void **)(this + 0x6c),uVar4);
    }
    else {
      uVar7 = (**(code **)*puVar6)(puVar6,uVar4);
      uVar8 = __floatsisf(local_44);
      uVar7 = __addsf3(uVar7,uVar8);
    }
    if ((uVar4 == 10) || (uVar4 == 0x5c)) {
      if ((uVar4 == 0xe9) && (*(int *)(this + 0x68) == 0)) {
        if (local_48 < iVar11) {
          local_40 = local_40 + 1;
LAB_002a5c6a:
          local_48 = iVar11;
        }
      }
      else if (local_48 < iVar11) goto LAB_002a5c6a;
      iVar12 = iVar12 + local_38;
      uVar13 = __addsf3(uVar13,uVar7);
      addBreak(this,iVar11 + local_40);
      iVar9 = __fixsfsi(uVar13);
      Vector<int>::addElement(*(Vector<int> **)(this + 0x74),iVar9);
      Vector<int>::addElement(*(Vector<int> **)(this + 0x78),iVar12);
      if (local_50 < iVar9) {
        local_50 = iVar9;
      }
      local_4c = __addsf3(local_4c,uVar2);
      uVar13 = 0;
      local_54 = 0;
    }
    else {
      local_54 = local_30 + 2;
      if ((local_54 < iVar10) || (iVar9 = MultiByteString::checkBreakOkUnicode(wVar5), iVar9 == 0))
      {
        if (local_48 < iVar11) {
          local_48 = iVar11;
        }
        iVar12 = iVar12 + local_38;
        uVar13 = __addsf3(uVar13,uVar7);
        if (uVar4 < 0x80) {
          local_54 = local_30 + 1;
        }
      }
      else {
        if ((wVar5 == L'\n') || (wVar5 == L'\\')) {
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 1;
        }
        iVar12 = iVar12 + local_38;
        uVar13 = __addsf3(uVar13,uVar7);
        if (iVar12 == sVar1 + -1) break;
        iVar9 = __fixsfsi();
        addBreak(this,iVar11 + local_40);
        Vector<int>::addElement(*(Vector<int> **)(this + 0x74),iVar9);
        Vector<int>::addElement(*(Vector<int> **)(this + 0x78),iVar12);
        if (local_50 < iVar9) {
          local_50 = iVar9;
        }
        local_4c = __addsf3(local_4c,uVar2);
        uVar13 = 0;
        local_54 = 0;
      }
    }
    iVar11 = iVar11 + 1;
    local_30 = local_54;
  }
  if (this[0x7d] == (TextElement)0x0) {
    if (this[0x7e] == (TextElement)0x0) {
      return;
    }
    iVar10 = *(int *)(this + 0xc);
  }
  else {
    iVar10 = __fixsfsi(uVar13);
    if (iVar10 < local_50) {
      iVar10 = local_50;
    }
  }
  if (this[0x7e] == (TextElement)0x0) {
    local_4c = __floatsisf(*(undefined4 *)(this + 0x10));
  }
  iVar11 = __fixsfsi(local_4c);
  ScreenElement::setSize((ScreenElement *)this,iVar10,iVar11);
  return;
}


