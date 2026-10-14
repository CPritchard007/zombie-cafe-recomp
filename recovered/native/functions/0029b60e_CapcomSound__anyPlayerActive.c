/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b60e CapcomSound::anyPlayerActive */

/* CapcomSound::anyPlayerActive() */

undefined4 __thiscall CapcomSound::anyPlayerActive(CapcomSound *this)

{
  int iVar1;
  CapcomSound *pCVar2;
  
  pCVar2 = this;
  do {
    iVar1 = isPlayerActive((IMedia *)this);
    if (iVar1 != 0) {
      return 1;
    }
    pCVar2 = pCVar2 + 4;
  } while (pCVar2 != this + 0x10);
  return 0;
}


