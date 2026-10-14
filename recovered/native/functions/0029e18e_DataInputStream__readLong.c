/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e18e DataInputStream::readLong */

/* DataInputStream::readLong() */

undefined8 __thiscall DataInputStream::readLong(DataInputStream *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar2 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar3 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar4 = (**(code **)(**(int **)(this + 4) + 0x18))();
  iVar5 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar6 = (**(code **)(**(int **)(this + 4) + 0x18))();
  iVar7 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar8 = (**(code **)(**(int **)(this + 4) + 0x18))();
  return CONCAT44((uVar2 & 0xff) << 0x10 | iVar1 << 0x18 | (uVar3 & 0xff) << 8 | uVar4 & 0xff,
                  uVar8 & 0xff | iVar5 << 0x18 | (uVar6 & 0xff) << 0x10 |
                  (uint)(iVar7 << 0x18) >> 0x10);
}


