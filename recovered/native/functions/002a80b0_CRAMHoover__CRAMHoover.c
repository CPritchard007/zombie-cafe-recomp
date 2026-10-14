/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a80b0 CRAMHoover::CRAMHoover */

/* CRAMHoover::CRAMHoover(char const*, char const*) */

CRAMHoover * __thiscall CRAMHoover::CRAMHoover(CRAMHoover *this,char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_002a80f0 + 0x2a80bc);
  this[8] = (CRAMHoover)0x0;
  *(int *)this = iVar2 + 8;
  pcVar1 = strdup((char *)(DAT_002a80f4 + 0x2a80ca));
  iVar2 = DAT_002a80f8;
  *(char **)(this + 0xc) = pcVar1;
  strncpy((char *)(this + 0x14),(char *)(iVar2 + 0x2a80d6),0x80);
  this[0x94] = (CRAMHoover)0x0;
  pcVar1 = strdup(param_2);
  *(undefined4 *)(this + 0x10) = 0;
  *(char **)(this + 4) = pcVar1;
  return this;
}


