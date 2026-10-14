/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016156c GameStateMainMenu::L_GetGameStateSuccess */

/* GameStateMainMenu::L_GetGameStateSuccess(void*, char const*, unsigned char const*, unsigned int)
    */

void GameStateMainMenu::L_GetGameStateSuccess
               (void *param_1,char *param_2,uchar *param_3,uint param_4)

{
  int iVar1;
  uchar *__dest;
  ByteArrayInputStream *this;
  int *piVar2;
  CEvent *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  ZombieCafe *this_01;
  char acStack_19c [128];
  undefined1 local_11c [128];
  undefined1 local_9c [128];
  int local_1c;
  
  iVar13 = DAT_00161780 + 0x16157a;
  piVar12 = *(int **)(iVar13 + DAT_00161784);
  local_1c = *piVar12;
  pcVar9 = (char *)(DAT_00161788 + 0x161586);
  L_PrintLog(pcVar9,(char *)(DAT_0016178c + 0x16158a));
  pcVar7 = *(char **)(iVar13 + DAT_00161790);
  if (*pcVar7 == '\0') {
    iVar13 = DAT_00161794 + 0x1615a6;
LAB_00161680:
    this_00 = (CEvent *)(iVar13 + 0x74);
  }
  else {
    iVar1 = CapcomApp::getInstance();
    this_01 = *(ZombieCafe **)(iVar1 + 4);
    if (this_01 == (ZombieCafe *)0x0) {
      L_PrintLog(pcVar9,(char *)(DAT_00161798 + 0x1615b8));
      iVar13 = DAT_0016179c;
      *pcVar7 = '\0';
      iVar13 = iVar13 + 0x1615c4;
      goto LAB_00161680;
    }
    L_PrintLog(pcVar9,(char *)(DAT_001617a0 + 0x1615cc));
    __dest = (uchar *)operator_new__(param_4);
    memcpy(__dest,param_3,param_4);
    this = (ByteArrayInputStream *)operator_new(0x18);
    ByteArrayInputStream::ByteArrayInputStream(this,__dest,param_4,false);
    iVar8 = 0;
    iVar1 = *(int *)(iVar13 + DAT_001617a4);
    iVar6 = *(int *)(iVar13 + DAT_001617a8);
    do {
      local_11c[iVar8] = *(undefined1 *)(iVar1 + iVar8);
      local_9c[iVar8] = *(undefined1 *)(iVar6 + iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x80);
    piVar2 = (int *)ZombieCafe::makeForUserData(this_01,(InputStream *)this,true,0x38,-1);
    if (piVar2 == (int *)0x0) {
      iVar8 = DAT_001617b0 + 0x161632;
    }
    else {
      iVar8 = DAT_001617ac + 0x16162c;
    }
    snprintf(acStack_19c,0x80,(char *)(DAT_001617b4 + 0x16163a),iVar8);
    L_PrintLog((char *)(DAT_001617b8 + 0x161644),acStack_19c);
    iVar8 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar8) = local_11c[iVar8];
      *(undefined1 *)(iVar6 + iVar8) = local_9c[iVar8];
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x80);
    if (piVar2 == (int *)0x0) {
      if (this != (ByteArrayInputStream *)0x0) {
        (**(code **)(*(int *)this + 0xc))(this);
        (**(code **)(*(int *)this + 4))(this);
      }
      iVar13 = DAT_001617bc;
      *pcVar7 = '\0';
      iVar13 = iVar13 + 0x161682;
      goto LAB_00161680;
    }
    if (this != (ByteArrayInputStream *)0x0) {
      (**(code **)(*(int *)this + 0xc))(this);
      (**(code **)(*(int *)this + 4))(this);
    }
    if (__dest != (uchar *)0x0) {
      operator_delete__(__dest);
    }
    piVar10 = *(int **)(iVar13 + DAT_001617c0);
    uVar3 = *(undefined4 *)(this_01 + 0x680);
    iVar6 = *piVar10;
    uVar4 = *(undefined4 *)(this_01 + DAT_001617c4);
    iVar1 = piVar2[0x1a0];
    uVar5 = *(undefined4 *)((int)piVar2 + DAT_001617c4);
    snprintf(acStack_19c,0x80,(char *)(DAT_001617c8 + 0x1616ce),iVar6,uVar3,uVar4,iVar6,iVar1,uVar5)
    ;
    L_PrintLog((char *)(DAT_001617cc + 0x1616de),acStack_19c);
    uVar11 = 0;
    if (0x37 < *piVar10) {
      uVar11 = 1;
      if ((piVar2[0x1a0] <= *(int *)(this_01 + 0x680)) &&
         (uVar11 = 0, piVar2[0x1a0] == *(int *)(this_01 + 0x680))) {
        uVar11 = (uint)(*(int *)(this_01 + DAT_001617c4) < *(int *)((int)piVar2 + DAT_001617c4));
      }
    }
    snprintf(acStack_19c,0x80,(char *)(DAT_001617d0 + 0x161718),uVar11,uVar3,uVar4,iVar6,iVar1,uVar5
            );
    L_PrintLog((char *)(DAT_001617d4 + 0x161724),acStack_19c);
    iVar8 = DAT_001617e0;
    iVar6 = DAT_001617dc;
    iVar1 = DAT_001617d8;
    if (uVar11 == 0) {
      *pcVar7 = '\0';
      **(undefined4 **)(iVar13 + iVar1) = 3;
      CEvent::set((CEvent *)((int)&DAT_001617ac + iVar6 + 2),1);
      (**(code **)(*piVar2 + 4))(piVar2);
      goto LAB_0016176e;
    }
    *pcVar7 = '\x01';
    iVar1 = DAT_001617e4;
    **(int **)(iVar13 + iVar8) = (int)piVar2;
    this_00 = (CEvent *)((int)&DAT_001617d0 + iVar1);
  }
  CEvent::set(this_00,1);
LAB_0016176e:
  if (local_1c != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


