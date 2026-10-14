/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160c08 GameStateMainMenu::paint */

/* GameStateMainMenu::paint(CapcomGraphics*) */

undefined8 __thiscall GameStateMainMenu::paint(GameStateMainMenu *this,CapcomGraphics *param_1)

{
  int *piVar1;
  int iVar2;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  GameStateMainMenu *local_18;
  
  (**(code **)(**(int **)(this + 0x14) + 0xc))();
  if (this[0x13c] != (GameStateMainMenu)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 0xc))(*(int **)(this + 0x14),param_1);
    this[0x13c] = (GameStateMainMenu)0x0;
  }
  piVar1 = *(int **)(this + 0x74);
  if ((char)piVar1[5] != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  }
  local_18 = this;
  if (this[DAT_00160c78] != (GameStateMainMenu)0x0) {
    CapcomGraphics::setColor(param_1,**(int **)(DAT_00160c7c + 0x160c4e));
    iVar2 = *(int *)(*(int *)(this + 0xc) + 0x10);
    __floatsisf(iVar2 >> 0x10);
    local_18 = (GameStateMainMenu *)__floatsisf((int)(short)iVar2);
    CapcomGraphics::fillRect(param_1,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  }
  return CONCAT44(param_1,local_18);
}


