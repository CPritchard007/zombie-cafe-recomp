/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227b0c ServingCounter::deserialize */

/* ServingCounter::deserialize(DataInputStream*, CImage**, FurnitureData**) */

ServingCounter *
ServingCounter::deserialize(DataInputStream *param_1,CImage **param_2,FurnitureData **param_3)

{
  ServingCounter SVar1;
  undefined2 uVar2;
  int iVar3;
  FurnitureData *pFVar4;
  ServingCounter *this;
  undefined4 uVar5;
  FoodStack *this_00;
  int iVar6;
  int iVar7;
  short *psVar8;
  int *piVar9;
  CapcomDate aCStack_20 [12];
  
  piVar9 = *(int **)(DAT_00227ca8 + 0x227b18);
  if (*piVar9 < 0x31) {
    iVar3 = DataInputStream::readByte(param_1);
    pFVar4 = param_3[iVar3];
    this = (ServingCounter *)operator_new(0x7c);
    ServingCounter(this,pFVar4);
  }
  else {
    iVar3 = DataInputStream::readInt(param_1);
    pFVar4 = param_3[iVar3];
    this = (ServingCounter *)operator_new(0x7c);
    ServingCounter(this,pFVar4);
  }
  SVar1 = (ServingCounter)DataInputStream::readByte(param_1);
  this[0x34] = SVar1;
  iVar3 = DataInputStream::readBoolean(param_1);
  if (iVar3 != 0) {
    uVar5 = CafeObject::deserialize(param_1,param_2,param_3);
    *(undefined4 *)(this + 0x3c) = uVar5;
  }
  SVar1 = (ServingCounter)DataInputStream::readByte(param_1);
  this[0x41] = SVar1;
  if (0x17 < *piVar9) {
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x42) = uVar2;
  }
  if (0x47 < *piVar9) {
    uVar2 = DataInputStream::readShort(param_1);
    *(undefined2 *)(this + 0x44) = uVar2;
  }
  if (0x2f < *piVar9) {
    CapcomDate::deserialize(aCStack_20,param_1);
    memcpy(this + 0x56,aCStack_20,7);
  }
  if (*piVar9 < 0x1a) {
    uVar5 = DataInputStream::readShort(param_1);
  }
  else {
    uVar5 = DataInputStream::readInt(param_1);
  }
  *(undefined4 *)(this + 100) = uVar5;
  iVar3 = DataInputStream::readShort(param_1);
  *(undefined4 *)(this + 100) = 0;
  iVar7 = *(int *)(this + 0x6c);
  if (iVar7 < iVar3) {
    iVar6 = iVar3;
    if (iVar3 + iVar7 * -2 < 0 != SBORROW4(iVar3,iVar7 * 2)) {
      iVar6 = iVar7 * 2;
    }
    Vector<FoodStack*>::resize((Vector<FoodStack*> *)(this + 0x6c),iVar6,-1);
  }
  iVar7 = 0;
  do {
    if (iVar3 <= iVar7) {
      this[0x78] = (ServingCounter)0x1;
      return this;
    }
    this_00 = (FoodStack *)operator_new(0x24);
    String::String((String *)(this_00 + 0xc));
    String::String((String *)(this_00 + 0x14));
    FoodStack::deserialize(this_00,param_1);
    *(int *)(this + 100) = *(int *)(this + 100) + *(int *)(this_00 + 4);
    for (iVar6 = 0; iVar6 < *(int *)(this + 0x70) + 1; iVar6 = iVar6 + 1) {
      psVar8 = *(short **)(iVar6 * 4 + *(int *)(this + 0x74));
      if ((*(short *)this_00 == *psVar8) && (this_00[8] == *(FoodStack *)(psVar8 + 4))) {
        *(int *)(psVar8 + 2) = *(int *)(psVar8 + 2) + *(int *)(this_00 + 4);
        FoodStack::~FoodStack(this_00);
        operator_delete(this_00);
        goto LAB_00227c72;
      }
    }
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(this + 0x6c),this_00);
LAB_00227c72:
    iVar7 = iVar7 + 1;
  } while( true );
}


