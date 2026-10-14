/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153c08 GameStateGatya::checkGatyaEv7 */

/* GameStateGatya::checkGatyaEv7() */

undefined8 GameStateGatya::checkGatyaEv7(void)

{
  int in_r0;
  undefined4 in_r1;
  uint uVar1;
  int iVar2;
  
  *(undefined1 *)(in_r0 + 0xcd) = 0;
  if (**(char **)(DAT_00153c84 + 0x153c18) != '\0') {
    uVar1 = (uint)*(byte *)(*(int *)(in_r0 + 0xc) + DAT_00153c88);
    if (uVar1 != 0) {
      if (**(char **)(DAT_00153c8c + 0x153c2e) == '\0') goto LAB_00153c80;
      uVar1 = 0;
    }
    do {
      iVar2 = *(int *)(uVar1 + *(int *)(DAT_00153c90 + 0x153c40) + DAT_00153c98);
      if (((iVar2 != 0) && (*(int *)(uVar1 + *(int *)(DAT_00153c9c + 0x153c58) + DAT_00153c98) == 1)
          ) && (*(char *)(*(int *)(iVar2 * 4 + *(int *)(*(int *)(in_r0 + 0xc) + DAT_00153c94)) +
                         0xb40) == '\x06')) {
        *(undefined1 *)(in_r0 + 0xcd) = 1;
        break;
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 != 0x2a8);
  }
LAB_00153c80:
  return CONCAT44(in_r1,in_r0);
}


