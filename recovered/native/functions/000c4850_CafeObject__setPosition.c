/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4850 CafeObject::setPosition */

/* CafeObject::setPosition(long) */

void __thiscall CafeObject::setPosition(CafeObject *this,long param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar1 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar1 + 4);
  *(short *)(this + 0x24) = (short)param_1;
  *(long *)(this + 4) = param_1;
  iVar1 = Cafe::worldToDiamondCoords(param_1 >> 0x10,(int)(short)param_1);
  iVar3 = *(int *)(iVar3 + 0x7e8);
  if ((((iVar3 == 0) || ((int)*(short *)(iVar3 + 0x9c) <= iVar1 >> 0x10)) ||
      ((short)iVar1 <= *(short *)(iVar3 + 0x9e))) ||
     (iVar1 = (**(code **)(*(int *)this + 0x14))(this), iVar1 == 2)) {
    iVar1 = (**(code **)(*(int *)this + 0x14))(this);
    if (iVar1 != 2) {
      return;
    }
    sVar2 = *(short *)(this + 0x24) + 10;
  }
  else {
    sVar2 = *(short *)(this + 0x24) + (short)DAT_000c48c0;
  }
  *(short *)(this + 0x24) = sVar2;
  return;
}


