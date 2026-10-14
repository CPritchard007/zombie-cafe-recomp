/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cb14 FUN_0025cb14 */

void FUN_0025cb14(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (param_2 + param_3) - 1;
  iVar3 = param_1 + 100;
  do {
    uVar4 = *(uint *)(iVar3 + 0x10);
    if ((((((int)uVar2 >> 0x1f) - ((int)uVar4 >> 0x1f)) + (uint)(uVar4 <= uVar2) & 0xff) != 0) &&
       (((((int)uVar4 >> 0x1f) - ((int)param_2 >> 0x1f)) + (uint)(param_2 <= uVar4) & 0xff) != 0)) {
      if (*(char *)(iVar3 + 8) != '\0') {
        bVar1 = *(byte *)(param_1 + 0x13);
        if (bVar1 < 8) {
          *(uint *)(param_1 + (bVar1 + 6) * 4 + 4) = uVar4;
          *(byte *)(param_1 + 0x13) = bVar1 + 1;
        }
        *(undefined1 *)(iVar3 + 8) = 0;
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    iVar3 = iVar3 + 0x18;
  } while (iVar3 != param_1 + 0x154);
  return;
}


