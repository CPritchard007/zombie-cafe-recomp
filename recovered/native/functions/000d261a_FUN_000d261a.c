/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d261a FUN_000d261a */

void FUN_000d261a(String *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  int iVar5;
  CharacterDetails *pCVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  CharacterDetails *unaff_r5;
  Character *unaff_r6;
  code *pcVar10;
  CharacterDetails *pCVar11;
  int in_stack_00000010;
  
  String::~String(param_1);
  pCVar6 = unaff_r5 + 0xec;
  piVar9 = *(int **)pCVar6;
  pcVar10 = *(code **)(*piVar9 + 0x18);
  iVar1 = SmDev();
  (*pcVar10)(piVar9,*(undefined4 *)(iVar1 * 4 + *(int *)(in_stack_00000010 + DAT_000d28b4)),0);
  pCVar11 = unaff_r5 + 0xf4;
  piVar9 = *(int **)pCVar11;
  (**(code **)(*piVar9 + 0x18))(piVar9,*(undefined4 *)(*(int *)(unaff_r5 + 0x108) + 0xc),piVar9[4]);
  piVar9 = *(int **)(unaff_r5 + 0xfc);
  (**(code **)(*piVar9 + 0x18))
            (piVar9,*(undefined4 *)(*(int *)(unaff_r5 + 0x108) + 0xc),
             *(undefined4 *)(*(int *)pCVar11 + 0x10));
  piVar9 = *(int **)pCVar11;
  pcVar10 = *(code **)(*piVar9 + 0x14);
  iVar5 = *(int *)(*(int *)pCVar6 + 8);
  iVar7 = *(int *)(*(int *)pCVar6 + 0x10);
  iVar1 = SmDev();
  iVar3 = DAT_000d28b8 + 0xd2688;
  (*pcVar10)(piVar9,0,iVar5 + iVar7 + *(int *)(iVar3 + iVar1 * 4 + 0x10));
  piVar9 = *(int **)(unaff_r5 + 0xfc);
  pcVar10 = *(code **)(*piVar9 + 0x14);
  uVar8 = *(undefined4 *)(*(int *)(unaff_r5 + 0x104) + 0xc);
  iVar5 = *(int *)(*(int *)pCVar6 + 8);
  iVar7 = *(int *)(*(int *)pCVar6 + 0x10);
  iVar1 = SmDev();
  (*pcVar10)(piVar9,uVar8,iVar5 + iVar7 + *(int *)(iVar3 + iVar1 * 4 + 0x10));
  (**(code **)(**(int **)(unaff_r5 + 0x108) + 0x18))
            (*(int **)(unaff_r5 + 0x108),*(undefined4 *)(*(int *)(unaff_r5 + 0x104) + 0xc),
             *(int *)(*(int *)pCVar11 + 8) + *(int *)(*(int *)pCVar11 + 0x10));
  if (unaff_r6[0x35] == (Character)0x0) {
    Character::getMaxEnergy();
  }
  else {
    unaff_r6[0x35] = (Character)0x0;
    uVar8 = *(undefined4 *)(*(int *)unaff_r6 + DAT_000d28bc);
    iVar1 = Character::getRareValue(unaff_r6);
    __mulsf3(uVar8,*(undefined4 *)
                    ((*(int *)(unaff_r6 + 0x28) - 1U &
                     (int)~(*(int *)(unaff_r6 + 0x28) - 1U) >> 0x1f) * 0xc + iVar1 * 0xe10 +
                    DAT_000d28c0 + 0xd2712));
  }
  uVar8 = __fixsfsi();
  *(undefined4 *)(unaff_r5 + 0x11c) = uVar8;
  CharacterDetails::layout(unaff_r5);
  pCVar6 = unaff_r5 + 0x60;
  uVar4 = (uint)(byte)*pCVar6;
  if (uVar4 != 0) {
    FUN_000d2f52();
    uVar4 = extraout_r1;
  }
  if (unaff_r6[5] == (Character)0x2) {
    uVar4 = (uint)((*(int *)(unaff_r5 + 0x8c) >> 0x1f) - *(int *)(unaff_r5 + 0x8c)) >> 0x1f;
  }
  (**(code **)(*(int *)**(undefined4 **)(pCVar6 + 0xd8) + 0x20))
            ((int *)**(undefined4 **)(pCVar6 + 0xd8),uVar4);
  bVar2 = false;
  if (unaff_r6[5] == (Character)0x2) {
    bVar2 = *(int *)(unaff_r5 + 0x8c) < *(int *)(*(int *)(unaff_r5 + 0x74) + 4);
  }
  (**(code **)(*(int *)**(undefined4 **)(unaff_r5 + 0x13c) + 0x20))
            ((int *)**(undefined4 **)(unaff_r5 + 0x13c),bVar2);
  FUN_000d2f52();
  return;
}


