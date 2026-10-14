/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb758 BonePile::draw */

/* BonePile::draw(CapcomGraphics*) */

undefined8 BonePile::draw(CapcomGraphics *param_1)

{
  int iVar1;
  CapcomGraphics *in_r1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_000bb7b4 + 0xbb764);
  if (*(int *)(param_1 + 0x34) < *piVar2) {
    iVar1 = __divsi3(*(int *)(param_1 + 0x34) * 0xff);
    CapcomGraphics::setColor(in_r1,DAT_000bb7b8 | iVar1 << 0x18);
    CapcomGraphics::setColorModulation(in_r1,true);
  }
  (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
            (*(int **)(param_1 + 0x38),in_r1,*(int *)(param_1 + 4) >> 0x10,
             (int)(short)*(int *)(param_1 + 4));
  if (*(int *)(param_1 + 0x34) < *piVar2) {
    CapcomGraphics::setColorModulation(in_r1,false);
  }
  return 0x1400000000;
}


