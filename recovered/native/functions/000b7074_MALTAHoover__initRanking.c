/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7074 MALTAHoover::initRanking */

/* MALTAHoover::initRanking(char*, char*, int) */

undefined8 __thiscall
MALTAHoover::initRanking(MALTAHoover *this,char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_000b70b8 + 0xb7080);
  L_PrintLog(pcVar1,(char *)(DAT_000b70bc + 0xb7084));
  strcpy((char *)this,param_1);
  strcpy((char *)(this + 0x80),param_2);
  sprintf((char *)(this + 0x100),(char *)(DAT_000b70c0 + 0xb70a8),param_3);
  L_PrintLog(pcVar1,(char *)(DAT_000b70c4 + 0xb70b4));
  return CONCAT44(param_3,this);
}


