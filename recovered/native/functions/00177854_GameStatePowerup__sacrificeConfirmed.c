/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00177854 GameStatePowerup::sacrificeConfirmed */

/* GameStatePowerup::sacrificeConfirmed(GameStatePowerup*) */

void __thiscall
GameStatePowerup::sacrificeConfirmed(GameStatePowerup *this,GameStatePowerup *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Character *pCVar9;
  int iVar10;
  float in_s0;
  float __x;
  float __x_00;
  float __x_01;
  
  ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
  iVar1 = DAT_00177a48;
  *(undefined4 *)(this + 0x78) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + DAT_00177a48) + 0x28);
  pCVar9 = *(Character **)(*(int *)(this + 0xc) + iVar1);
  uVar5 = __floatsisf((int)*(short *)(*(int *)pCVar9 + DAT_00177a4c));
  iVar6 = Character::getRareValue(pCVar9);
  iVar8 = DAT_00177a50 + 0x17788c;
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar8 + *(int *)(pCVar9 + 0x28) * 0xc + iVar6 * 0xe10 + 8))
  ;
  roundf(__x);
  iVar6 = Character::getRareValue(pCVar9);
  iVar7 = Character::getSameZombiePowerupNum(pCVar9);
  sVar2 = __fixsfsi(uVar5);
  iVar10 = DAT_00177a54 + 0x1778d6;
  sVar3 = __fixsfsi(*(undefined4 *)(iVar10 + iVar7 * 0xc + iVar6 * 0x3c + 0x78));
  *(short *)(this + 0x82) = sVar2 + sVar3;
  pCVar9 = *(Character **)(*(int *)(this + 0xc) + iVar1);
  uVar5 = __floatsisf((int)*(short *)(*(int *)pCVar9 + DAT_00177a58));
  iVar6 = Character::getRareValue(pCVar9);
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar8 + *(int *)(pCVar9 + 0x28) * 0xc + iVar6 * 0xe10 + 4))
  ;
  roundf(__x_00);
  iVar6 = Character::getRareValue(pCVar9);
  iVar7 = Character::getSameZombiePowerupNum(pCVar9);
  __addsf3(uVar5,*(undefined4 *)(iVar10 + iVar7 * 0xc + iVar6 * 0x3c + 0x74));
  uVar4 = __fixsfsi();
  *(undefined2 *)(this + 0x84) = uVar4;
  iVar6 = *(int *)(this + 0xc);
  sVar2 = *(short *)(**(int **)(iVar6 + iVar1) + DAT_00177a5c);
  if (100 < sVar2) {
    sVar2 = 100;
  }
  *(short *)(this + 0x86) = sVar2;
  *(undefined2 *)(this + 0x8a) = *(undefined2 *)(**(int **)(iVar6 + iVar1) + DAT_00177a60);
  *(undefined2 *)(this + 0x8c) = *(undefined2 *)(**(int **)(iVar6 + iVar1) + 0xb00);
  *(undefined2 *)(this + 0x8e) = *(undefined2 *)(**(int **)(iVar6 + iVar1) + DAT_00177a64);
  pCVar9 = *(Character **)(iVar6 + iVar1);
  uVar5 = *(undefined4 *)(*(int *)pCVar9 + DAT_00177a68);
  iVar6 = Character::getRareValue(pCVar9);
  uVar5 = __mulsf3(uVar5,*(undefined4 *)
                          (*(int *)(pCVar9 + 0x28) * 0xc + iVar6 * 0xe10 + DAT_00177a6c + 0x1779b8))
  ;
  roundf(__x_01);
  iVar6 = Character::getRareValue(pCVar9);
  iVar7 = Character::getSameZombiePowerupNum(pCVar9);
  __fixsfsi(uVar5);
  uVar5 = __floatsisf();
  __addsf3(uVar5,*(undefined4 *)((int)&DAT_00177a60 + DAT_00177a70 + iVar7 * 0xc + iVar6 * 0x3c + 2)
          );
  __fixsfsi();
  uVar5 = __floatsisf();
  *(undefined4 *)(this + 0x90) = uVar5;
  uVar4 = Character::getCanEquipeAmpouleNum(*(Character **)(*(int *)(this + 0xc) + iVar1));
  *(undefined2 *)(this + 0x94) = uVar4;
  *(short *)(this + 0x96) = (short)*(undefined4 *)(*(int *)(*(int *)(this + 0xc) + iVar1) + 0x30);
  (**(code **)(**(int **)(this + 0x110) + 0x20))(*(int **)(this + 0x110),0);
  (**(code **)(**(int **)(this + 0x10c) + 0x20))(*(int **)(this + 0x10c),0);
  this[DAT_00177a74] = (GameStatePowerup)0x1;
  *(undefined4 *)(this + 0x4a0) = 0;
  return;
}


