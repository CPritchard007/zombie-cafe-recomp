/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299a4c CapcomGraphics::activateColorModulation */

/* CapcomGraphics::activateColorModulation() */

void CapcomGraphics::activateColorModulation(void)

{
  int in_r0;
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(DAT_00299a7c + 0x299a58);
  if (*pcVar2 != *(char *)(in_r0 + 0x18)) {
    uVar1 = DAT_00299a80;
    if (*(char *)(in_r0 + 0x18) != '\0') {
      uVar1 = 0x2100;
    }
    glTexEnvi(0x2300,0x2200,uVar1);
    *pcVar2 = *(char *)(in_r0 + 0x18);
  }
  return;
}


