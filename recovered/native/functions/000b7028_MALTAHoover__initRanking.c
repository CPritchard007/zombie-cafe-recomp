/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7028 MALTAHoover::initRanking */

/* MALTAHoover::initRanking(char*, char*, char*) */

undefined8 __thiscall
MALTAHoover::initRanking(MALTAHoover *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_000b7068 + 0xb7034);
  L_PrintLog(pcVar1,(char *)(DAT_000b706c + 0xb7038));
  strcpy((char *)this,param_1);
  strcpy((char *)(this + 0x80),param_2);
  strcpy((char *)(this + 0x100),param_3);
  L_PrintLog(pcVar1,(char *)(DAT_000b7070 + 0xb7064));
  return CONCAT44(param_3,this);
}


