/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4844 GatyaEftImageElement::SetKeyScl */

/* GatyaEftImageElement::SetKeyScl(float, float, float) */

void __thiscall
GatyaEftImageElement::SetKeyScl
          (GatyaEftImageElement *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  Vector<EftKeyData> *this_00;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(this + 0xb4);
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  uVar4 = *(undefined4 *)(this + 0xb8);
  uVar6 = __mulsf3(in_r2,uVar6);
  *(undefined4 *)(this + 0xbc) = uVar6;
  uVar2 = __mulsf3(in_r3,uVar2);
  *(undefined4 *)(this + 0xc0) = uVar2;
  uVar5 = *(undefined4 *)(this + 0xc4);
  if (*(int *)(this + 0x98) == 0) {
    this_00 = (Vector<EftKeyData> *)operator_new(0xc);
    Vector<EftKeyData>::Vector(this_00);
    *(Vector<EftKeyData> **)(this + 0x98) = this_00;
  }
  Vector<EftKeyData>::addElement
            (*(undefined4 *)(this + 0x98),in_r1,2,uVar3,uVar4,uVar6,uVar2,uVar5,0xffffffff,
             0xffffffff,0xffffffff);
  return;
}


