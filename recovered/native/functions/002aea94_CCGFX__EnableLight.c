/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aea94 CCGFX::EnableLight */

/* CCGFX::EnableLight() */

undefined8 CCGFX::EnableLight(void)

{
  undefined4 in_r0;
  undefined4 in_r1;
  int *piVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  piVar1 = *(int **)(DAT_002aeb00 + 0x2aea9c);
  local_20 = in_r0;
  uStack_1c = in_r1;
  if (*piVar1 == 0) {
    glEnable(0xb50);
    glEnable(0x4000);
    glEnable(DAT_002aeb04);
    local_20 = *(undefined4 *)(DAT_002aeb08 + 0x2aeac0);
    uStack_1c = *(undefined4 *)(DAT_002aeb08 + 0x2aeac4);
    uStack_18 = *(undefined4 *)(DAT_002aeb08 + 0x2aeac8);
    local_14 = *(undefined4 *)(DAT_002aeb08 + 0x2aeacc);
    glLightfv(0x4000,0x1200,piVar1 + 99);
    glLightfv(0x4000,DAT_002aeb0c,piVar1 + 0x67);
    glLightfv(0x4000,DAT_002aeb10,&local_20);
  }
  piVar1[0x75] = 1;
  return CONCAT44(uStack_1c,local_20);
}


