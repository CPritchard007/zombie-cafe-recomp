/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab72c CCToLower */

/* CCToLower(char*, unsigned int, char const*) */

void CCToLower(char *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  byte bVar2;
  
  for (uVar1 = 0; uVar1 != param_2; uVar1 = uVar1 + 1) {
    bVar2 = param_3[uVar1];
    if ((bVar2 != 0) && (bVar2 - 0x41 < 0x1a)) {
      bVar2 = bVar2 + 0x20;
    }
    param_1[uVar1] = bVar2;
  }
  return;
}


