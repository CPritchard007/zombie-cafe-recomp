/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fa60 GameStateCafe::pause */

/* GameStateCafe::pause() */

void GameStateCafe::pause(void)

{
  GameStateCafe GVar1;
  GameStateCafe *in_r0;
  
  prepareForSave(in_r0);
  GVar1 = in_r0[DAT_0011fad4];
  if (GVar1 == (GameStateCafe)0x2) {
    cancelItemSale(in_r0);
  }
  else {
    if (GVar1 != (GameStateCafe)0x1) {
      if ((GVar1 != (GameStateCafe)0x6) && (GVar1 != (GameStateCafe)0x9)) {
        if (GVar1 == (GameStateCafe)0x3) {
          (**(code **)(**(int **)(in_r0 + 0xd0) + 0x20))(*(int **)(in_r0 + 0xd0),0);
          (**(code **)(**(int **)(in_r0 + 0x80) + 0x20))(*(int **)(in_r0 + 0x80),0);
          cancelItemSale(in_r0);
        }
        goto LAB_0011fab8;
      }
    }
    cancelAllEdits(in_r0);
  }
  exitEditModes();
LAB_0011fab8:
  save(SUB41(in_r0,0));
  deleteAllTasks(in_r0);
  in_r0[DAT_0011fad8] = (GameStateCafe)0x1;
  return;
}


