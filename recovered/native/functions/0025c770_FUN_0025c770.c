/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c770 FUN_0025c770 */

void FUN_0025c770(int param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    if (((uVar1 & 4) != 0) || (uVar2 = 2, (int)((uint)uVar1 << 0x1c) < 0)) {
      *(undefined1 *)(param_1 + 0x1e) = uVar2;
      return;
    }
    if ((uVar1 & 2) == 0) {
      *(undefined1 *)(param_1 + 0x1e) = 4;
      return;
    }
    uVar2 = 3;
  }
  else {
    uVar2 = 5;
  }
  *(undefined1 *)(param_1 + 0x1e) = uVar2;
  return;
}


