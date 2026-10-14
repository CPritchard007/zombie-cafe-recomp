/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001788cc GameStatePowerup::paint */

/* GameStatePowerup::paint(CapcomGraphics*) */

void __thiscall GameStatePowerup::paint(GameStatePowerup *this,CapcomGraphics *param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  GameStatePowerup *pGVar10;
  uint uVar11;
  int local_34;
  GameStatePowerup *local_30;
  int local_24;
  
  FUN_00177ad2(*(undefined4 *)(this + 0x14),*(undefined4 *)(this + DAT_00178ba4));
  (**(code **)(**(int **)(this + 0x14) + 0xc))(*(int **)(this + 0x14),param_1);
  iVar9 = 0;
  local_30 = this;
  do {
    iVar8 = *(int *)(local_30 + 0x114);
    if ((iVar8 != 0) &&
       ((*(char *)(*(int *)(this + DAT_00178ba8) + 0x14) != '\0' ||
        (*(char *)(*(int *)(this + 0x508) + 0x14) != '\0')))) {
      if (*(short *)(*(int *)*(Character **)(*(int *)(this + 0xc) + DAT_00178bac) + DAT_00178bb0) ==
          *(short *)(*(int *)*(Character **)(iVar8 + 0x8c) + DAT_00178bb0)) {
        iVar7 = 0;
        do {
          iVar1 = iVar7 + 0x4d0;
          iVar7 = iVar7 + 4;
          iVar9 = iVar9 + (uint)(*(int *)(this + iVar1) == iVar8);
        } while (iVar7 != 0x28);
      }
      else {
        iVar8 = isSelectTomoguiZombie_LvUp
                          (this,*(Character **)(*(int *)(this + 0xc) + DAT_00178bac),
                           *(Character **)(iVar8 + 0x8c));
        if (iVar8 != 0) {
          iVar8 = 0;
          do {
            iVar7 = iVar8 + 0x4d0;
            iVar8 = iVar8 + 4;
            iVar9 = iVar9 + (uint)(*(int *)(this + iVar7) == *(int *)(local_30 + 0x114));
          } while (iVar8 != 0x28);
        }
      }
    }
    iVar8 = DAT_00178bac;
    local_30 = local_30 + 4;
  } while (local_30 != this + 0x378);
  iVar7 = Character::getSameZombiePowerupNum(*(Character **)(*(int *)(this + 0xc) + DAT_00178bac));
  iVar9 = Character::getReminderSameZombiePowerupNum_Static(iVar7 + iVar9);
  local_30 = (GameStatePowerup *)
             Character::getReminderSameZombiePowerupNum
                       (*(Character **)(*(int *)(this + 0xc) + iVar8));
  pGVar10 = this + 0x114;
  local_24 = 0;
  do {
    if (*(int *)pGVar10 != 0) {
      uVar3 = __mulsf3(*(undefined4 *)(this + 0x4a8),*(undefined4 *)(this + 0x530));
      iVar8 = SmDev();
      iVar7 = DAT_00178bb4 + 0x1789d4;
      uVar4 = __mulsf3(*(undefined4 *)(iVar7 + iVar8 * 4 + 0x10),*(undefined4 *)(this + 0x530));
      uVar5 = __floatsisf(local_24);
      uVar4 = __mulsf3(uVar4,uVar5);
      uVar3 = __addsf3(uVar3,uVar4);
      iVar8 = SmDev();
      uVar4 = __mulsf3(*(undefined4 *)(iVar7 + iVar8 * 4 + 0x28),*(undefined4 *)(this + 0x530));
      __addsf3(uVar3,uVar4);
      local_34 = __fixsfsi();
      iVar8 = SmDev();
      __mulsf3(*(undefined4 *)(iVar7 + iVar8 * 4 + 0x40),*(undefined4 *)(this + DAT_00178bb8));
      uVar2 = __fixsfsi();
      if (DAT_00178bbc < local_34 + 1000U) {
        local_34 = DAT_00178bc0;
      }
      uVar11 = (uint)uVar2 | local_34 << 0x10;
      (**(code **)(**(int **)pGVar10 + 0xc))(*(int **)pGVar10,uVar11);
      (**(code **)(**(int **)pGVar10 + 8))(*(int **)pGVar10,param_1);
      iVar8 = (int)uVar11 >> 0x10;
      if (*(char *)(*(int *)(this + 0x500) + 0x14) != '\0') {
        iVar7 = 0;
        do {
          if (*(int *)(this + iVar7 + 0x4d0) == *(int *)pGVar10) {
            FUN_00177ad2(*(int *)(this + 0x500),uVar11);
            (**(code **)(**(int **)(this + 0x500) + 0xc))(*(int **)(this + 0x500),param_1);
            if (*(char *)(*(int *)(this + 0x508) + 0x14) == '\0') {
              iVar7 = 0;
            }
            else {
              iVar7 = 0;
              if ((0 < (int)local_30) &&
                 (iVar7 = isSelectTomoguiZombie_LvUp
                                    (this,*(Character **)(*(int *)(this + 0xc) + DAT_00178bac),
                                     *(Character **)(*(int *)pGVar10 + 0x8c)), iVar7 != 0)) {
                piVar6 = *(int **)(this + 0x508);
                iVar7 = *piVar6;
                uVar3 = __floatsisf((int)(short)uVar2);
                uVar4 = __mulsf3(*(undefined4 *)(this + DAT_00178bb8),DAT_00178bc4);
                __subsf3(uVar3,uVar4);
                uVar3 = __fixsfsi();
                (**(code **)(iVar7 + 0x14))(piVar6,iVar8,uVar3);
                (**(code **)(**(int **)(this + 0x508) + 0xc))(*(int **)(this + 0x508),param_1);
                iVar7 = 1;
                local_30 = (GameStatePowerup *)((int)local_30 + -1);
              }
            }
            piVar6 = *(int **)(this + DAT_00178ba8);
            if (((((char)piVar6[5] != '\0') && (iVar7 == 0)) && (0 < (int)local_30)) &&
               (*(short *)(**(int **)(*(int *)(this + 0xc) + DAT_00178bac) + DAT_00178bb0) ==
                *(short *)(**(int **)(*(int *)pGVar10 + 0x8c) + DAT_00178bb0))) {
              iVar7 = *piVar6;
              uVar3 = __floatsisf((int)(short)uVar2);
              uVar4 = __mulsf3(*(undefined4 *)(this + DAT_00178bb8),DAT_00178bc4);
              __subsf3(uVar3,uVar4);
              uVar3 = __fixsfsi();
              (**(code **)(iVar7 + 0x14))(piVar6,iVar8,uVar3);
              (**(code **)(**(int **)(this + DAT_00178ba8) + 0xc))
                        (*(int **)(this + DAT_00178ba8),param_1);
              local_30 = (GameStatePowerup *)((int)local_30 + -1);
            }
            goto LAB_00178c9a;
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 != 0x28);
      }
      if (0 < iVar9) {
        piVar6 = *(int **)(this + DAT_00178d38);
        if (((char)piVar6[5] != '\0') &&
           (*(short *)(**(int **)(*(int *)(this + 0xc) + DAT_00178d3c) + DAT_00178d40) ==
            *(short *)(**(int **)(*(int *)pGVar10 + 0x8c) + DAT_00178d40))) {
          iVar7 = *piVar6;
          uVar3 = __floatsisf((int)(short)uVar2);
          uVar4 = __mulsf3(*(undefined4 *)(this + DAT_00178d44),DAT_00178d48);
          __subsf3(uVar3,uVar4);
          uVar3 = __fixsfsi();
          (**(code **)(iVar7 + 0x14))(piVar6,iVar8,uVar3);
          (**(code **)(**(int **)(this + DAT_00178d38) + 0xc))
                    (*(int **)(this + DAT_00178d38),param_1);
        }
        if ((*(char *)(*(int *)(this + 0x508) + 0x14) != '\0') &&
           (iVar7 = isSelectTomoguiZombie_LvUp
                              (this,*(Character **)(*(int *)(this + 0xc) + DAT_00178d3c),
                               *(Character **)(*(int *)pGVar10 + 0x8c)), iVar7 != 0)) {
          piVar6 = *(int **)(this + 0x508);
          iVar7 = *piVar6;
          uVar3 = __floatsisf((int)(short)uVar2);
          uVar4 = __mulsf3(*(undefined4 *)(this + DAT_00178d44),DAT_00178d48);
          __subsf3(uVar3,uVar4);
          uVar3 = __fixsfsi();
          (**(code **)(iVar7 + 0x14))(piVar6,iVar8,uVar3);
          (**(code **)(**(int **)(this + 0x508) + 0xc))(*(int **)(this + 0x508),param_1);
        }
      }
    }
LAB_00178c9a:
    pGVar10 = pGVar10 + 4;
    local_24 = local_24 + 1;
    if (local_24 == 0xde) {
      piVar6 = *(int **)(this + 0x490);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6,param_1);
      }
      piVar6 = *(int **)(this + DAT_00178d4c);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6,param_1);
      }
      piVar6 = *(int **)(this + 0xe4);
      if ((char)piVar6[5] != '\0') {
        (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
      }
      (**(code **)(**(int **)(this + 0xa8) + 0xc))(*(int **)(this + 0xa8),param_1);
      (**(code **)(**(int **)(this + 0xac) + 0xc))(*(int **)(this + 0xac),param_1);
      piVar6 = *(int **)(this + DAT_00178d50);
      if ((char)piVar6[5] != '\0') {
        (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
      }
      piVar6 = *(int **)(this + DAT_00178d54);
      if ((char)piVar6[5] != '\0') {
        (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
      }
      piVar6 = *(int **)(this + 0x528);
      if ((char)piVar6[5] != '\0') {
        (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
      }
      return;
    }
  } while( true );
}


