/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e5ea8 LotteryDialog::resetDisplayLottery */

/* LotteryDialog::resetDisplayLottery() */

undefined8 LotteryDialog::resetDisplayLottery(void)

{
  LotteryDialog *in_r0;
  char *pcVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  char *pcVar3;
  LotteryDialog LVar4;
  code *pcVar5;
  int *piVar6;
  LotteryDialog *pLStack_20;
  undefined4 uStack_1c;
  
  pLStack_20 = in_r0;
  uStack_1c = in_r1;
  L_PrintLog((char *)(DAT_001e6024 + 0x1e5eb8),(char *)(DAT_001e6020 + 0x1e5eb6));
  if (*(char *)(*(int *)(in_r0 + 0x60) + DAT_001e6028) == '\0') {
    resetKujiCostDisplay(in_r0);
    (**(code **)(**(int **)(in_r0 + 0x80) + 0x20))(*(int **)(in_r0 + 0x80),1);
    (**(code **)(**(int **)(in_r0 + 0x88) + 0x20))(*(int **)(in_r0 + 0x88),1);
    (**(code **)(**(int **)(in_r0 + 0x8c) + 0x20))(*(int **)(in_r0 + 0x8c),0);
    *(undefined1 *)(*(int *)(in_r0 + 0x80) + 0x86) = 0;
    (**(code **)(**(int **)(in_r0 + 0x80) + 0x20))(*(int **)(in_r0 + 0x80),0);
    uVar2 = __floatsisf(*(undefined4 *)(in_r0 + 0xc));
    uVar2 = __mulsf3(uVar2,0x3f000000);
    *(undefined4 *)(in_r0 + 0xc4) = uVar2;
    LVar4 = in_r0[0x210];
    if (LVar4 != (LotteryDialog)0x0) {
      LVar4 = (LotteryDialog)0x1;
    }
    *(LotteryDialog *)(*(int *)(in_r0 + 0x84) + 0x86) = LVar4;
    (**(code **)(**(int **)(in_r0 + 0x84) + 0x20))(*(int **)(in_r0 + 0x84),0);
    LVar4 = in_r0[0x204];
    if (LVar4 != (LotteryDialog)0x0) {
      LVar4 = (LotteryDialog)0x1;
    }
    setButtonVisible(in_r0,9,(bool)LVar4);
    LVar4 = in_r0[DAT_001e6038];
    if (LVar4 != (LotteryDialog)0x0) {
      LVar4 = (LotteryDialog)0x1;
    }
    setButtonVisible(in_r0,10,(bool)LVar4);
    LVar4 = in_r0[DAT_001e603c];
    if (LVar4 != (LotteryDialog)0x0) {
      LVar4 = (LotteryDialog)0x1;
    }
    setButtonVisible(in_r0,0xb,(bool)LVar4);
    LVar4 = in_r0[0x208];
    if (LVar4 != (LotteryDialog)0x0) {
      LVar4 = (LotteryDialog)0x1;
    }
    setButtonVisible(in_r0,0xc,(bool)LVar4);
    LVar4 = in_r0[DAT_001e6040];
    if (LVar4 != (LotteryDialog)0x0) {
      LVar4 = (LotteryDialog)0x1;
    }
    setButtonVisible(in_r0,0xd,(bool)LVar4);
    LVar4 = in_r0[DAT_001e6044];
    if (LVar4 != (LotteryDialog)0x0) {
      LVar4 = (LotteryDialog)0x1;
    }
    setButtonVisible(in_r0,0xe,(bool)LVar4);
    pcVar1 = (char *)(DAT_001e6048 + 0x1e600e);
    pcVar3 = (char *)(DAT_001e604c + 0x1e6010);
  }
  else {
    (**(code **)(**(int **)(in_r0 + 0x80) + 0x20))(*(int **)(in_r0 + 0x80),0);
    (**(code **)(**(int **)(in_r0 + 0x84) + 0x20))(*(int **)(in_r0 + 0x84),0);
    (**(code **)(**(int **)(in_r0 + 0x88) + 0x20))(*(int **)(in_r0 + 0x88),0);
    (**(code **)(**(int **)(in_r0 + 0x8c) + 0x20))(*(int **)(in_r0 + 0x8c),0);
    piVar6 = *(int **)(in_r0 + 0x1b0);
    pcVar5 = *(code **)(*piVar6 + 0x44);
    String::String((String *)&pLStack_20,(char *)(DAT_001e602c + 0x1e5f08));
    (*pcVar5)(piVar6,(String *)&pLStack_20);
    String::~String((String *)&pLStack_20);
    pcVar1 = (char *)(DAT_001e6030 + 0x1e5f20);
    pcVar3 = (char *)(DAT_001e6034 + 0x1e5f22);
  }
  L_PrintLog(pcVar1,pcVar3);
  return CONCAT44(uStack_1c,pLStack_20);
}


