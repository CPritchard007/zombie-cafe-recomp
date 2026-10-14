/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234a90 UpdateGame::paint */

/* UpdateGame::paint(CapcomGraphics*) */

void __thiscall UpdateGame::paint(UpdateGame *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *this_00;
  int *piVar3;
  float in_s0;
  float extraout_s0;
  undefined4 local_134 [4];
  undefined4 uStack_124;
  char acStack_120 [260];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00234b54 + 0x234a9c);
  local_1c = *piVar3;
  if (*(int *)(this + 0x18) == -1) {
    iVar1 = ZombieCafe::DecideDeviceTypeByWidth((int)*(short *)(this + 0x12));
    local_134[0] = *(undefined4 *)(DAT_00234b58 + 0x234aba);
    local_134[1] = *(undefined4 *)(DAT_00234b58 + 0x234abe);
    local_134[2] = *(undefined4 *)(DAT_00234b58 + 0x234ac2);
    local_134[3] = *(undefined4 *)(DAT_00234b58 + 0x234ac6);
    uStack_124 = *(undefined4 *)(DAT_00234b58 + 0x234aca);
    snprintf(acStack_120,0x104,(char *)(DAT_00234b5c + 0x234ad6),local_134[iVar1]);
    uVar2 = CCCapcomLoad::Init(*(int *)(this + 0x10) >> 0x10,(int)(short)*(int *)(this + 0x10),0,0,
                               acStack_120,1);
    *(undefined4 *)(this + 0x18) = uVar2;
    in_s0 = extraout_s0;
  }
  CCCapcomLoad::Render(*(void **)(this + 0x18),0,0,in_s0,false);
  glEnable(DAT_00234b60);
  iVar1 = CCCapcomLoad::HasFinished(*(void **)(this + 0x18));
  if (iVar1 != 0) {
    this_00 = (ZombieCafe *)operator_new(DAT_00234b64);
    ZombieCafe::ZombieCafe(this_00,false);
    *(ZombieCafe **)(*(int *)(this + 4) + 4) = this_00;
    (**(code **)(*(int *)this_00 + 0xc))(this_00);
    (**(code **)(*(int *)this + 4))(this);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


