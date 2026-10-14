/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019fcbc GameStateEventRaid::EvolutionZombie */

/* GameStateEventRaid::EvolutionZombie(int) */

undefined4 __thiscall GameStateEventRaid::EvolutionZombie(GameStateEventRaid *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int *piVar10;
  Character *this_00;
  int *piVar11;
  int iVar12;
  int local_40;
  int local_3c;
  int local_38;
  
  iVar2 = DAT_0019ff00;
  iVar9 = *(int *)(*(int *)(this + 0xc) + 0x5a4);
  iVar7 = *(int *)(*(int *)(this + 0xc) + DAT_0019fefc + 4);
  for (local_3c = 0; iVar12 = DAT_0019ff14, iVar3 = DAT_0019ff08, local_3c < iVar7 + 1;
      local_3c = local_3c + 1) {
    piVar11 = (int *)(iVar2 + 0x19fd0a);
    this_00 = *(Character **)(local_3c * 4 + *(int *)(*(int *)(this + 0xc) + DAT_0019fefc + 8));
    uVar1 = *(ushort *)(*(int *)this_00 + DAT_0019ff04);
    local_40 = 0;
    do {
      if (*piVar11 == param_1) {
        iVar12 = 0;
        do {
          if (piVar11[iVar12] == (uint)uVar1) {
            sVar8 = *(short *)(*(int *)this_00 + DAT_0019ff0c);
            if (100 < sVar8) {
              sVar8 = 100;
            }
            *(short *)(this + 0x15e) = sVar8;
            *(undefined2 *)(this + 0x160) = 0;
            *(undefined2 *)(this + 0x162) = *(undefined2 *)(*(int *)this_00 + DAT_0019ff10);
            Character::getMaxEnergyBase();
            uVar5 = __floatsisf();
            *(undefined4 *)(this + 0x154) = 0;
            *(undefined4 *)(this + 0x168) = uVar5;
            *(undefined2 *)(this + 0x158) = 0;
            *(undefined2 *)(this + 0x166) = 0;
            *(undefined2 *)(this + 0x164) = 0;
            uVar4 = Character::getSpeedBaseParam(this_00);
            *(undefined2 *)(this + 0x15a) = uVar4;
            uVar4 = Character::getAttackBasePower();
            *(undefined2 *)(this + 0x15c) = uVar4;
            piVar10 = (int *)(iVar3 + 0x19fd34 + (iVar12 + 1 + local_40 * 5) * 4);
            local_38 = iVar12;
            while (local_38 != 4) {
              iVar6 = *piVar10;
              piVar10 = piVar10 + 1;
              local_38 = local_38 + 1;
              if (iVar6 != -1) goto LAB_0019feae;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 5);
      }
      piVar11 = piVar11 + 5;
      local_40 = local_40 + 1;
    } while (local_40 != 3);
  }
  local_3c = 0;
  do {
    iVar2 = DAT_0019ff18;
    if (iVar9 + 1 <= local_3c) {
      return 0;
    }
    this_00 = *(Character **)(local_3c * 4 + *(int *)(*(int *)(this + 0xc) + 0x5a8));
    piVar11 = (int *)(iVar12 + 0x19fe0a);
    uVar1 = *(ushort *)(*(int *)this_00 + DAT_0019ff04);
    local_40 = 0;
    do {
      if (*piVar11 == param_1) {
        iVar7 = 0;
        do {
          if (piVar11[iVar7] == (uint)uVar1) {
            sVar8 = *(short *)(*(int *)this_00 + DAT_0019ff0c);
            if (100 < sVar8) {
              sVar8 = 100;
            }
            *(short *)(this + 0x15e) = sVar8;
            *(undefined2 *)(this + 0x160) = 0;
            *(undefined2 *)(this + 0x162) = *(undefined2 *)(*(int *)this_00 + DAT_0019ff10);
            Character::getMaxEnergyBase();
            uVar5 = __floatsisf();
            *(undefined4 *)(this + 0x154) = 0;
            *(undefined4 *)(this + 0x168) = uVar5;
            *(undefined2 *)(this + 0x158) = 0;
            *(undefined2 *)(this + 0x166) = 0;
            *(undefined2 *)(this + 0x164) = 0;
            uVar4 = Character::getSpeedBaseParam(this_00);
            *(undefined2 *)(this + 0x15a) = uVar4;
            uVar4 = Character::getAttackBasePower();
            *(undefined2 *)(this + 0x15c) = uVar4;
            piVar10 = (int *)(iVar2 + 0x19fe32 + (iVar7 + 1 + local_40 * 5) * 4);
            local_38 = iVar7;
            while (local_38 != 4) {
              iVar6 = *piVar10;
              piVar10 = piVar10 + 1;
              local_38 = local_38 + 1;
              if (iVar6 != -1) {
LAB_0019feae:
                *(undefined4 *)this_00 =
                     *(undefined4 *)(iVar6 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_0019ff1c));
                *(Character **)(this + 0x16c) = this_00;
                ZombieCafe::updateZukanUnlock(*(ZombieCafe **)(this + 0xc),iVar6,'\x03');
                return 1;
              }
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 5);
      }
      piVar11 = piVar11 + 5;
      local_40 = local_40 + 1;
    } while (local_40 != 3);
    local_3c = local_3c + 1;
  } while( true );
}


