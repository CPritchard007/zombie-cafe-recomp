/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e948 GameLoader::paint */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0029e958) */
/* WARNING: Removing unreachable block (ram,0x0029e958) */
/* GameLoader::paint(CapcomGraphics*) */

undefined8 __thiscall GameLoader::paint(GameLoader *this,CapcomGraphics *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  GameLoader *local_18;
  
  local_18 = this;
  switch(this[0x39]) {
  case (GameLoader)0x0:
  case (GameLoader)0x5:
    piVar2 = *(int **)(this + 0xc);
    if (piVar2 != (int *)0x0) {
      local_18 = (GameLoader *)0x0;
      (**(code **)(*piVar2 + 0x1c))(piVar2,param_1,this + 0x1c,*(undefined4 *)(this + 0x44));
    }
    break;
  case (GameLoader)0x1:
  case (GameLoader)0x2:
  case (GameLoader)0x3:
    piVar2 = *(int **)(this + 0x18);
    if (piVar2 != (int *)0x0) {
      local_18 = (GameLoader *)0x0;
      (**(code **)(*piVar2 + 0x1c))(piVar2,param_1,this + 0x1c,*(undefined4 *)(this + 0x44));
    }
    if (*(int **)(*(int *)this + 4) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)this + 4) + 0x10))();
    }
    iVar1 = DAT_0029e9e4;
    if (*(short *)(this + 0x3a) <= DAT_0029e9e4) {
      CapcomGraphics::setColorModulation(param_1,true);
      iVar3 = __divsi3(*(short *)(this + 0x3a) * 0xff,500);
      CapcomGraphics::setColor(param_1,DAT_0029e9e8 | iVar3 << 0x18);
    }
    if (*(short *)(this + 0x3a) <= iVar1) {
      CapcomGraphics::setColorModulation(param_1,false);
    }
  }
  return CONCAT44(param_1,local_18);
}


