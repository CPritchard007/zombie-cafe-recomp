/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b70cc MALTAHoover::sendRankingGET */

/* MALTAHoover::sendRankingGET(char*) */

void __thiscall MALTAHoover::sendRankingGET(MALTAHoover *this,char *param_1)

{
  int iVar1;
  
  iVar1 = javaConnected();
  if (iVar1 != 0) {
    javaNewRequest(DAT_000b70e8 + 0xb70e2,param_1,0xffffffff);
  }
  return;
}


