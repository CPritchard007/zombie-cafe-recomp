/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe838 ObjectiveSystem::deserialize */

/* ObjectiveSystem::deserialize(DataInputStream*) */

undefined8 ObjectiveSystem::deserialize(DataInputStream *param_1)

{
  Objective OVar1;
  undefined2 uVar2;
  ObjectiveSystem *this;
  undefined4 uVar3;
  int iVar4;
  Objective *pOVar5;
  int iVar6;
  
  this = (ObjectiveSystem *)operator_new(0x20);
  ObjectiveSystem(this);
  uVar3 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x18) = uVar3;
  uVar3 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x14) = uVar3;
  uVar3 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x10) = uVar3;
  iVar4 = DataInputStream::readInt(param_1);
  for (iVar6 = 0; iVar6 < iVar4; iVar6 = iVar6 + 1) {
    pOVar5 = (Objective *)operator_new(0x10);
    *(undefined2 *)pOVar5 = 0;
    *(undefined4 *)(pOVar5 + 8) = 0;
    *(undefined4 *)(pOVar5 + 4) = 0;
    *(undefined2 *)(pOVar5 + 0xc) = 0;
    pOVar5[0xe] = (Objective)0x0;
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)pOVar5 = uVar2;
    uVar3 = DataInputStream::readInt(param_1);
    *(undefined4 *)(pOVar5 + 4) = uVar3;
    uVar3 = DataInputStream::readInt(param_1);
    *(undefined4 *)(pOVar5 + 8) = uVar3;
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(pOVar5 + 0xc) = uVar2;
    OVar1 = (Objective)DataInputStream::readBoolean(param_1);
    pOVar5[0xe] = OVar1;
    Vector<Objective*>::addElement((Vector<Objective*> *)(this + 4),pOVar5);
  }
  uVar3 = DataInputStream::readLong(param_1);
  *(undefined4 *)(this + 0x1c) = uVar3;
  return CONCAT44(param_1,this);
}


