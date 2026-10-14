/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1d8c CCMarketingView_ShowRatingDialogSometime */

undefined8 CCMarketingView_ShowRatingDialogSometime(void *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)(DAT_002c1dbc + 0x2c1d9c);
  *(undefined4 *)((int)param_1 + 0xac) = 1;
  pcVar2 = (char *)(DAT_002c1dc0 + 0x2c1daa);
  uVar3 = CCDialog::Init(param_1,(_func_void_void_ptr_uint *)(DAT_002c1dc4 + 0x2c1dae),
                         (char *)(DAT_002c1dc8 + 0x2c1db0),(char *)(DAT_002c1dcc + 0x2c1db2),pcVar1,
                         pcVar2);
  *(undefined4 *)((int)param_1 + 0xb4) = uVar3;
  return CONCAT44(pcVar2,pcVar1);
}


