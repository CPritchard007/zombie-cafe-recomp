/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d11e0 Quest::checkQuestClear */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001d1206) */
/* WARNING: Removing unreachable block (ram,0x001d1206) */
/* Quest::checkQuestClear(int, ActiveQuest*, int, int*) */

undefined8 Quest::checkQuestClear(int param_1,ActiveQuest *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  iVar2 = QuestData::getData((int)param_2);
  iVar5 = *(int *)((int)param_2 * 4 + *(int *)(param_1 + 0xc));
  switch(*(undefined1 *)(iVar2 + 5)) {
  case 0:
    printf((char *)(DAT_001d1308 + 0x1d126a),param_2);
    iVar4 = DAT_001d130c;
    break;
  case 1:
  case 2:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x18:
    if (((param_4 != (int *)0xffffffff) && ((int *)**(undefined4 **)(iVar2 + 0x38) == param_4)) &&
       (iVar4 = *(int *)(iVar5 + 0x14) + 1, *(int *)(iVar5 + 0x14) = iVar4,
       *(int *)(iVar2 + 0x3c) <= iVar4)) {
      changedQuestState((Quest *)param_1,(int)param_2,2,3);
    }
    goto switchD_001d1206_caseD_15;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
    printf((char *)(DAT_001d1300 + 0x1d1242),param_2);
    iVar4 = *(int *)(iVar5 + 0x14) + 1;
    *(int *)(iVar5 + 0x14) = iVar4;
    if (iVar4 < *(int *)(iVar2 + 0x3c)) goto switchD_001d1206_caseD_15;
    goto LAB_001d12ee;
  default:
    goto switchD_001d1206_caseD_15;
  case 0x17:
    printf((char *)(DAT_001d1314 + 0x1d1292),param_2);
    iVar3 = (int)param_4 + *(int *)(iVar5 + 0x14);
    goto LAB_001d129a;
  case 0x1b:
    printf((char *)(DAT_001d1318 + 0x1d12d6),param_2);
    *(int **)(iVar5 + 0x14) = param_4;
    iVar4 = *(int *)(iVar2 + 0x3c);
    if (iVar4 <= (int)param_4) goto LAB_001d12e4;
    goto LAB_001d12e6;
  case 0x21:
    printf((char *)(DAT_001d1310 + 0x1d127c),param_2);
    iVar4 = *(int *)(iVar1 + DAT_001d130c);
    *(int *)(iVar5 + 0x14) = iVar4;
    iVar5 = *(int *)(iVar2 + 0x3c);
    goto LAB_001d12ea;
  case 0x27:
    printf((char *)(DAT_001d1304 + 0x1d125a),param_2);
    iVar4 = 0x5b8;
  }
  iVar3 = *(int *)(iVar1 + iVar4);
LAB_001d129a:
  *(int *)(iVar5 + 0x14) = iVar3;
  iVar4 = *(int *)(iVar2 + 0x3c);
  if (iVar4 < iVar3) {
LAB_001d12e4:
    *(int *)(iVar5 + 0x14) = iVar4;
  }
LAB_001d12e6:
  iVar5 = *(int *)(iVar5 + 0x14);
  iVar4 = *(int *)(iVar2 + 0x3c);
LAB_001d12ea:
  if (iVar4 <= iVar5) {
LAB_001d12ee:
    changedQuestState((Quest *)param_1,(int)param_2,2,3);
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
switchD_001d1206_caseD_15:
  return CONCAT44(iVar1,param_4);
}


