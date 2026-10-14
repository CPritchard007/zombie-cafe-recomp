/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fa968 ObjectiveDialog::backClose */

/* ObjectiveDialog::backClose() */

void __thiscall ObjectiveDialog::backClose(ObjectiveDialog *this)

{
  char *pcVar1;
  float fVar2;
  
  pcVar1 = (char *)(DAT_001fa9bc + 0x1fa974);
  L_PrintLog(pcVar1,(char *)(DAT_001fa9c0 + 0x1fa976));
  if (this[0x14] != (ObjectiveDialog)0x0) {
    fVar2 = (float)L_PrintLog(pcVar1,(char *)(DAT_001fa9c4 + 0x1fa98a));
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_001fa9c8) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0x60),fVar2);
    (**(code **)(*(int *)this + 0x20))(this,0);
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_001fa9cc) = 1;
  }
  L_PrintLog((char *)(DAT_001fa9d0 + 0x1fa9b6),(char *)(DAT_001fa9d4 + 0x1fa9b8));
  return;
}


