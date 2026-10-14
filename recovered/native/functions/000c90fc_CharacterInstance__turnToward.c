/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c90fc CharacterInstance::turnToward */

/* CharacterInstance::turnToward(long) */

void __thiscall CharacterInstance::turnToward(CharacterInstance *this,long param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  
  sVar2 = (short)param_1;
  sVar4 = (short)*(int *)(this + 4);
  bVar1 = *(byte *)(*(int *)(this + 0x8c) + 0x4c);
  iVar3 = *(int *)(this + 4) >> 0x10;
  if (iVar3 < param_1 >> 0x10) {
    if (sVar2 < sVar4) {
      bVar1 = 3;
    }
    else {
      bVar1 = bVar1 & -(sVar4 >= sVar2);
    }
  }
  else if (param_1 >> 0x10 < iVar3) {
    if (sVar2 < sVar4) {
      bVar1 = 2;
    }
    else if (sVar4 < sVar2) {
      bVar1 = 1;
    }
  }
  setCurrentAnimation(this,(uchar)this[0x34],bVar1,false);
  return;
}


