/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb6c0 CafeObject::contains */

/* CafeObject::contains(long) */

uint __thiscall CafeObject::contains(CafeObject *this,long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(this + 4);
  uVar1 = 0;
  if (((int)(short)(uVar3 >> 0x10) <= param_1 >> 0x10) &&
     (param_1 >> 0x10 <=
      (int)(((uVar3 >> 0x10) + (*(uint *)(this + 0x20) >> 0x10) + -1) * 0x10000) >> 0x10)) {
    uVar2 = (uint)(short)param_1;
    if ((int)(short)uVar3 <= (int)uVar2) {
      iVar4 = ((*(uint *)(this + 0x20) - 1) + (uVar3 & 0xffff)) * 0x10000;
      uVar1 = ((iVar4 >> 0x1f) - ((int)uVar2 >> 0x1f)) + (uint)(uVar2 <= (uint)(iVar4 >> 0x10)) &
              0xff;
    }
  }
  return uVar1;
}


