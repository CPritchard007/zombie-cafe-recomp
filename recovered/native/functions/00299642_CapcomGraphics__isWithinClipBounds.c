/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299642 CapcomGraphics::isWithinClipBounds */

/* CapcomGraphics::isWithinClipBounds(long long) const */

bool CapcomGraphics::isWithinClipBounds(longlong param_1)

{
  bool bVar1;
  int in_r0;
  int in_r2;
  int iVar2;
  int in_r3;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(in_r0 + 0x10);
  bVar1 = true;
  if (piVar4 != (int *)0x0) {
    iVar2 = in_r2 + *(int *)(in_r0 + 8);
    iVar3 = in_r3 + *(int *)(in_r0 + 0xc);
    bVar1 = false;
    if (((*piVar4 <= iVar3) && (iVar3 < *piVar4 + piVar4[2])) && (piVar4[1] <= iVar2)) {
      bVar1 = iVar2 < piVar4[1] + piVar4[3];
    }
  }
  return bVar1;
}


