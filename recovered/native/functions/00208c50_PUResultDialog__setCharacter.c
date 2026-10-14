/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00208c50 PUResultDialog::setCharacter */

/* PUResultDialog::setCharacter(Character*, PUCharacterStats, String) */

void PUResultDialog::setCharacter
               (PUResultDialog *param_1,Character *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CharacterPortrait *this;
  CImage *pCVar6;
  ImageElement *pIVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  PUResultDialog *pPVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  float fVar17;
  undefined8 uVar18;
  uint auStack_c [3];
  undefined1 *puVar16;
  
  iVar3 = DAT_00208f90;
  puVar15 = (undefined4 *)(&stack0xffffffe4 + DAT_00208f90);
  puVar16 = &stack0xffffffe4 + DAT_00208f90;
  *(undefined4 *)(&stack0x00000218 + DAT_00208f90) = param_4;
  *(undefined4 *)(&stack0x00000214 + DAT_00208f90) = param_3;
  param_1[0xe4] = (PUResultDialog)0x0;
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x14))(*(int **)(param_1 + 0xd8),0);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(&stack0x00000214 + iVar3);
  *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)(&stack0x00000222 + iVar3);
  *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(&stack0x00000224 + iVar3);
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(&stack0x00000226 + iVar3);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(&stack0x0000022c + iVar3);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(&stack0x00000218 + iVar3);
  *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(&stack0x0000021c + iVar3);
  *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)(&stack0x0000022a + iVar3);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(&stack0x00000228 + iVar3);
  *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(&stack0x0000021e + iVar3);
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(&stack0x00000220 + iVar3);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(&stack0x00000230 + iVar3);
  *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(&stack0x00000232 + iVar3);
  *(Character **)(param_1 + 0x70) = param_2;
  piVar13 = *(int **)(param_1 + 0xa0);
  *(PUResultDialog **)(&stack0xfffffff0 + iVar3) = param_1 + 0xa0;
  pcVar11 = *(code **)(*piVar13 + 0x44);
  String::String((String *)(&stack0x0000001c + iVar3),*(String **)(&stack0x00000234 + iVar3));
  (*pcVar11)(piVar13,&stack0x0000001c + iVar3);
  String::~String((String *)(&stack0x0000001c + iVar3));
  (**(code **)(*(int *)**(undefined4 **)(&stack0xfffffff0 + iVar3) + 0x20))
            ((int *)**(undefined4 **)(&stack0xfffffff0 + iVar3),1);
  piVar13 = *(int **)(param_1 + 0x98);
  *(PUResultDialog **)(&stack0xfffffff0 + iVar3) = param_1 + 0x98;
  *(undefined4 *)(&stack0x00000000 + iVar3) = *(undefined4 *)(*piVar13 + 0x18);
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0xc));
  *(undefined4 *)((int)auStack_c + iVar3 + 4) = uVar4;
  *(undefined4 *)((int)auStack_c + iVar3) = **(undefined4 **)(DAT_00208f94 + 0x208d08);
  iVar5 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar5 * 4 + *(int *)((int)auStack_c + iVar3)));
  uVar8 = *(undefined4 *)(param_1 + 0xe8);
  *(PUResultDialog **)((int)auStack_c + iVar3) = param_1 + 0xe8;
  uVar4 = __mulsf3(uVar4,uVar8);
  uVar4 = __subsf3(*(undefined4 *)((int)auStack_c + iVar3 + 4),uVar4);
  *(undefined4 *)((int)auStack_c + iVar3 + 8) = uVar4;
  *(undefined4 *)((int)auStack_c + iVar3 + 4) = **(undefined4 **)(DAT_00208f98 + 0x208d36);
  iVar5 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar5 * 4 + *(int *)((int)auStack_c + iVar3 + 4)));
  uVar4 = __mulsf3(uVar4,**(undefined4 **)((int)auStack_c + iVar3));
  __subsf3(*(undefined4 *)((int)auStack_c + iVar3 + 8),uVar4);
  uVar4 = __fixsfsi();
  (**(code **)(&stack0x00000000 + iVar3))
            (piVar13,uVar4,*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x10));
  piVar13 = (int *)**(undefined4 **)(&stack0xfffffff0 + iVar3);
  pcVar11 = *(code **)(*piVar13 + 0x44);
  String::String((String *)(&stack0x00000024 + iVar3),(String *)(param_2 + 8));
  (*pcVar11)(piVar13,&stack0x00000024 + iVar3);
  String::~String((String *)(&stack0x00000024 + iVar3));
  (**(code **)(*(int *)**(undefined4 **)(&stack0xfffffff0 + iVar3) + 0x20))
            ((int *)**(undefined4 **)(&stack0xfffffff0 + iVar3),1);
  piVar13 = *(int **)(param_1 + 0xbc);
  iVar5 = *(int *)param_2;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)(*piVar13 + 0x44);
  String::String((String *)(&stack0x0000002c + iVar3),(String *)(iVar5 + DAT_00208f9c));
  (**(code **)(&stack0xfffffff0 + iVar3))(piVar13,&stack0x0000002c + iVar3);
  String::~String((String *)(&stack0x0000002c + iVar3));
  piVar13 = *(int **)(param_1 + 0xbc);
  (**(code **)(*piVar13 + 0x20))(piVar13,1);
  this = *(CharacterPortrait **)(param_1 + 0xdc);
  *puVar15 = 0;
  *(undefined4 *)(&stack0xffffffe8 + iVar3) = 1;
  CharacterPortrait::setCharacter
            (this,param_2,true,false,(bool)*puVar16,(bool)(&stack0xffffffe8)[iVar3]);
  String::String((String *)(&stack0x00000034 + iVar3),(char *)(DAT_00208fa0 + 0x208dde));
  String::String((String *)(&stack0x0000003c + iVar3),(char *)(DAT_00208fa4 + 0x208de8));
  String::String((String *)(&stack0x00000044 + iVar3),(char *)(DAT_00208fa8 + 0x208df2));
  String::operator+((String *)(&stack0x0000004c + iVar3),&stack0x0000003c + iVar3,
                    &stack0x00000044 + iVar3);
  String::String((String *)(&stack0x00000054 + iVar3),(char *)(DAT_00208fac + 0x208e06));
  String::operator+((String *)(&stack0x0000005c + iVar3),&stack0x0000004c + iVar3,
                    &stack0x00000054 + iVar3);
  String::String((String *)(&stack0x00000064 + iVar3),(char *)(DAT_00208fb0 + 0x208e1a));
  String::operator+((String *)(&stack0x0000006c + iVar3),&stack0x0000005c + iVar3,
                    &stack0x00000064 + iVar3);
  String::String((String *)(&stack0x00000074 + iVar3),(char *)(DAT_00208fb4 + 0x208e2e));
  String::operator+((String *)(&stack0x0000007c + iVar3),&stack0x0000006c + iVar3,
                    &stack0x00000074 + iVar3);
  String::String((String *)(&stack0x00000084 + iVar3),(char *)(DAT_00208fb8 + 0x208e42));
  String::operator+((String *)(&stack0x0000008c + iVar3),&stack0x0000007c + iVar3,
                    &stack0x00000084 + iVar3);
  String::String((String *)(&stack0x00000094 + iVar3),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x4b0) + 8) +
                 **(int **)(DAT_00208fbc + 0x208e5e) * 8));
  String::operator+((String *)(&stack0x0000009c + iVar3),&stack0x0000008c + iVar3,
                    &stack0x00000094 + iVar3);
  String::String((String *)(&stack0x000000a4 + iVar3),(char *)(DAT_00208fc0 + 0x208e7c));
  String::operator+((String *)(&stack0x000000ac + iVar3),&stack0x0000009c + iVar3,
                    &stack0x000000a4 + iVar3);
  String::String((String *)(&stack0x000000b4 + iVar3),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x4b0) + 8) +
                 **(int **)(DAT_00208fc4 + 0x208e94) * 8));
  String::operator+((String *)(&stack0x000000bc + iVar3),&stack0x000000ac + iVar3,
                    &stack0x000000b4 + iVar3);
  String::String((String *)(&stack0x000000c4 + iVar3),(char *)(DAT_00208fc8 + 0x208eb2));
  String::operator+((String *)(&stack0x000000cc + iVar3),&stack0x000000bc + iVar3,
                    &stack0x000000c4 + iVar3);
  String::String((String *)(&stack0x000000d4 + iVar3),(char *)(DAT_00208fcc + 0x208ec6));
  String::operator+((String *)(&stack0x000000dc + iVar3),&stack0x000000cc + iVar3,
                    &stack0x000000d4 + iVar3);
  String::operator+=((String *)(&stack0x00000034 + iVar3),&stack0x000000dc + iVar3);
  String::~String((String *)(&stack0x000000dc + iVar3));
  String::~String((String *)(&stack0x000000d4 + iVar3));
  String::~String((String *)(&stack0x000000cc + iVar3));
  String::~String((String *)(&stack0x000000c4 + iVar3));
  String::~String((String *)(&stack0x000000bc + iVar3));
  String::~String((String *)(&stack0x000000b4 + iVar3));
  String::~String((String *)(&stack0x000000ac + iVar3));
  String::~String((String *)(&stack0x000000a4 + iVar3));
  String::~String((String *)(&stack0x0000009c + iVar3));
  String::~String((String *)(&stack0x00000094 + iVar3));
  String::~String((String *)(&stack0x0000008c + iVar3));
  String::~String((String *)(&stack0x00000084 + iVar3));
  String::~String((String *)(&stack0x0000007c + iVar3));
  String::~String((String *)(&stack0x00000074 + iVar3));
  String::~String((String *)(&stack0x0000006c + iVar3));
  String::~String((String *)(&stack0x00000064 + iVar3));
  String::~String((String *)(&stack0x0000005c + iVar3));
  String::~String((String *)(&stack0x00000054 + iVar3));
  String::~String((String *)(&stack0x0000004c + iVar3));
  String::~String((String *)(&stack0x00000044 + iVar3));
  String::~String((String *)(&stack0x0000003c + iVar3));
  piVar13 = *(int **)(param_1 + 0xcc);
  if ((int)*(short *)(param_1 + 0x92) < *(int *)(*(int *)(param_1 + 0x70) + 0x30)) {
    (**(code **)(*piVar13 + 0x20))(piVar13,1);
    iVar5 = (int)*(short *)(param_1 + 0x92);
    piVar13 = *(int **)(param_1 + 0xd0);
    pcVar11 = *(code **)(*piVar13 + 0x20);
    if (iVar5 != 0) {
      iVar5 = 1;
    }
  }
  else {
    (**(code **)(*piVar13 + 0x20))(piVar13,0);
    piVar13 = *(int **)(param_1 + 0xd0);
    iVar5 = 0;
    pcVar11 = *(code **)(*piVar13 + 0x20);
  }
  (*pcVar11)(piVar13,iVar5);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)auStack_c + iVar3) = uVar4;
  *(uint *)((int)auStack_c + iVar3 + 4) = (uint)*(ushort *)(param_1 + 0x90);
  uVar4 = Character::getCanEquipeAmpouleNum(param_2);
  uVar8 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)auStack_c + iVar3 + 8) = uVar4;
  *(undefined4 *)(&stack0x00000004 + iVar3) = uVar8;
  uVar4 = Character::getMaxEnergyBase();
  *(undefined4 *)(&stack0x00000008 + iVar3) = uVar4;
  *(uint *)(&stack0x0000000c + iVar3) = (uint)*(ushort *)(param_1 + 0x7e);
  uVar4 = Character::getSpeedBaseParam(param_2);
  *(undefined4 *)(&stack0x00000014 + iVar3) = uVar4;
  *(uint *)(&stack0x00000010 + iVar3) = (uint)*(ushort *)(param_1 + 0x80);
  uVar4 = Character::getAttackBasePower();
  piVar13 = *(int **)(param_1 + 0xc0);
  *(undefined4 *)(&stack0x00000018 + iVar3) = uVar4;
  pcVar11 = *(code **)(*piVar13 + 0x44);
  String::String((String *)(&stack0x000000e4 + iVar3),(String *)(&stack0x00000034 + iVar3));
  (*pcVar11)(piVar13,&stack0x000000e4 + iVar3);
  String::~String((String *)(&stack0x000000e4 + iVar3));
  *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0xc4) = 0;
  piVar13 = *(int **)(param_1 + 0xc0);
  (**(code **)(*piVar13 + 0x20))(piVar13,1);
  String::String((String *)(&stack0x000000ec + iVar3),(char *)(DAT_0020928c + 0x209066));
  String::valueOf((int)(&stack0x000000f4 + iVar3));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x000000f4 + iVar3);
  String::~String((String *)(&stack0x000000f4 + iVar3));
  uVar1 = (uint)(*(int *)(&stack0xfffffff0 + iVar3) != *(int *)((int)auStack_c + iVar3));
  *(uint *)(&stack0x00000000 + iVar3) = uVar1;
  if (uVar1 == 0) {
    String::String((String *)(&stack0x00000104 + iVar3),(char *)(DAT_00209294 + 0x2090ae));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000104 + iVar3);
    puVar2 = &stack0x00000104;
  }
  else {
    String::String((String *)(&stack0x000000fc + iVar3),(char *)(DAT_00209290 + 0x209098));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x000000fc + iVar3);
    puVar2 = &stack0x000000fc;
  }
  String::~String((String *)(puVar2 + iVar3));
  String::String((String *)(&stack0x0000010c + iVar3),(char *)(DAT_00209298 + 0x2090c6));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000010c + iVar3);
  String::~String((String *)(&stack0x0000010c + iVar3));
  String::valueOf((int)(&stack0x00000114 + iVar3));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000114 + iVar3);
  String::~String((String *)(&stack0x00000114 + iVar3));
  uVar1 = (uint)((int)(short)*(undefined4 *)((int)auStack_c + iVar3 + 4) !=
                *(int *)((int)auStack_c + iVar3 + 8));
  *(uint *)((int)auStack_c + iVar3 + 4) = uVar1;
  if (uVar1 == 0) {
    String::String((String *)(&stack0x00000124 + iVar3),(char *)(DAT_002092a0 + 0x209126));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000124 + iVar3);
    puVar2 = &stack0x00000124;
  }
  else {
    String::String((String *)(&stack0x0000011c + iVar3),(char *)(DAT_0020929c + 0x209110));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000011c + iVar3);
    puVar2 = &stack0x0000011c;
  }
  String::~String((String *)(puVar2 + iVar3));
  String::String((String *)(&stack0x0000012c + iVar3),(char *)(DAT_002092a4 + 0x20913e));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000012c + iVar3);
  String::~String((String *)(&stack0x0000012c + iVar3));
  __fixsfsi(*(undefined4 *)(param_1 + 0x8c));
  String::valueOf((int)(&stack0x00000134 + iVar3));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000134 + iVar3);
  String::~String((String *)(&stack0x00000134 + iVar3));
  iVar5 = __fixsfsi(*(undefined4 *)(&stack0x00000004 + iVar3));
  iVar9 = *(int *)(&stack0x00000008 + iVar3);
  *(uint *)((int)auStack_c + iVar3 + 8) = (uint)(iVar5 != iVar9);
  if ((iVar5 != iVar9) == 0) {
    String::String((String *)(&stack0x00000144 + iVar3),(char *)(DAT_002092ac + 0x2091a2));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000144 + iVar3);
    puVar2 = &stack0x00000144;
  }
  else {
    String::String((String *)(&stack0x0000013c + iVar3),(char *)(DAT_002092a8 + 0x20918c));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000013c + iVar3);
    puVar2 = &stack0x0000013c;
  }
  String::~String((String *)(puVar2 + iVar3));
  String::String((String *)(&stack0x0000014c + iVar3),(char *)(DAT_002092b0 + 0x2091ba));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000014c + iVar3);
  String::~String((String *)(&stack0x0000014c + iVar3));
  String::valueOf((int)(&stack0x00000154 + iVar3));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000154 + iVar3);
  String::~String((String *)(&stack0x00000154 + iVar3));
  uVar1 = (uint)((int)(short)*(undefined4 *)(&stack0x0000000c + iVar3) !=
                *(int *)(&stack0x00000014 + iVar3));
  *(uint *)((int)auStack_c + iVar3) = uVar1;
  if (uVar1 == 0) {
    String::String((String *)(&stack0x00000164 + iVar3),(char *)(DAT_002092b8 + 0x20921a));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000164 + iVar3);
    puVar2 = &stack0x00000164;
  }
  else {
    String::String((String *)(&stack0x0000015c + iVar3),(char *)(DAT_002092b4 + 0x209204));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000015c + iVar3);
    puVar2 = &stack0x0000015c;
  }
  String::~String((String *)(puVar2 + iVar3));
  String::String((String *)(&stack0x0000016c + iVar3),(char *)(DAT_002092bc + 0x209232));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000016c + iVar3);
  String::~String((String *)(&stack0x0000016c + iVar3));
  String::valueOf((int)(&stack0x00000174 + iVar3));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000174 + iVar3);
  String::~String((String *)(&stack0x00000174 + iVar3));
  uVar1 = (uint)((int)(short)*(undefined4 *)(&stack0x00000010 + iVar3) !=
                *(int *)(&stack0x00000018 + iVar3));
  *(uint *)(&stack0xfffffff0 + iVar3) = uVar1;
  if (uVar1 == 0) {
    String::String((String *)(&stack0x00000184 + iVar3),(char *)(DAT_00209680 + 0x2092cc));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x00000184 + iVar3);
    puVar2 = &stack0x00000184;
  }
  else {
    String::String((String *)(&stack0x0000017c + iVar3),(char *)(DAT_002092c0 + 0x20927c));
    String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000017c + iVar3);
    puVar2 = &stack0x0000017c;
  }
  String::~String((String *)(puVar2 + iVar3));
  String::String((String *)(&stack0x0000018c + iVar3),(char *)(DAT_00209684 + 0x2092e4));
  String::operator+=((String *)(&stack0x000000ec + iVar3),&stack0x0000018c + iVar3);
  String::~String((String *)(&stack0x0000018c + iVar3));
  piVar13 = *(int **)(param_1 + 0xc4);
  pcVar11 = *(code **)(*piVar13 + 0x44);
  String::String((String *)(&stack0x00000194 + iVar3),(String *)(&stack0x000000ec + iVar3));
  (*pcVar11)(piVar13,&stack0x00000194 + iVar3);
  String::~String((String *)(&stack0x00000194 + iVar3));
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(*(int **)(param_1 + 0xc4),1);
  String::String((String *)(&stack0x0000019c + iVar3),(char *)(DAT_00209688 + 0x209328));
  if (*(int *)(&stack0x00000000 + iVar3) != 0) {
    String::valueOf((int)(&stack0x000001a4 + iVar3));
    String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001a4 + iVar3);
    String::~String((String *)(&stack0x000001a4 + iVar3));
  }
  String::String((String *)(&stack0x000001ac + iVar3),(char *)(DAT_0020968c + 0x20934e));
  String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001ac + iVar3);
  String::~String((String *)(&stack0x000001ac + iVar3));
  if (*(int *)((int)auStack_c + iVar3 + 4) != 0) {
    Character::getCanEquipeAmpouleNum(param_2);
    String::valueOf((int)(&stack0x000001b4 + iVar3));
    String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001b4 + iVar3);
    String::~String((String *)(&stack0x000001b4 + iVar3));
  }
  String::String((String *)(&stack0x000001bc + iVar3),(char *)(DAT_00209690 + 0x209388));
  String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001bc + iVar3);
  String::~String((String *)(&stack0x000001bc + iVar3));
  if (*(int *)((int)auStack_c + iVar3 + 8) != 0) {
    Character::getMaxEnergyBase();
    String::valueOf((int)(&stack0x000001c4 + iVar3));
    String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001c4 + iVar3);
    String::~String((String *)(&stack0x000001c4 + iVar3));
  }
  String::String((String *)(&stack0x000001cc + iVar3),(char *)(DAT_00209694 + 0x2093c2));
  String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001cc + iVar3);
  String::~String((String *)(&stack0x000001cc + iVar3));
  if (*(int *)((int)auStack_c + iVar3) != 0) {
    Character::getSpeedBaseParam(param_2);
    fVar17 = (float)__floatsisf();
    roundf(fVar17);
    __fixsfsi();
    String::valueOf((int)(&stack0x000001d4 + iVar3));
    String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001d4 + iVar3);
    String::~String((String *)(&stack0x000001d4 + iVar3));
  }
  String::String((String *)(&stack0x000001dc + iVar3),(char *)(DAT_00209698 + 0x209408));
  String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001dc + iVar3);
  String::~String((String *)(&stack0x000001dc + iVar3));
  if (*(int *)(&stack0xfffffff0 + iVar3) != 0) {
    Character::getAttackBasePower();
    fVar17 = (float)__floatsisf();
    roundf(fVar17);
    __fixsfsi();
    String::valueOf((int)(&stack0x000001e4 + iVar3));
    String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001e4 + iVar3);
    String::~String((String *)(&stack0x000001e4 + iVar3));
  }
  String::String((String *)(&stack0x000001ec + iVar3),(char *)(DAT_0020969c + 0x20944e));
  String::operator+=((String *)(&stack0x0000019c + iVar3),&stack0x000001ec + iVar3);
  String::~String((String *)(&stack0x000001ec + iVar3));
  piVar13 = *(int **)(param_1 + 200);
  pcVar11 = *(code **)(*piVar13 + 0x44);
  String::String((String *)(&stack0x000001f4 + iVar3),(String *)(&stack0x0000019c + iVar3));
  (*pcVar11)(piVar13,&stack0x000001f4 + iVar3);
  String::~String((String *)(&stack0x000001f4 + iVar3));
  (**(code **)(**(int **)(param_1 + 200) + 0x20))(*(int **)(param_1 + 200),1);
  if (*(int *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(int *)param_1 + 0x34))(param_1);
    if (*(int **)(*(int *)(param_1 + 0xa8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa8) + 100) + 4))();
    }
    if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa8) + 4))();
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if ((*(Character **)(*(int *)(param_1 + 0x6c) + 0x590) != param_2) &&
     (iVar5 = Character::getRareValueIconIdx(param_2), iVar5 != -1)) {
    pcVar11 = *(code **)(*(int *)param_1 + 0x2c);
    pCVar6 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(param_1 + 0x6c) + DAT_002096a0),iVar5,false);
    pIVar7 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar7,pCVar6,'!',true);
    *(ImageElement **)(param_1 + 0xa8) = pIVar7;
    (*pcVar11)(param_1,pIVar7);
    iVar5 = *(int *)(param_1 + 0xbc);
    piVar13 = *(int **)(param_1 + 0xa8);
    (**(code **)(*piVar13 + 0x14))
              (piVar13,(*(int *)(iVar5 + 4) - *(int *)(iVar5 + 0xc) / 2) + -10,
               *(undefined4 *)(iVar5 + 8));
  }
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x20))(*(int **)(param_1 + 0x9c),1);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x20))(*(int **)(param_1 + 0x98),1);
  piVar13 = *(int **)(param_1 + 0xc0);
  pPVar12 = param_1 + 0xd8;
  (**(code **)(*piVar13 + 0x18))(piVar13,*(undefined4 *)(*(int *)pPVar12 + 0xc),piVar13[4]);
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x18))
            (*(int **)(param_1 + 0xc4),*(undefined4 *)(*(int *)pPVar12 + 0xc),
             *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x10));
  (**(code **)(**(int **)(param_1 + 200) + 0x18))
            (*(int **)(param_1 + 200),*(undefined4 *)(*(int *)pPVar12 + 0xc),
             *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x10));
  piVar13 = *(int **)(param_1 + 0xc0);
  pcVar11 = *(code **)(*piVar13 + 0x14);
  iVar5 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(DAT_002096a4 + iVar5 * 4 + 0x2095a2));
  uVar4 = __mulsf3(uVar4,*(undefined4 *)(param_1 + 0xec));
  __addsf3(uVar4,0);
  uVar4 = __fixsfsi();
  (*pcVar11)(piVar13,0,uVar4);
  piVar13 = *(int **)(param_1 + 0xc4);
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)(*piVar13 + 0x14);
  iVar5 = SmDev();
  uVar8 = *(undefined4 *)(DAT_002096a8 + iVar5 * 4 + 0x2095f4);
  uVar14 = *(undefined4 *)(param_1 + 0xe8);
  uVar4 = SmDev();
  *(undefined4 *)((int)auStack_c + iVar3) = uVar4;
  uVar4 = __floatsisf(uVar8);
  __mulsf3(uVar4,uVar14);
  uVar4 = __fixsfsi();
  uVar8 = __floatsisf(*(undefined4 *)
                       (DAT_002096ac + *(int *)((int)auStack_c + iVar3) * 4 + 0x209606));
  uVar8 = __mulsf3(uVar8,*(undefined4 *)(param_1 + 0xec));
  __addsf3(uVar8,0);
  uVar8 = __fixsfsi();
  (**(code **)(&stack0xfffffff0 + iVar3))(piVar13,uVar4,uVar8);
  piVar13 = *(int **)(param_1 + 200);
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)(*piVar13 + 0x14);
  iVar5 = SmDev();
  uVar8 = *(undefined4 *)(DAT_002096b0 + iVar5 * 4 + 0x209672);
  uVar14 = *(undefined4 *)(param_1 + 0xe8);
  uVar4 = SmDev();
  *(undefined4 *)((int)auStack_c + iVar3) = uVar4;
  uVar4 = __floatsisf(uVar8);
  __mulsf3(uVar4,uVar14);
  uVar4 = __fixsfsi();
  uVar8 = __floatsisf(*(undefined4 *)
                       (DAT_002096b4 + *(int *)((int)auStack_c + iVar3) * 4 + 0x20966c));
  uVar8 = __mulsf3(uVar8,*(undefined4 *)(param_1 + 0xec));
  __addsf3(uVar8,0);
  uVar8 = __fixsfsi();
  (**(code **)(&stack0xfffffff0 + iVar3))(piVar13,uVar4,uVar8);
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x18))
            (*(int **)(param_1 + 0xd8),*(undefined4 *)(*(int *)(param_1 + 0xd4) + 0xc),
             *(int *)(*(int *)(param_1 + 0xc0) + 8) + *(int *)(*(int *)(param_1 + 0xc0) + 0x10));
  layout(param_1);
  if ((int)*(short *)(param_1 + 0x92) < *(int *)(*(int *)(param_1 + 0x70) + 0x30)) {
    if (*(int *)(param_1 + 0xac) != 0) {
      (**(code **)(*(int *)param_1 + 0x34))(param_1);
      if (*(int **)(*(int *)(param_1 + 0xac) + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 100) + 4))();
      }
      if (*(int **)(param_1 + 0xac) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xac) + 4))();
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    iVar5 = Character::getSameZombiePowerupIconIdx_Static((int)*(short *)(param_1 + 0x92));
    if (iVar5 != -1) {
      pcVar11 = *(code **)(*(int *)param_1 + 0x2c);
      pCVar6 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(param_1 + 0x6c) + DAT_00209a70),iVar5,false);
      pIVar7 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar7,pCVar6,'\x11',true);
      *(ImageElement **)(param_1 + 0xac) = pIVar7;
      (*pcVar11)(param_1,pIVar7);
      piVar13 = *(int **)(param_1 + 0xac);
      (**(code **)(*piVar13 + 0x14))
                (piVar13,*(int *)(*(int *)(param_1 + 0xd0) + 4) - piVar13[3],
                 *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8));
      uVar18 = __mulsf3(*(undefined4 *)(param_1 + 0xec),DAT_00209a74);
      ImageElement::setScale
                (*(ImageElement **)(param_1 + 0xac),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20)
                );
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      (**(code **)(*(int *)param_1 + 0x34))(param_1);
      if (*(int **)(*(int *)(param_1 + 0xb0) + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0xb0) + 100) + 4))();
      }
      if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xb0) + 4))();
      }
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    iVar9 = Character::getSameZombiePowerupIconIdx_Static(*(int *)(*(int *)(param_1 + 0x70) + 0x30))
    ;
    if (iVar9 != -1) {
      iVar10 = *(int *)(param_1 + 0x6c);
      *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)(*(int *)param_1 + 0x2c);
      pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar10 + DAT_00209a70),iVar9,false)
      ;
      pIVar7 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar7,pCVar6,'\x11',true);
      *(ImageElement **)(param_1 + 0xb0) = pIVar7;
      (**(code **)(&stack0xfffffff0 + iVar3))(param_1,pIVar7);
      uVar18 = __mulsf3(*(undefined4 *)(param_1 + 0xec),DAT_00209a74);
      ImageElement::setScale
                (*(ImageElement **)(param_1 + 0xb0),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20)
                );
      piVar13 = *(int **)(param_1 + 0xb0);
      iVar9 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
      if (iVar5 != -1) {
        iVar9 = iVar9 + piVar13[3];
      }
      (**(code **)(*piVar13 + 0x14))(piVar13,iVar9,*(undefined4 *)(*(int *)(param_1 + 0xd0) + 8));
    }
  }
  String::~String((String *)(&stack0x0000019c + iVar3));
  String::~String((String *)(&stack0x000000ec + iVar3));
  String::~String((String *)(&stack0x00000034 + iVar3));
  return;
}


