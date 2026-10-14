/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b5e6 CapcomSound::getPlayerIndex */

/* CapcomSound::getPlayerIndex(IMedia*) */

int __thiscall CapcomSound::getPlayerIndex(CapcomSound *this,IMedia *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(IMedia **)(this + 0x154) == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    this = this + 4;
  } while (iVar1 != 4);
  return -1;
}


