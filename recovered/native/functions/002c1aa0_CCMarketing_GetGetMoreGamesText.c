/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1aa0 CCMarketing_GetGetMoreGamesText */

undefined * CCMarketing_GetGetMoreGamesText(int *param_1)

{
  undefined *puVar1;
  
  if ((int)param_1 - 1U < 0xfffffffe) {
    if ((int *)*param_1 == (int *)0x0) {
      puVar1 = (undefined *)(DAT_002c1ad4 + 0x2c1ac4);
    }
    else if (*(int *)*param_1 == 0) {
      puVar1 = (undefined *)(DAT_002c1acc + 0x2c1ab8);
    }
    else {
      puVar1 = &UNK_002c1aca + DAT_002c1ad8;
    }
  }
  else {
    puVar1 = (undefined *)(DAT_002c1ad0 + 0x2c1abe);
  }
  return puVar1;
}


