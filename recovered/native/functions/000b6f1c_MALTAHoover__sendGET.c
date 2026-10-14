/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6f1c MALTAHoover::sendGET */

/* MALTAHoover::sendGET(char*) */

void __thiscall MALTAHoover::sendGET(MALTAHoover *this,char *param_1)

{
  int iVar1;
  
  iVar1 = javaConnected();
  if (iVar1 != 0) {
    javaNewRequest(DAT_000b6f38 + 0xb6f32,param_1,0xffffffff);
  }
  return;
}


