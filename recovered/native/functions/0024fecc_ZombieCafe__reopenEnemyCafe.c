/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024fecc ZombieCafe::reopenEnemyCafe */

/* ZombieCafe::reopenEnemyCafe(int) */

void __thiscall ZombieCafe::reopenEnemyCafe(ZombieCafe *this,int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int extraout_r1;
  undefined4 *puVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int local_34;
  CharacterData aCStack_2c [8];
  Vector<int> aVStack_24 [4];
  int local_20;
  void *local_1c;
  
  puVar5 = (undefined4 *)(DAT_0024ffe4 + 0x24fed8);
  Vector<int>::Vector(aVStack_24);
  piVar6 = (int *)*puVar5;
  for (iVar8 = 0; iVar8 < *piVar6; iVar8 = iVar8 + 1) {
    if (*(int *)(iVar8 * 4 + **(int **)(DAT_0024ffe8 + 0x24feee)) <= *(int *)(this + 0x680)) {
      Vector<int>::addElement(aVStack_24,iVar8);
    }
  }
  local_34 = 0;
  pbVar7 = *(byte **)(DAT_0024ffec + 0x24ff14);
  for (iVar8 = 0; iVar8 < (int)(uint)*pbVar7; iVar8 = iVar8 + 1) {
    iVar3 = isBossCafeTheme(this,(uint)*(byte *)(*(int *)(this + DAT_0024fff0) + iVar8));
    local_34 = local_34 + (uint)(iVar3 != 0);
  }
  if (local_34 < 2) {
    iVar8 = *(int *)(this + DAT_0024fff0);
    if (local_20 + 1 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = arc4random();
      __aeabi_idivmod(iVar3 + (iVar3 >> 0x1f) ^ iVar3 >> 0x1f,local_20 + 1);
      iVar3 = extraout_r1;
    }
    *(char *)(iVar8 + param_1) = (char)*(undefined4 *)(iVar3 * 4 + (int)local_1c);
  }
  else {
    iVar8 = *(int *)(this + DAT_0024fff0);
    uVar2 = arc4random();
    bVar1 = (byte)((int)uVar2 >> 0x1f);
    *(byte *)(iVar8 + param_1) = ((char)uVar2 + bVar1 ^ bVar1) & 7;
  }
  iVar8 = isBossCafeTheme(this,param_1);
  if (iVar8 == 0) {
    iVar8 = *(int *)(this + 0x6a0);
    CharacterData::getRandomName(aCStack_2c,false,0);
    String::operator=((String *)(iVar8 + param_1 * 8),aCStack_2c);
    String::~String((String *)aCStack_2c);
  }
  else {
    iVar8 = *(int *)(this + 0x6a0);
    pcVar4 = (char *)getBossName(this,(uint)*(byte *)(*(int *)(this + DAT_0024fff0) + param_1));
    String::operator=((String *)(iVar8 + param_1 * 8),pcVar4);
  }
  if (local_1c != (void *)0x0) {
    operator_delete__(local_1c);
  }
  return;
}


