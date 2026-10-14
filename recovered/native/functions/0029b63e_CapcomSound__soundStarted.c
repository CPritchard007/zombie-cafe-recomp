/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b63e CapcomSound::soundStarted */

/* CapcomSound::soundStarted(int) */

void __thiscall CapcomSound::soundStarted(CapcomSound *this,int param_1)

{
  setPlayerVolume((IMedia *)this,
                  *(int *)(this + (*(int *)(this + (param_1 + 0x34) * 4 + 4) + 0x54) * 4 + 4));
  return;
}


