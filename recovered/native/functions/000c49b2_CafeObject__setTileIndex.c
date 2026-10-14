/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c49b2 CafeObject::setTileIndex */

/* CafeObject::setTileIndex(short, Cafe*) */

void __thiscall CafeObject::setTileIndex(CafeObject *this,short param_1,Cafe *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  *(short *)(this + 0x2c) = param_1;
  pcVar2 = *(code **)(*(int *)this + 0xc);
  uVar1 = Cafe::indexToWorldCoordsCenter(param_2,(int)param_1);
  (*pcVar2)(this,uVar1);
  return;
}


