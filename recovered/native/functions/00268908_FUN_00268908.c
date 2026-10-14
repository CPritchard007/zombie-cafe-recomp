/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268908 FUN_00268908 */

int FUN_00268908(int param_1,undefined4 *param_2,undefined4 *param_3,code *param_4,
                undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_24;
  int *local_20;
  undefined4 *local_1c;
  
  uVar10 = param_2[0xf];
  uVar7 = param_2[0xe];
  local_24 = 0;
  iVar2 = FUN_0026877c(param_1,DAT_00268adc + 0x268922,*param_2);
  local_40 = 7;
  if (iVar2 == 0) {
    return 7;
  }
  piVar3 = (int *)FUN_0025f04c(param_1,0x1c);
  if (piVar3 != (int *)0x0) {
    *piVar3 = param_1;
    piVar3[1] = (int)param_3;
    uVar8 = *(undefined4 *)(param_1 + 0x134);
    *(int ***)(param_1 + 0x134) = &local_20;
    local_20 = piVar3;
    local_1c = param_2;
    local_40 = (*param_4)(param_1,param_3[2],uVar7,uVar10,piVar3 + 2,&local_24);
    *(undefined4 *)(param_1 + 0x134) = uVar8;
    if (local_40 == 7) {
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
    else if (local_40 == 0) {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        *(undefined4 *)piVar3[2] = *param_3;
        piVar3[3] = 1;
        iVar1 = DAT_00268aec;
        if (local_1c == (undefined4 *)0x0) {
          piVar3[6] = param_2[0xd];
          param_2[0xd] = piVar3;
          for (local_48 = 0; local_48 < (int)param_2[2]; local_48 = local_48 + 1) {
            iVar9 = *(int *)(param_2[3] + local_48 * 0x18 + 0xc);
            if (iVar9 != 0) {
              iVar4 = FUN_0025b154(iVar9);
              iVar5 = sqlite3_strnicmp(iVar1 + 0x268a06,iVar9,6);
              if ((iVar5 == 0) && ((*(char *)(iVar9 + 6) == ' ' || (*(char *)(iVar9 + 6) == '\0'))))
              {
                local_44 = 0;
LAB_00268a80:
                if (local_44 < iVar4) {
                  iVar6 = 7 - (uint)(*(char *)(iVar9 + local_44 + 6) == '\0');
                  for (iVar5 = local_44; iVar5 + iVar6 <= iVar4; iVar5 = iVar5 + 1) {
                    *(undefined1 *)(iVar9 + iVar5) = *(undefined1 *)(iVar9 + iVar6 + iVar5);
                  }
                  if ((*(char *)(iVar9 + local_44) == '\0') && (0 < local_44)) {
                    *(undefined1 *)(iVar9 + local_44 + -1) = 0;
                  }
                  *(undefined1 *)(param_2[3] + local_48 * 0x18 + 0x17) = 1;
                }
              }
              else {
                iVar5 = DAT_00268af0 + 0x268a48;
                local_3c = iVar9;
                for (local_44 = 0; local_44 < iVar4; local_44 = local_44 + 1) {
                  iVar6 = sqlite3_strnicmp(iVar5,local_3c,7);
                  if ((iVar6 == 0) &&
                     ((*(char *)(local_3c + 7) == ' ' || (*(char *)(local_3c + 7) == '\0')))) {
                    local_44 = local_44 + 1;
                    goto LAB_00268a80;
                  }
                  local_3c = local_3c + 1;
                }
              }
            }
          }
        }
        else {
          uVar7 = FUN_0026877c(param_1,DAT_00268ae8 + 0x2689e6,*param_2);
          *param_5 = uVar7;
          FUN_00260036(piVar3);
          local_40 = 1;
        }
      }
      goto LAB_00268ace;
    }
    if (local_24 == 0) {
      uVar7 = FUN_0026877c(param_1,DAT_00268ae0 + 0x26899e,iVar2);
      *param_5 = uVar7;
    }
    else {
      uVar7 = FUN_0026877c(param_1,DAT_00268ae4 + 0x2689ae);
      *param_5 = uVar7;
      sqlite3_free(local_24);
    }
    FUN_0025fbda(param_1,piVar3);
  }
LAB_00268ace:
  FUN_0025fbda(param_1,iVar2);
  return local_40;
}


