/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018ec10 GameStateSurvivalMenu::SurvivalInfoSuccess */

/* GameStateSurvivalMenu::SurvivalInfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateSurvivalMenu::SurvivalInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  printf((char *)(DAT_0018ecdc + 0x18ec1c));
  iVar2 = CapcomApp::getInstance();
  iVar2 = *(int *)(iVar2 + 4);
  if (*(void **)(iVar2 + 8) != param_1) {
    return;
  }
  javaSurvivalParse(param_2);
  iVar4 = *(int *)(DAT_0018ece0 + 0x18ec3a);
  iVar3 = *(int *)(iVar4 + 0x80);
  if (*(int *)(iVar2 + 0xa40) != iVar3) {
    *(undefined4 *)(iVar2 + DAT_0018ece4) = 0;
    *(undefined4 *)(iVar2 + DAT_0018ece8) = 0;
  }
  iVar1 = DAT_0018ecec;
  *(int *)(iVar2 + 0xa40) = iVar3;
  if (iVar3 == iVar1) {
    iVar2 = *(int *)(iVar4 + 0x84);
    if ((iVar2 == 0) || (iVar2 == 100)) {
      iVar2 = 0;
      goto LAB_0018ecb4;
    }
    if ((iVar2 == 1) || (iVar2 == 0x65)) {
      iVar2 = 1;
      goto LAB_0018ecb4;
    }
    if ((iVar2 == 10) || (iVar2 == 0x6e)) goto LAB_0018eca2;
    if ((((iVar2 != 0x14) && (iVar2 != 0x78)) && (iVar2 != 99)) && (iVar2 != 199))
    goto LAB_0018ecb2;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x84);
    if ((iVar2 == 0) || (iVar2 == 1)) goto LAB_0018ecb4;
    if (iVar2 == 10) {
LAB_0018eca2:
      iVar2 = 2;
      goto LAB_0018ecb4;
    }
    if ((iVar2 != 0x14) && (iVar2 != 99)) {
LAB_0018ecb2:
      iVar2 = 4;
      goto LAB_0018ecb4;
    }
  }
  iVar2 = 3;
LAB_0018ecb4:
  *(int *)((int)param_1 + 0x54) = iVar2;
  *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)(iVar4 + 0x98);
  *(undefined4 *)((int)param_1 + 0xac) = *(undefined4 *)(iVar4 + 0x9c);
  *(undefined4 *)((int)param_1 + 0xb0) = *(undefined4 *)(iVar4 + 0x94);
  *(undefined4 *)((int)param_1 + 0x70) = 2;
  return;
}


