/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c4c8 ZombieCafe::SetFBInfo */

/* ZombieCafe::SetFBInfo(char const*, char const*, char const*, char const*) */

void __thiscall
ZombieCafe::SetFBInfo(ZombieCafe *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)(DAT_0023c554 + 0x23c4d4);
  pcVar2 = (char *)(DAT_0023c558 + 0x23c4d6);
  L_PrintLog(pcVar1,pcVar2);
  L_PrintLog((char *)(DAT_0023c55c + 0x23c4ec),(char *)(DAT_0023c560 + 0x23c4ee));
  L_PrintLog((char *)(DAT_0023c564 + 0x23c4f8),param_1);
  L_PrintLog((char *)(DAT_0023c568 + 0x23c502),param_2);
  L_PrintLog((char *)(DAT_0023c56c + 0x23c50c),param_3);
  L_PrintLog((char *)(DAT_0023c570 + 0x23c516),param_4);
  L_PrintLog(pcVar1,pcVar2);
  strcpy((char *)(this + DAT_0023c574),param_4);
  strcpy((char *)(this + DAT_0023c578),param_1);
  CCFacebook::SetFBInfo(*(void **)(this + DAT_0023c57c),param_1,param_2,param_3,param_4);
  CCServer::StoreFacebookId(*(void **)(this + DAT_0023c580),param_4);
  return;
}


