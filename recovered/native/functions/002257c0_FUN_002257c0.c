/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002257c0 FUN_002257c0 */

void FUN_002257c0(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  while( true ) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    pcVar2 = (char *)*puVar1;
    *(undefined4 *)(param_1 + 0x14) = puVar1[1];
    if (pcVar2 == (char *)0x0) break;
    if (*pcVar2 == '\x01') {
      (**(code **)(pcVar2 + 4))(*(undefined4 *)(pcVar2 + 8),param_1);
    }
  }
  return;
}


