/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc030 MALTAHoover::GetInstance */

/* MALTAHoover::GetInstance() */

MALTAHoover * MALTAHoover::GetInstance(void)

{
  int iVar1;
  MALTAHoover *this;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_000bc07c + 0xbc03a);
  this = *(MALTAHoover **)(DAT_000bc080 + 0xbc03e);
  if ((-1 < *piVar2 << 0x1f) && (iVar1 = FUN_002e9da0(piVar2), iVar1 != 0)) {
    MALTAHoover(this);
    FUN_002e9e08(piVar2);
    __aeabi_atexit(this,*(undefined4 *)(DAT_000bc084 + 0xbc064),
                   *(undefined4 *)(DAT_000bc088 + 0xbc066));
  }
  return this;
}


