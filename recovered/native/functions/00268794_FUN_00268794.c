/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268794 FUN_00268794 */

char FUN_00268794(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  
  iVar12 = *param_1;
  if (param_2 == (int *)0x0) {
    local_3c = (int *)0x0;
    local_34 = 0;
  }
  else {
    local_34 = *param_2;
    local_3c = (int *)FUN_0025f04c(iVar12,local_34 * 0x18);
  }
  *param_3 = local_34;
  local_30 = local_3c;
  *param_4 = local_3c;
  local_40 = 0;
  iVar6 = DAT_002688f4 + 0x2687d2;
  do {
    if (local_34 <= local_40) {
LAB_002688b8:
      cVar1 = *(char *)(iVar12 + 0x36);
      if (cVar1 != '\0') {
        piVar11 = local_3c;
        for (iVar6 = 0; iVar6 < local_40; iVar6 = iVar6 + 1) {
          FUN_0025fbda(iVar12,*piVar11);
          piVar11 = piVar11 + 6;
        }
        FUN_0025fbda(iVar12,local_3c);
        cVar1 = '\a';
        *param_4 = 0;
        *param_3 = 0;
      }
      return cVar1;
    }
    puVar7 = (undefined4 *)(param_2[2] + local_40 * 0x14);
    pcVar8 = (char *)*puVar7;
    if (puVar7[1] == 0) {
      for (; cVar1 = *pcVar8, cVar1 == 'v'; pcVar8 = *(char **)(pcVar8 + 0xc)) {
      }
      if (cVar1 == -0x68) {
        iVar2 = *(int *)(pcVar8 + 0x28);
        if (iVar2 == 0) {
LAB_00268830:
          iVar10 = puVar7[2];
          iVar2 = iVar6;
        }
        else {
          iVar10 = (int)*(short *)(pcVar8 + 0x1c);
          if ((iVar10 < 0) && (iVar10 = *(int *)(iVar2 + 4), iVar10 < 0)) {
            iVar10 = DAT_002688f8 + 0x26881e;
          }
          else {
            iVar10 = *(int *)(iVar10 * 0x18 + *(int *)(iVar2 + 0xc));
          }
          iVar2 = DAT_002688fc + 0x268822;
        }
      }
      else {
        if (cVar1 != '\x1a') goto LAB_00268830;
        iVar10 = *(int *)(pcVar8 + 4);
        iVar2 = DAT_00268900 + 0x26882e;
      }
      iVar2 = FUN_0026877c(iVar12,iVar2,iVar10);
    }
    else {
      iVar2 = FUN_0025f25a(iVar12);
    }
    if (*(char *)(iVar12 + 0x36) != '\0') {
      FUN_0025fbda(iVar12,iVar2);
      goto LAB_002688b8;
    }
    iVar3 = FUN_0025b154();
    iVar9 = DAT_00268904 + 0x26885e;
    local_38 = 0;
    for (iVar10 = 0; iVar5 = iVar2, iVar10 < local_40; iVar10 = iVar10 + 1) {
      iVar4 = sqlite3_stricmp(local_3c[iVar10 * 6],iVar2);
      if (iVar4 == 0) {
        local_38 = local_38 + 1;
        *(undefined1 *)(iVar2 + iVar3) = 0;
        iVar5 = FUN_0026877c(iVar12,iVar9,iVar2,local_38);
        FUN_0025fbda(iVar12,iVar2);
        if (iVar5 == 0) break;
        iVar10 = -1;
      }
      iVar2 = iVar5;
    }
    *local_30 = iVar5;
    local_40 = local_40 + 1;
    local_30 = local_30 + 6;
  } while( true );
}


