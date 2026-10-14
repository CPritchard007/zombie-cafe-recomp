/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf9b4 CharacterDetails::setMaterialZombie */

/* CharacterDetails::setMaterialZombie() */

undefined8 CharacterDetails::setMaterialZombie(void)

{
  int in_r0;
  undefined4 in_r1;
  code *pcVar1;
  int *piVar2;
  int iStack_18;
  undefined4 uStack_14;
  
  piVar2 = *(int **)(in_r0 + 0xa4);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  iStack_18 = in_r0;
  uStack_14 = in_r1;
  String::String((String *)&iStack_18,(char *)(DAT_000cf9e0 + 0xcf9c4));
  (*pcVar1)(piVar2,(String *)&iStack_18);
  String::~String((String *)&iStack_18);
  return CONCAT44(uStack_14,iStack_18);
}


