/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bede8 CCCarousel::Init */

/* CCCarousel::Init() */

void CCCarousel::Init(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)malloc(0x48);
  uVar1 = DAT_002bee28;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[5] = uVar1;
    uVar1 = DAT_002bee2c;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0x3f800000;
    puVar2[6] = uVar1;
    puVar2[0xb] = 0;
    puVar2[0x11] = 0xffffffff;
    puVar2[0xf] = 0x3f800000;
  }
  return;
}


