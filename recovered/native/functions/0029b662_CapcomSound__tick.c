/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b662 CapcomSound::tick */

/* CapcomSound::tick(long) */

void CapcomSound::tick(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x154);
  do {
    if ((*piVar2 != 0) && (iVar1 = isPlayerChanging((IMedia *)param_1), iVar1 == 0)) {
      iVar1 = isPlayerActive((IMedia *)param_1);
      if (iVar1 == 0) {
        if (*(char *)(param_1 + piVar2[4] + 0xc4) == '\0') {
          stopSoundInternal(param_1);
        }
        else {
          playSoundInternal((CapcomSound *)param_1,piVar2[4]);
        }
      }
      else {
        setPlayerVolume((IMedia *)param_1,*piVar2);
      }
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(param_1 + 0x164));
  return;
}


