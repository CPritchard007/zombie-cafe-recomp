/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001784b0 GameStatePowerup::calcGainXP */

/* GameStatePowerup::calcGainXP() */

void __thiscall GameStatePowerup::calcGainXP(GameStatePowerup *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  Character *pCVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  int *piVar14;
  GameStatePowerup *pGVar15;
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  int local_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int local_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = DAT_001787f4;
  local_38[0] = *(int *)(DAT_001787f0 + 0x1784c6);
  local_38[1] = *(undefined4 *)(DAT_001787f0 + 0x1784ca);
  local_38[2] = *(undefined4 *)(DAT_001787f0 + 0x1784ce);
  local_38[3] = *(undefined4 *)(DAT_001787f0 + 0x1784d2);
  uStack_28 = *(undefined4 *)(DAT_001787f0 + 0x1784d6);
  uStack_24 = *(undefined4 *)(DAT_001787f0 + 0x1784da);
  local_20 = *(undefined4 *)(DAT_001787f0 + 0x1784de);
  uStack_1c = *(undefined4 *)(DAT_001787f0 + 0x1784e2);
  local_70[0] = *(int *)(DAT_001787f0 + 0x1784e6);
  local_70[1] = *(undefined4 *)(DAT_001787f0 + 0x1784ea);
  local_70[2] = *(undefined4 *)(DAT_001787f0 + 0x1784ee);
  local_70[3] = *(undefined4 *)(DAT_001787f0 + 0x1784f2);
  uStack_60 = *(undefined4 *)(DAT_001787f0 + 0x1784f6);
  uStack_5c = *(undefined4 *)(DAT_001787f0 + 0x1784fa);
  local_58 = *(undefined4 *)(DAT_001787f0 + 0x1784fe);
  local_54[0] = *(undefined4 *)(DAT_001787f0 + 0x178502);
  local_54[1] = *(undefined4 *)(DAT_001787f0 + 0x178506);
  local_54[2] = *(undefined4 *)(DAT_001787f0 + 0x17850a);
  local_54[3] = *(undefined4 *)(DAT_001787f0 + 0x17850e);
  uStack_44 = *(undefined4 *)(DAT_001787f0 + 0x178512);
  uStack_40 = *(undefined4 *)(DAT_001787f0 + 0x178516);
  local_3c = *(undefined4 *)(DAT_001787f0 + 0x17851a);
  *(undefined4 *)(this + 0x4c8) = 0;
  *(undefined4 *)(this + iVar1) = 0;
  iVar3 = Character::getReminderSameZombiePowerupNum
                    (*(Character **)(*(int *)(this + 0xc) + DAT_001787f8));
  iVar2 = DAT_001787fc;
  pGVar15 = this + 0x4d0;
  do {
    if (*(int *)pGVar15 != 0) {
      pCVar7 = *(Character **)(*(int *)pGVar15 + 0x8c);
      if (*(short *)(*(int *)pCVar7 + DAT_00178800) ==
          *(short *)(*(int *)*(Character **)(*(int *)(this + 0xc) + DAT_001787f8) + DAT_00178800)) {
        iVar10 = *(int *)(this + iVar1);
        *(int *)(this + iVar1) = iVar10 + 1;
        if (iVar3 < iVar10 + 1) {
          *(int *)(this + DAT_001787f4) = iVar3;
        }
      }
      else {
        iVar10 = isSelectTomoguiZombie_LvUp
                           (this,*(Character **)(*(int *)(this + 0xc) + DAT_001787f8),pCVar7);
        if ((iVar10 != 0) &&
           (iVar10 = *(int *)(this + iVar1), *(int *)(this + iVar1) = iVar10 + 1, iVar3 < iVar10 + 1
           )) {
          *(int *)(this + DAT_001787f4) = iVar3;
        }
      }
      iVar10 = *(int *)pGVar15;
      piVar14 = *(int **)(iVar10 + 0x8c);
      iVar11 = *piVar14;
      uVar12 = (uint)*(ushort *)(iVar11 + DAT_00178800);
      if (uVar12 == DAT_00178804) {
        iVar11 = ZombieCafe::checkPowerUpBoost();
        iVar10 = *(int *)(this + 0x4c8);
        if (iVar11 != 0) {
          iVar5 = 2000;
          goto LAB_001785ee;
        }
        iVar8 = 1000;
LAB_00178642:
        iVar10 = iVar10 + iVar8;
      }
      else {
        if (uVar12 == DAT_00178808) {
          iVar8 = ZombieCafe::checkPowerUpBoost();
          iVar10 = *(int *)(this + 0x4c8);
          iVar11 = DAT_0017880c;
          iVar5 = DAT_00178810;
joined_r0x00178606:
          if (iVar8 != 0) {
LAB_0017860a:
            iVar10 = iVar10 + iVar11;
            goto LAB_00178644;
          }
        }
        else {
          if (uVar12 == 0x4a0) {
            iVar5 = ZombieCafe::checkPowerUpBoost();
            iVar10 = *(int *)(this + 0x4c8);
            iVar11 = DAT_00178814;
            iVar8 = DAT_0017881c;
joined_r0x00178622:
            if (iVar5 != 0) goto LAB_00178642;
            goto LAB_0017860a;
          }
          if (uVar12 == 0x2c0) {
            iVar11 = ZombieCafe::checkPowerUpBoost();
            iVar10 = *(int *)(this + 0x4c8);
            iVar5 = DAT_00178818;
            iVar8 = DAT_0017881c;
          }
          else {
            if (uVar12 == DAT_00178820) {
              iVar8 = ZombieCafe::checkPowerUpBoost();
              iVar10 = *(int *)(this + 0x4c8);
              iVar11 = DAT_00178824;
              iVar5 = DAT_00178828;
              goto joined_r0x00178606;
            }
            if (uVar12 == DAT_0017882c) {
              iVar5 = ZombieCafe::checkPowerUpBoost();
              iVar10 = *(int *)(this + 0x4c8);
              iVar11 = DAT_00178824;
              iVar8 = DAT_00178830;
              goto joined_r0x00178622;
            }
            if (uVar12 != 0x2e0) {
              if (2 < (uVar12 + DAT_0017883c & 0xffff)) {
                iVar8 = 0;
                piVar9 = (int *)(iVar2 + 0x17857e);
                for (iVar5 = 0; iVar5 < piVar14[10]; iVar5 = iVar5 + 1) {
                  iVar6 = *piVar9;
                  piVar9 = piVar9 + 1;
                  iVar8 = iVar8 + iVar6;
                }
                uVar4 = __floatsisf(iVar8);
                __mulsf3(uVar4,local_54[*(byte *)(iVar11 + 0xb40)]);
                iVar11 = __fixsfsi();
                *(int *)(this + 0x4c8) = *(int *)(this + 0x4c8) + iVar11;
                if (*(int *)(**(int **)(iVar10 + 0x8c) + 0xb20) != 0) {
                  iVar10 = ZombieCafe::checkPowerUpBoost();
                  if (iVar10 == 0) {
                    iVar10 = *(int *)(this + 0x4c8) +
                             local_38[*(byte *)(**(int **)(*(int *)pGVar15 + 0x8c) + 0xb40)];
                  }
                  else {
                    iVar10 = *(int *)(this + 0x4c8) +
                             local_70[*(byte *)(**(int **)(*(int *)pGVar15 + 0x8c) + 0xb40)];
                  }
                  *(int *)(this + 0x4c8) = iVar10;
                }
              }
              goto LAB_001786e0;
            }
            iVar11 = ZombieCafe::checkPowerUpBoost();
            iVar10 = *(int *)(this + 0x4c8);
            iVar5 = DAT_00178834;
            iVar8 = DAT_00178838;
          }
          if (iVar11 == 0) goto LAB_00178642;
        }
LAB_001785ee:
        iVar10 = iVar10 + iVar5;
      }
LAB_00178644:
      *(int *)(this + 0x4c8) = iVar10;
    }
LAB_001786e0:
    pGVar15 = pGVar15 + 4;
    if (pGVar15 == this + 0x4f8) {
      String::valueOf((int)aSStack_d0);
      String::String(aSStack_c8,(char *)(DAT_00178840 + 0x1786fe));
      String::operator+(aSStack_c0,aSStack_d0,aSStack_c8);
      String::valueOf((int)aSStack_b8);
      String::operator+(aSStack_b0,aSStack_c0,aSStack_b8);
      String::String(aSStack_a8,(char *)(DAT_00178844 + 0x178724));
      String::operator+(aSStack_d8,aSStack_b0,aSStack_a8);
      String::~String(aSStack_a8);
      String::~String(aSStack_b0);
      String::~String(aSStack_b8);
      String::~String(aSStack_c0);
      String::~String(aSStack_c8);
      String::~String(aSStack_d0);
      if (0 < *(int *)(this + iVar1)) {
        String::String(aSStack_a0,(char *)(DAT_00178848 + 0x178762));
        String::valueOf((int)aSStack_98);
        String::operator+(aSStack_90,aSStack_a0,aSStack_98);
        String::String(aSStack_88,(char *)(DAT_0017884c + 0x17877e));
        String::operator+(aSStack_80,aSStack_90,aSStack_88);
        String::operator+=(aSStack_d8,aSStack_80);
        String::~String(aSStack_80);
        String::~String(aSStack_88);
        String::~String(aSStack_90);
        String::~String(aSStack_98);
        String::~String(aSStack_a0);
      }
      piVar14 = *(int **)(this + 0x104);
      pcVar13 = *(code **)(*piVar14 + 0x44);
      String::String(aSStack_78,aSStack_d8);
      (*pcVar13)(piVar14,aSStack_78);
      String::~String(aSStack_78);
      String::~String(aSStack_d8);
      return;
    }
  } while( true );
}


