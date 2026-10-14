/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4738 GatyaEftImageElement::SetKeyRetValue */

/* GatyaEftImageElement::SetKeyRetValue(float, int) */

void __thiscall
GatyaEftImageElement::SetKeyRetValue(GatyaEftImageElement *this,float param_1,int param_2)

{
  Vector<EftKeyData> *this_00;
  undefined4 in_r2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(this + 0xb4);
  uVar2 = *(undefined4 *)(this + 0xb8);
  uVar3 = *(undefined4 *)(this + 0xbc);
  uVar4 = *(undefined4 *)(this + 0xc0);
  uVar5 = *(undefined4 *)(this + 0xc4);
  if (*(int *)(this + 0x98) == 0) {
    this_00 = (Vector<EftKeyData> *)operator_new(0xc);
    param_1 = (float)Vector<EftKeyData>::Vector(this_00);
    *(Vector<EftKeyData> **)(this + 0x98) = this_00;
  }
  Vector<EftKeyData>::addElement
            (param_1,*(undefined4 *)(this + 0x98),param_2,0,uVar1,uVar2,uVar3,uVar4,uVar5,0xffffffff
             ,0xffffffff,in_r2);
  return;
}


