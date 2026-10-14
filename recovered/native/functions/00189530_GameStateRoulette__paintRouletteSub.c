/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189530 GameStateRoulette::paintRouletteSub */

/* GameStateRoulette::paintRouletteSub(int, CapcomGraphics*) */

void __thiscall
GameStateRoulette::paintRouletteSub(GameStateRoulette *this,int param_1,CapcomGraphics *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_r1;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  CharacterInstance *this_00;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar8 = param_1 + 0x24;
  uVar1 = __floatsisf((int)*(short *)(*(int *)(this + iVar8 * 4 + 4) + 6));
  iVar2 = SmDev();
  iVar9 = DAT_001896b8 + 0x18955c;
  uVar3 = __mulsf3(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x10),0x3f000000);
  uVar3 = __subsf3(0,uVar3);
  iVar2 = __aeabi_fcmplt(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x12));
    iVar2 = SmDev();
    uVar4 = __mulsf3(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x10),0x3f000000);
    uVar3 = __addsf3(uVar3,uVar4);
    iVar2 = __aeabi_fcmpgt(uVar1,uVar3);
    if (iVar2 == 0) {
      if (this[0x9f0] == (GameStateRoulette)0x0) {
        (**(code **)(**(int **)(this + iVar8 * 4 + 4) + 8))(*(int **)(this + iVar8 * 4 + 4),param_2)
        ;
        piVar5 = *(int **)(this + (param_1 + 0xce) * 4 + 4);
        if (piVar5 == (int *)0x0) {
          return;
        }
        pcVar7 = *(code **)(*piVar5 + 0xc);
      }
      else {
        iVar2 = SmDev();
        iVar9 = DAT_001896bc + 0x1895ba;
        iVar2 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar9));
        iVar2 = iVar2 - *(short *)(*(int *)(this + iVar8 * 4 + 4) + 6);
        uVar6 = iVar2 >> 0x1f;
        __floatsisf(iVar2 + uVar6 ^ uVar6);
        uVar11 = __extendsfdf2();
        iVar2 = SmDev();
        uVar12 = __extendsfdf2(*(undefined4 *)(iVar2 * 4 + iVar9));
        uVar12 = __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_001896a8,DAT_001896ac);
        uVar11 = __divdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
        __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_001896b0,DAT_001896b4);
        uVar1 = __truncdfsf2();
        iVar2 = __aeabi_fcmpgt(uVar1,DAT_001896c0);
        if (iVar2 != 0) {
          uVar1 = DAT_001896c0;
        }
        iVar2 = __fixsfsi(uVar1);
        if (iVar2 < 0) {
          iVar2 = -iVar2;
          iVar8 = DAT_001896c8 + 0x18962a;
        }
        else {
          iVar8 = DAT_001896c4 + 0x189622;
        }
        __aeabi_idivmod(iVar2,0x168);
        uVar1 = *(undefined4 *)(iVar8 + extraout_r1 * 4 + 0x38);
        this_00 = *(CharacterInstance **)(this + (param_1 + 0x24) * 4 + 4);
        iVar2 = SmDev();
        iVar2 = DAT_001896cc + iVar2 * 4;
        uVar1 = __floatsisf(uVar1);
        uVar1 = __mulsf3(uVar1,0x37800000);
        fVar10 = (float)__mulsf3(uVar1,*(undefined4 *)(iVar2 + 0x189656));
        CharacterInstance::setScale(this_00,fVar10);
        piVar5 = *(int **)(this + (param_1 + 0x24) * 4 + 4);
        pcVar7 = *(code **)(*piVar5 + 8);
      }
      (*pcVar7)(piVar5,param_2);
    }
  }
  return;
}


