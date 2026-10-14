/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7518 MALTAHoover::getFBID */

/* MALTAHoover::getFBID(SServer*, char*) */

bool MALTAHoover::getFBID(SServer *param_1,char *param_2)

{
  undefined4 uVar1;
  char *in_r2;
  bool bVar2;
  SServer *pSStack_20;
  undefined4 uStack_1c;
  String aSStack_18 [8];
  
  pSStack_20 = param_1;
  uStack_1c = param_2;
  if (param_2 == (char *)0x0) {
    strcpy(in_r2,(char *)(DAT_000b75a4 + 0xb7582));
    bVar2 = false;
  }
  else {
    String::String((String *)&pSStack_20,param_2 + 0x118);
    bVar2 = uStack_1c._2_2_ < 1;
    if (bVar2) {
      strcpy(in_r2,(char *)(DAT_000b75a0 + 0xb756c));
    }
    else {
      String::String(aSStack_18,(String *)&pSStack_20);
      uVar1 = getChar(param_1,aSStack_18);
      String::~String(aSStack_18);
      snprintf(in_r2,0x40,(char *)(DAT_000b759c + 0xb755c),uVar1);
    }
    bVar2 = !bVar2;
    String::~String((String *)&pSStack_20);
  }
  return bVar2;
}


