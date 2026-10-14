/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d6828 CharacterEvolution::setCharacter */

/* CharacterEvolution::setCharacter(Character*, CharacterStats) */

void CharacterEvolution::setCharacter
               (CharacterEvolution *param_1,Character *param_2,undefined4 param_3,undefined4 param_4
               ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CharacterEvolution *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int *piVar12;
  undefined4 uVar13;
  float __x;
  float __x_00;
  float fVar14;
  float __x_01;
  int local_1d8;
  String aSStack_1b8 [8];
  String aSStack_1b0 [8];
  String aSStack_1a8 [8];
  String aSStack_1a0 [8];
  String aSStack_198 [8];
  String aSStack_190 [8];
  String aSStack_188 [8];
  String aSStack_180 [8];
  String aSStack_178 [8];
  String aSStack_170 [8];
  String aSStack_168 [8];
  String aSStack_160 [8];
  String aSStack_158 [8];
  String aSStack_150 [8];
  String aSStack_148 [8];
  String aSStack_140 [8];
  String aSStack_138 [8];
  String aSStack_130 [8];
  String aSStack_128 [8];
  String aSStack_120 [8];
  String aSStack_118 [8];
  String aSStack_110 [8];
  String aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [12];
  undefined2 local_4;
  undefined2 uStack_2;
  
  iVar2 = DAT_000d6bf8;
  param_1[0xf0] = (CharacterEvolution)0x0;
  iVar2 = iVar2 + 0xd6842;
  (**(code **)(**(int **)(param_1 + 0xe4) + 0x14))(*(int **)(param_1 + 0xe4),0);
  *(undefined2 *)(param_1 + 0x82) = param_5._2_2_;
  *(undefined2 *)(param_1 + 0x84) = (undefined2)param_6;
  *(undefined2 *)(param_1 + 0x86) = param_6._2_2_;
  *(undefined4 *)(param_1 + 0x8c) = param_8;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  local_4 = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x7c) = local_4;
  *(undefined2 *)(param_1 + 0x8a) = param_7._2_2_;
  *(undefined2 *)(param_1 + 0x88) = (undefined2)param_7;
  uStack_2 = (undefined2)((uint)param_4 >> 0x10);
  *(undefined2 *)(param_1 + 0x7e) = uStack_2;
  *(undefined2 *)(param_1 + 0x80) = (undefined2)param_5;
  *(Character **)(param_1 + 0x74) = param_2;
  piVar12 = *(int **)(param_1 + 0x9c);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_1b8,(char *)(DAT_000d6bfc + 0xd689c));
  (*pcVar11)(piVar12,aSStack_1b8);
  String::~String(aSStack_1b8);
  piVar12 = *(int **)(param_1 + 0x9c);
  (**(code **)(*piVar12 + 0x20))(piVar12,1);
  pCVar7 = param_1 + 0x94;
  piVar12 = *(int **)pCVar7;
  pcVar11 = *(code **)(*piVar12 + 0x18);
  iVar8 = *(int *)(*(int *)(param_1 + 0x98) + 0xc);
  iVar9 = **(int **)(iVar2 + DAT_000d6c00);
  iVar3 = SmDev();
  iVar9 = *(int *)(iVar3 * 4 + iVar9);
  iVar10 = **(int **)(iVar2 + DAT_000d6c04);
  iVar3 = SmDev();
  (*pcVar11)(piVar12,(iVar8 - iVar9) - *(int *)(iVar3 * 4 + iVar10),
             *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x10));
  piVar12 = *(int **)pCVar7;
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_1b0,(String *)(param_2 + 8));
  (*pcVar11)(piVar12,aSStack_1b0);
  String::~String(aSStack_1b0);
  (**(code **)(**(int **)pCVar7 + 0x20))(*(int **)pCVar7,1);
  piVar12 = *(int **)(param_1 + 0xcc);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_1a8,(String *)(*(int *)param_2 + DAT_000d6c08));
  (*pcVar11)(piVar12,aSStack_1a8);
  String::~String(aSStack_1a8);
  piVar12 = *(int **)(param_1 + 0xcc);
  (**(code **)(*piVar12 + 0x20))(piVar12,1);
  CharacterPortrait::setCharacter
            (*(CharacterPortrait **)(param_1 + 0xe8),param_2,true,false,false,false);
  String::String(aSStack_1a0);
  String::String(aSStack_198,(char *)(DAT_000d6c0c + 0xd6988));
  String::String(aSStack_190,(String *)(*(int *)param_2 + DAT_000d6c10));
  String::operator=(aSStack_1a0,aSStack_190);
  String::~String(aSStack_190);
  iVar3 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_198,aSStack_1a0,*(int *)(DAT_000d6c14 + iVar3 * 4 + 0xd69e2));
  piVar12 = *(int **)(param_1 + 0xd0);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_188,aSStack_198);
  (*pcVar11)(piVar12,aSStack_188);
  String::~String(aSStack_188);
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x20))(*(int **)(param_1 + 0xd0),1);
  piVar12 = *(int **)(param_1 + 0xd4);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_180,(char *)(DAT_000d6c18 + 0xd69f6));
  String::String(aSStack_178,(char *)(DAT_000d6c1c + 0xd6a04));
  String::operator+(aSStack_170,aSStack_180,aSStack_178);
  String::String(aSStack_168,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar2 + DAT_000d6c20) * 8));
  String::operator+(aSStack_160,aSStack_170,aSStack_168);
  String::String(aSStack_158,(char *)(DAT_000d6c24 + 0xd6a3e));
  String::operator+(aSStack_150,aSStack_160,aSStack_158);
  String::String(aSStack_148,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar2 + DAT_000d6c28) * 8));
  String::operator+(aSStack_140,aSStack_150,aSStack_148);
  String::String(aSStack_138,(char *)(DAT_000d6c2c + 0xd6a74));
  String::operator+(aSStack_130,aSStack_140,aSStack_138);
  String::String(aSStack_128,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar2 + DAT_000d6c30) * 8));
  String::operator+(aSStack_120,aSStack_130,aSStack_128);
  String::String(aSStack_118,(char *)(DAT_000d6c34 + 0xd6aaa));
  String::operator+(aSStack_110,aSStack_120,aSStack_118);
  String::String(aSStack_108,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar2 + DAT_000d6c38) * 8));
  String::operator+(aSStack_100,aSStack_110,aSStack_108);
  String::String(aSStack_f8,(char *)(DAT_000d6c3c + 0xd6ae0));
  String::operator+(aSStack_f0,aSStack_100,aSStack_f8);
  (*pcVar11)(piVar12,aSStack_f0);
  String::~String(aSStack_f0);
  String::~String(aSStack_f8);
  String::~String(aSStack_100);
  String::~String(aSStack_108);
  String::~String(aSStack_110);
  String::~String(aSStack_118);
  String::~String(aSStack_120);
  String::~String(aSStack_128);
  String::~String(aSStack_130);
  String::~String(aSStack_138);
  String::~String(aSStack_140);
  String::~String(aSStack_148);
  String::~String(aSStack_150);
  String::~String(aSStack_158);
  String::~String(aSStack_160);
  String::~String(aSStack_168);
  String::~String(aSStack_170);
  String::~String(aSStack_178);
  String::~String(aSStack_180);
  *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0xc4) = 0;
  piVar12 = *(int **)(param_1 + 0xd4);
  (**(code **)(*piVar12 + 0x20))(piVar12,1);
  String::String(aSStack_e8,(char *)(DAT_000d6c40 + 0xd6b84));
  __fixsfsi(*(undefined4 *)(param_1 + 0x8c));
  String::valueOf((int)aSStack_e0);
  String::operator=(aSStack_e8,aSStack_e0);
  String::~String(aSStack_e0);
  String::String(aSStack_d8,(char *)(DAT_000d6c44 + 0xd6bae));
  String::operator+=(aSStack_e8,aSStack_d8);
  String::~String(aSStack_d8);
  String::valueOf((int)aSStack_d0);
  String::operator+=(aSStack_e8,aSStack_d0);
  String::~String(aSStack_d0);
  String::String(aSStack_c8,(char *)(DAT_000d6c48 + 0xd6be2));
  String::operator+=(aSStack_e8,aSStack_c8);
  String::~String(aSStack_c8);
  String::valueOf((int)aSStack_c0);
  String::operator+=(aSStack_e8,aSStack_c0);
  String::~String(aSStack_c0);
  String::String(aSStack_b8,(char *)(DAT_000d702c + 0xd6c6c));
  String::operator+=(aSStack_e8,aSStack_b8);
  String::~String(aSStack_b8);
  String::valueOf((int)aSStack_b0);
  String::operator+=(aSStack_e8,aSStack_b0);
  String::~String(aSStack_b0);
  String::String(aSStack_a8,(char *)(DAT_000d7030 + 0xd6ca0));
  String::operator+=(aSStack_e8,aSStack_a8);
  String::~String(aSStack_a8);
  String::valueOf((int)aSStack_a0);
  String::operator+=(aSStack_e8,aSStack_a0);
  String::~String(aSStack_a0);
  String::String(aSStack_98,(char *)(DAT_000d7034 + 0xd6cd4));
  String::operator+=(aSStack_e8,aSStack_98);
  String::~String(aSStack_98);
  piVar12 = *(int **)(param_1 + 0xd8);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_90,aSStack_e8);
  (*pcVar11)(piVar12,aSStack_90);
  String::~String(aSStack_90);
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x20))(*(int **)(param_1 + 0xd8),1);
  String::String(aSStack_88,(char *)(DAT_000d7038 + 0xd6d18));
  uVar13 = *(undefined4 *)(*(int *)param_2 + DAT_000d703c);
  iVar3 = Character::getRareValue(param_2);
  uVar13 = __mulsf3(uVar13,*(undefined4 *)
                            (DAT_000d7040 + *(int *)(param_2 + 0x28) * 0xc + iVar3 * 0xe10 + 0xd6d84
                            ));
  roundf(__x);
  iVar3 = Character::getRareValue(param_2);
  iVar9 = Character::getSameZombiePowerupNum(param_2);
  __fixsfsi(uVar13);
  uVar13 = __floatsisf();
  __addsf3(uVar13,*(undefined4 *)(DAT_000d7044 + iVar9 * 0xc + iVar3 * 0x3c + 0xd6dac));
  __fixsfsi();
  String::valueOf((int)aSStack_80);
  String::operator=(aSStack_88,aSStack_80);
  String::~String(aSStack_80);
  String::String(aSStack_78,(char *)(DAT_000d7048 + 0xd6d9c));
  String::operator+=(aSStack_88,aSStack_78);
  String::~String(aSStack_78);
  String::valueOf((int)aSStack_70);
  String::operator+=(aSStack_88,aSStack_70);
  String::~String(aSStack_70);
  String::String(aSStack_68,(char *)(DAT_000d7050 + 0xd6ddc));
  String::operator+=(aSStack_88,aSStack_68);
  String::~String(aSStack_68);
  sVar1 = *(short *)(*(int *)param_2 + DAT_000d7054);
  iVar3 = Character::getRareValue(param_2);
  uVar13 = __floatsisf((int)sVar1);
  uVar13 = __mulsf3(uVar13,*(undefined4 *)
                            (DAT_000d7058 + *(int *)(param_2 + 0x28) * 0xc + iVar3 * 0xe10 + 0xd6e64
                            ));
  roundf(__x_00);
  iVar3 = Character::getRareValue(param_2);
  iVar9 = Character::getSameZombiePowerupNum(param_2);
  iVar8 = __fixsfsi(uVar13);
  iVar3 = __fixsfsi(*(undefined4 *)(DAT_000d705c + iVar9 * 0xc + iVar3 * 0x3c + 0xd6e8c));
  fVar14 = (float)__floatsisf((iVar8 + iVar3) * 0x10000 >> 0x10);
  roundf(fVar14);
  __fixsfsi();
  String::valueOf((int)aSStack_60);
  String::operator+=(aSStack_88,aSStack_60);
  String::~String(aSStack_60);
  String::String(aSStack_58,(char *)(DAT_000d7060 + 0xd6e82));
  String::operator+=(aSStack_88,aSStack_58);
  String::~String(aSStack_58);
  sVar1 = *(short *)(*(int *)param_2 + DAT_000d7064);
  iVar3 = Character::getRareValue(param_2);
  uVar13 = __floatsisf((int)sVar1);
  uVar13 = __mulsf3(uVar13,*(undefined4 *)
                            (DAT_000d7068 + *(int *)(param_2 + 0x28) * 0xc + iVar3 * 0xe10 + 0xd6f08
                            ));
  roundf(__x_01);
  iVar3 = Character::getRareValue(param_2);
  iVar9 = Character::getSameZombiePowerupNum(param_2);
  __addsf3(uVar13,*(undefined4 *)(DAT_000d706c + iVar9 * 0xc + iVar3 * 0x3c + 0xd6f24));
  sVar1 = __fixsfsi();
  fVar14 = (float)__floatsisf((int)sVar1);
  roundf(fVar14);
  __fixsfsi();
  String::valueOf((int)aSStack_50);
  String::operator+=(aSStack_88,aSStack_50);
  String::~String(aSStack_50);
  String::String(aSStack_48,(char *)(DAT_000d7070 + 0xd6f20));
  String::operator+=(aSStack_88,aSStack_48);
  String::~String(aSStack_48);
  String::valueOf((int)aSStack_40);
  String::operator+=(aSStack_88,aSStack_40);
  String::~String(aSStack_40);
  String::String(aSStack_38,(char *)(DAT_000d7078 + 0xd6f52));
  String::operator+=(aSStack_88,aSStack_38);
  String::~String(aSStack_38);
  piVar12 = *(int **)(param_1 + 0xdc);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_30,aSStack_88);
  (*pcVar11)(piVar12,aSStack_30);
  String::~String(aSStack_30);
  (**(code **)(**(int **)(param_1 + 0xdc) + 0x20))(*(int **)(param_1 + 0xdc),1);
  piVar12 = *(int **)(param_1 + 0xa4);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_28,(char *)(DAT_000d707c + 0xd6f9e));
  (*pcVar11)(piVar12,aSStack_28);
  String::~String(aSStack_28);
  piVar12 = *(int **)(param_1 + 0xa4);
  (**(code **)(*piVar12 + 0x24))(piVar12,0xff000000);
  piVar12 = *(int **)(param_1 + 0xa4);
  (**(code **)(*piVar12 + 0x20))(piVar12,1);
  iVar3 = 0;
  do {
    piVar12 = *(int **)(param_1 + iVar3 + 0xa8);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0x20))(piVar12,0);
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x1c);
  iVar3 = SmDev();
  uVar13 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + DAT_000d7080));
  uVar4 = Character::getRareValue(param_2);
  iVar3 = SmDev();
  uVar4 = __floatsisf(uVar4);
  iVar9 = *(int *)(iVar2 + DAT_000d7084);
  pCVar7 = param_1 + 0xa8;
  uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar3 * 4 + iVar9));
  uVar4 = __mulsf3(uVar4,0x3f000000);
  __subsf3(uVar13,uVar4);
  uVar13 = __fixsfsi();
  for (local_1d8 = 0; iVar3 = Character::getRareValue(param_2), local_1d8 <= iVar3;
      local_1d8 = local_1d8 + 1) {
    piVar12 = *(int **)pCVar7;
    pcVar11 = *(code **)(*piVar12 + 0x14);
    iVar3 = SmDev();
    uVar4 = *(undefined4 *)(iVar9 + iVar3 * 4);
    iVar3 = SmDev();
    uVar5 = __floatsisf(uVar13);
    uVar6 = __floatsisf(local_1d8);
    uVar4 = __mulsf3(uVar4,uVar6);
    __addsf3(uVar5,uVar4);
    uVar4 = __fixsfsi();
    uVar5 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + DAT_000d73f8)));
    (*pcVar11)(piVar12,uVar4,uVar5);
    piVar12 = *(int **)pCVar7;
    pCVar7 = pCVar7 + 4;
    (**(code **)(*piVar12 + 0x20))(piVar12,1);
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x20))(*(int **)(param_1 + 0x98),1);
  (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),1);
  piVar12 = *(int **)(param_1 + 0xd4);
  pCVar7 = param_1 + 0xe4;
  (**(code **)(*piVar12 + 0x18))(piVar12,*(undefined4 *)(*(int *)pCVar7 + 0xc),piVar12[4]);
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x18))
            (*(int **)(param_1 + 0xd8),*(undefined4 *)(*(int *)pCVar7 + 0xc),
             *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x10));
  (**(code **)(**(int **)(param_1 + 0xdc) + 0x18))
            (*(int **)(param_1 + 0xdc),*(undefined4 *)(*(int *)pCVar7 + 0xc),
             *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x10));
  piVar12 = *(int **)(param_1 + 0xd4);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
  iVar9 = *(int *)(*(int *)(param_1 + 0xd0) + 0x10);
  iVar3 = SmDev();
  (*pcVar11)(piVar12,0,iVar8 + iVar9 + *(int *)(DAT_000d73fc + iVar3 * 4 + 0xd71a2));
  piVar12 = *(int **)(param_1 + 0xd8);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar3 = SmDev();
  uVar13 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + DAT_000d7400));
  iVar8 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
  iVar9 = *(int *)(*(int *)(param_1 + 0xd0) + 0x10);
  iVar3 = SmDev();
  (*pcVar11)(piVar12,uVar13,iVar8 + iVar9 + *(int *)(DAT_000d7404 + iVar3 * 4 + 0xd71e2));
  piVar12 = *(int **)(param_1 + 0xdc);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar3 = SmDev();
  uVar13 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + DAT_000d7408));
  iVar9 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
  iVar3 = *(int *)(*(int *)(param_1 + 0xd0) + 0x10);
  iVar2 = SmDev();
  (*pcVar11)(piVar12,uVar13,iVar9 + iVar3 + *(int *)(DAT_000d740c + iVar2 * 4 + 0xd7222));
  (**(code **)(**(int **)(param_1 + 0xe4) + 0x18))
            (*(int **)(param_1 + 0xe4),*(undefined4 *)(*(int *)(param_1 + 0xe0) + 0xc),
             *(int *)(*(int *)(param_1 + 0xd4) + 8) + *(int *)(*(int *)(param_1 + 0xd4) + 0x10));
  layout(param_1);
  String::~String(aSStack_88);
  String::~String(aSStack_e8);
  String::~String(aSStack_198);
  String::~String(aSStack_1a0);
  return;
}


