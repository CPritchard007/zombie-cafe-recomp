/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ee84 FUN_0025ee84 */

void FUN_0025ee84(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_0025ee10(param_1,param_3 / 2 + 1,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < param_3 + -1; iVar2 = iVar2 + 2) {
      uVar3 = (int)(uint)param_2[1] >> 6 & 1;
      *(byte *)(iVar1 + iVar2 / 2) =
           (byte)(((uint)*param_2 + ((int)(uint)*param_2 >> 6 & 1U) * 9 & 0xf) << 4) |
           param_2[1] + (char)uVar3 + (char)(uVar3 << 3) & 0xf;
      param_2 = param_2 + 2;
    }
    *(undefined1 *)(iVar1 + iVar2 / 2) = 0;
  }
  return;
}


