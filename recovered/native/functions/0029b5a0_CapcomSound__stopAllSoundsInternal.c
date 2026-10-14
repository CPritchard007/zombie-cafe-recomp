/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b5a0 CapcomSound::stopAllSoundsInternal */

/* CapcomSound::stopAllSoundsInternal() */

void __thiscall CapcomSound::stopAllSoundsInternal(CapcomSound *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)this; iVar1 = iVar1 + 1) {
    clearMedia((int)this);
  }
  return;
}


