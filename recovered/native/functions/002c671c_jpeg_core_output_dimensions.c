/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c671c jpeg_core_output_dimensions */

undefined8 jpeg_core_output_dimensions(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_1c;
  
  uVar4 = *(uint *)(param_1 + 0x34);
  uVar3 = *(int *)(param_1 + 0x1ac) * *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x1c);
  local_1c = param_2;
  if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
    uVar2 = jdiv_round_up(iVar1);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    uVar2 = jdiv_round_up(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = 1;
  }
  else if (uVar3 < uVar4 * 2 || uVar3 + uVar4 * -2 == 0) {
    uVar2 = jdiv_round_up(iVar1 << 1);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) << 1,*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = 2;
  }
  else if (uVar3 < uVar4 * 3 || uVar3 + uVar4 * -3 == 0) {
    uVar2 = jdiv_round_up(iVar1 * 3);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) * 3,*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = 3;
  }
  else if (uVar3 < uVar4 * 4 || uVar3 + uVar4 * -4 == 0) {
    uVar2 = jdiv_round_up(iVar1 << 2);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) << 2,*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = 4;
  }
  else if (uVar3 < uVar4 * 5 || uVar3 + uVar4 * -5 == 0) {
    uVar2 = jdiv_round_up(iVar1 * 5);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) * 5,*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = 5;
  }
  else {
    if (uVar3 < uVar4 * 6 || uVar3 + uVar4 * -6 == 0) {
      uVar2 = jdiv_round_up(iVar1 * 6);
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) * 6,*(undefined4 *)(param_1 + 0x1ac));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      *(undefined4 *)(param_1 + 0x144) = 6;
      *(undefined4 *)(param_1 + 0x148) = 6;
      goto LAB_002c6954;
    }
    local_1c = uVar4 * 8;
    if (uVar3 < uVar4 * 7 || uVar3 + uVar4 * -7 == 0) {
      uVar2 = jdiv_round_up(iVar1 * 7);
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) * 7,*(undefined4 *)(param_1 + 0x1ac));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = 7;
    }
    else if (uVar3 < local_1c || uVar3 + uVar4 * -8 == 0) {
      uVar2 = jdiv_round_up(iVar1 << 3);
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) << 3,*(undefined4 *)(param_1 + 0x1ac));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = 8;
    }
    else {
      if (uVar4 * 9 <= uVar3 && uVar3 + uVar4 * -9 != 0) {
        iVar5 = 10;
        if (uVar3 < uVar4 * 10 || uVar3 + uVar4 * -10 == 0) {
LAB_002c68e4:
          uVar2 = jdiv_round_up(iVar5 * iVar1);
          *(undefined4 *)(param_1 + 0x70) = uVar2;
          iVar1 = iVar5 * *(int *)(param_1 + 0x20);
          uVar2 = *(undefined4 *)(param_1 + 0x1ac);
        }
        else {
          iVar5 = 0xb;
          if (uVar3 < uVar4 * 0xb || uVar3 + uVar4 * -0xb == 0) {
            uVar2 = jdiv_round_up(iVar1 * 0xb);
            *(undefined4 *)(param_1 + 0x70) = uVar2;
            iVar1 = *(int *)(param_1 + 0x20) * 0xb;
            uVar2 = *(undefined4 *)(param_1 + 0x1ac);
          }
          else {
            iVar5 = 0xc;
            if (uVar3 < uVar4 * 0xc || uVar3 + uVar4 * -0xc == 0) {
              uVar2 = jdiv_round_up(iVar1 * 0xc);
              *(undefined4 *)(param_1 + 0x70) = uVar2;
              iVar1 = *(int *)(param_1 + 0x20) * 0xc;
              uVar2 = *(undefined4 *)(param_1 + 0x1ac);
            }
            else {
              iVar5 = 0xd;
              if (uVar4 * 0xd <= uVar3 && uVar3 + uVar4 * -0xd != 0) {
                iVar5 = 0xe;
                if (uVar4 * 0xe <= uVar3 && uVar3 + uVar4 * -0xe != 0) {
                  if (uVar3 < uVar4 * 0xf || uVar3 + uVar4 * -0xf == 0) {
                    uVar2 = jdiv_round_up(iVar1 * 0xf);
                    *(undefined4 *)(param_1 + 0x70) = uVar2;
                    uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) * 0xf,
                                          *(undefined4 *)(param_1 + 0x1ac));
                    *(undefined4 *)(param_1 + 0x74) = uVar2;
                    uVar2 = 0xf;
                  }
                  else {
                    uVar2 = jdiv_round_up(iVar1 << 4);
                    *(undefined4 *)(param_1 + 0x70) = uVar2;
                    uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) << 4,
                                          *(undefined4 *)(param_1 + 0x1ac));
                    *(undefined4 *)(param_1 + 0x74) = uVar2;
                    uVar2 = 0x10;
                  }
                  goto LAB_002c6950;
                }
                goto LAB_002c68e4;
              }
              uVar2 = jdiv_round_up(iVar1 * 0xd);
              *(undefined4 *)(param_1 + 0x70) = uVar2;
              iVar1 = *(int *)(param_1 + 0x20) * 0xd;
              uVar2 = *(undefined4 *)(param_1 + 0x1ac);
            }
          }
        }
        uVar2 = jdiv_round_up(iVar1,uVar2);
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        *(int *)(param_1 + 0x144) = iVar5;
        *(int *)(param_1 + 0x148) = iVar5;
        goto LAB_002c6954;
      }
      uVar2 = jdiv_round_up(iVar1 * 9);
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      uVar2 = jdiv_round_up(*(int *)(param_1 + 0x20) * 9,*(undefined4 *)(param_1 + 0x1ac));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = 9;
    }
  }
LAB_002c6950:
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  *(undefined4 *)(param_1 + 0x148) = uVar2;
LAB_002c6954:
  iVar5 = *(int *)(param_1 + 0xd8);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x24); iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(param_1 + 0x148);
    iVar5 = iVar5 + 0x58;
  }
  return CONCAT44(local_1c,param_1);
}


