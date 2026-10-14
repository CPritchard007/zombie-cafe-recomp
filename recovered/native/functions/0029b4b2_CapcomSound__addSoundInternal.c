/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b4b2 CapcomSound::addSoundInternal */

/* CapcomSound::addSoundInternal(char const*, int, int, bool, int, int) */

int __thiscall
CapcomSound::addSoundInternal
          (CapcomSound *this,char *param_1,int param_2,int param_3,bool param_4,int param_5,
          int param_6)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 < 0x10) {
    *(int *)this = iVar1 + 1;
    *(char **)(this + iVar1 * 4 + 4) = param_1;
    *(int *)(this + (iVar1 + 0x10) * 4 + 4) = param_2;
    *(int *)(this + (iVar1 + 0x20) * 4 + 4) = param_3;
    this[iVar1 + 0xc4] = (CapcomSound)param_4;
    *(int *)(this + (iVar1 + 0x34) * 4 + 4) = param_5;
    if (100 < param_6) {
      param_6 = 100;
    }
    *(int *)(this + (iVar1 + 0x44) * 4 + 4) = param_6 & ~param_6 >> 0x1f;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


