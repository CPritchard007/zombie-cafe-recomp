/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b57a CapcomSound::playSoundInternal */

/* CapcomSound::playSoundInternal(int) */

void __thiscall CapcomSound::playSoundInternal(CapcomSound *this,int param_1)

{
  loadMedia((int)this);
  *(int *)(this + (*(int *)(this + (param_1 + 0x34) * 4 + 4) + 0x58) * 4 + 4) = param_1;
  return;
}


