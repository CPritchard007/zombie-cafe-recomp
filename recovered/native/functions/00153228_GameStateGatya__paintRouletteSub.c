/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153228 GameStateGatya::paintRouletteSub */

/* GameStateGatya::paintRouletteSub(int, CapcomGraphics*) */

void __thiscall
GameStateGatya::paintRouletteSub(GameStateGatya *this,int param_1,CapcomGraphics *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_r1;
  CharacterInstance *this_00;
  code *pcVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar7 = param_1 + 0x84;
  uVar1 = __floatsisf((int)*(short *)(*(int *)(this + iVar7 * 4 + 4) + 6));
  iVar2 = SmDev();
  iVar8 = DAT_001533e8 + 0x153254;
  uVar3 = __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 8),*(undefined4 *)(this + 0xf10));
  uVar3 = __mulsf3(uVar3,0x3f000000);
  uVar3 = __subsf3(0,uVar3);
  iVar2 = __aeabi_fcmplt(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x12));
    iVar2 = SmDev();
    uVar4 = __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 8),*(undefined4 *)(this + 0xf10));
    uVar4 = __mulsf3(uVar4,0x3f000000);
    uVar3 = __addsf3(uVar3,uVar4);
    iVar2 = __aeabi_fcmpgt(uVar1,uVar3);
    if (iVar2 == 0) {
      if (this[DAT_00153400] == (GameStateGatya)0x0) {
        (**(code **)(**(int **)(this + iVar7 * 4 + 4) + 8))(*(int **)(this + iVar7 * 4 + 4),param_2)
        ;
        piVar5 = *(int **)(this + (param_1 + 0x12e) * 4 + 4);
        if (piVar5 == (int *)0x0) {
          return;
        }
        pcVar6 = *(code **)(*piVar5 + 0xc);
      }
      else {
        iVar2 = SmDev();
        __fixsfsi(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x20));
        uVar1 = __floatsisf();
        uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0xf10));
        uVar3 = __floatsisf((int)*(short *)(*(int *)(this + iVar7 * 4 + 4) + 6));
        __subsf3(uVar1,uVar3);
        iVar2 = __fixsfsi();
        __floatsisf(iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f);
        uVar10 = __extendsfdf2();
        iVar2 = SmDev();
        __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x20),*(undefined4 *)(this + 0xf10));
        uVar11 = __extendsfdf2();
        uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_001533d8,DAT_001533dc);
        uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
        __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_001533e0,DAT_001533e4);
        uVar1 = __truncdfsf2();
        iVar2 = __aeabi_fcmpgt(uVar1,DAT_001533ec);
        if (iVar2 != 0) {
          uVar1 = DAT_001533ec;
        }
        iVar2 = __fixsfsi(uVar1);
        if (iVar2 < 0) {
          iVar2 = -iVar2;
          iVar7 = DAT_001533f4 + 0x153354;
        }
        else {
          iVar7 = DAT_001533f0 + 0x15334c;
        }
        __aeabi_idivmod(iVar2,0x168);
        uVar1 = *(undefined4 *)(iVar7 + extraout_r1 * 4 + 0x68);
        this_00 = *(CharacterInstance **)(this + (param_1 + 0x84) * 4 + 4);
        iVar2 = SmDev();
        iVar2 = DAT_001533f8 + iVar2 * 4;
        uVar1 = __floatsisf(uVar1);
        uVar1 = __mulsf3(uVar1,0x37800000);
        uVar1 = __mulsf3(uVar1,*(undefined4 *)(iVar2 + 0x153386));
        fVar9 = (float)__mulsf3(uVar1,*(undefined4 *)(this + DAT_001533fc));
        CharacterInstance::setScale(this_00,fVar9);
        piVar5 = *(int **)(this + (param_1 + 0x84) * 4 + 4);
        pcVar6 = *(code **)(*piVar5 + 8);
      }
      (*pcVar6)(piVar5,param_2);
    }
  }
  return;
}


