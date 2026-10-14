/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b540 CapcomSound::setMasterVolumeInternal */

/* CapcomSound::setMasterVolumeInternal(int) */

void __thiscall CapcomSound::setMasterVolumeInternal(CapcomSound *this,int param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0) {
    param_1 = -1;
  }
  *(int *)(this + 0x174) = param_1;
  return;
}


