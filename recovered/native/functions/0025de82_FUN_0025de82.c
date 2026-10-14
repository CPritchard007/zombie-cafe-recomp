/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025de82 FUN_0025de82 */

void FUN_0025de82(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_98 [32];
  int iStack_18;
  
  memset(local_98,0,0x80);
LAB_0025dec4:
  do {
    if (param_1 == 0) {
      piVar2 = local_98 + 1;
      do {
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
        local_98[0] = FUN_0025bd28(local_98[0],iVar1);
      } while (piVar2 != &iStack_18);
      return;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    piVar2 = local_98;
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar3 = 0;
    do {
      if (*piVar2 == 0) {
        local_98[iVar3] = param_1;
        param_1 = iVar1;
        goto LAB_0025dec4;
      }
      param_1 = FUN_0025bd28();
      iVar3 = iVar3 + 1;
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    } while (iVar3 != 0x1f);
    local_98[0x1f] = FUN_0025bd28(local_98[0x1f]);
    param_1 = iVar1;
  } while( true );
}


