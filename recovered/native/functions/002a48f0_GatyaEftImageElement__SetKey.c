/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a48f0 GatyaEftImageElement::SetKey */

/* GatyaEftImageElement::SetKey(float, float, float, float, float, int, int, int) */

void __thiscall
GatyaEftImageElement::SetKey
          (GatyaEftImageElement *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vector<EftKeyData> *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  iVar1 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar1 + 0x44);
  uVar2 = __mulsf3(param_7,uVar4);
  *(undefined4 *)(this + 0xb4) = uVar2;
  uVar3 = __mulsf3(param_8,uVar5);
  *(undefined4 *)(this + 0xb8) = uVar3;
  uVar4 = __mulsf3(in_stack_00000000,uVar4);
  *(undefined4 *)(this + 0xbc) = uVar4;
  uVar5 = __mulsf3(in_stack_00000004,uVar5);
  *(undefined4 *)(this + 0xc0) = uVar5;
  *(undefined4 *)(this + 0xc4) = in_stack_00000008;
  if (*(int *)(this + 0x98) == 0) {
    this_00 = (Vector<EftKeyData> *)operator_new(0xc);
    Vector<EftKeyData>::Vector(this_00);
    *(Vector<EftKeyData> **)(this + 0x98) = this_00;
  }
  Vector<EftKeyData>::addElement
            (*(undefined4 *)(this + 0x98),param_6,0xffffffff,uVar2,uVar3,uVar4,uVar5,
             in_stack_00000008,in_stack_0000000c,in_stack_00000010,0xffffffff);
  return;
}


