/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193978 GameStateDoJo::rouletteInstructorPaintSub */

/* GameStateDoJo::rouletteInstructorPaintSub(int, CapcomGraphics*) */

void __thiscall
GameStateDoJo::rouletteInstructorPaintSub(GameStateDoJo *this,int param_1,CapcomGraphics *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_r1;
  CharacterInstance *this_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar7 = (param_1 + 0x186) * 4;
  uVar1 = __floatsisf((int)*(short *)(*(int *)(this + iVar7) + 6));
  iVar2 = SmDev();
  iVar6 = DAT_00193ae0 + 0x1939a4;
  uVar3 = __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x18),0x3f000000);
  uVar3 = __subsf3(0,uVar3);
  iVar2 = __aeabi_fcmplt(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x12));
    iVar2 = SmDev();
    uVar4 = __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x18),0x3f000000);
    uVar3 = __addsf3(uVar3,uVar4);
    iVar2 = __aeabi_fcmpgt(uVar1,uVar3);
    if (iVar2 == 0) {
      if (this[DAT_00193af4] != (GameStateDoJo)0x0) {
        iVar2 = SmDev();
        iVar2 = __fixsfsi(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x30));
        iVar2 = iVar2 - *(short *)(*(int *)(this + iVar7) + 6);
        uVar5 = iVar2 >> 0x1f;
        __floatsisf(iVar2 + uVar5 ^ uVar5);
        uVar9 = __extendsfdf2();
        iVar2 = SmDev();
        uVar10 = __extendsfdf2(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x30));
        uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_00193ad0,DAT_00193ad4);
        uVar9 = __divdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                         (int)((ulonglong)uVar10 >> 0x20));
        __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_00193ad8,DAT_00193adc);
        uVar1 = __truncdfsf2();
        iVar2 = __aeabi_fcmpgt(uVar1,DAT_00193ae4);
        if (iVar2 != 0) {
          uVar1 = DAT_00193ae4;
        }
        iVar2 = __fixsfsi(uVar1);
        if (iVar2 < 0) {
          iVar2 = -iVar2;
          iVar6 = DAT_00193aec + 0x193a72;
        }
        else {
          iVar6 = DAT_00193ae8 + 0x193a6a;
        }
        __aeabi_idivmod(iVar2,0x168);
        iVar7 = (param_1 + 0x186) * 4;
        this_00 = *(CharacterInstance **)(this + iVar7);
        uVar1 = *(undefined4 *)(iVar6 + extraout_r1 * 4 + 0x38);
        iVar2 = SmDev();
        iVar2 = DAT_00193af0 + iVar2 * 4;
        uVar1 = __floatsisf(uVar1);
        uVar1 = __mulsf3(uVar1,0x37800000);
        fVar8 = (float)__mulsf3(uVar1,*(undefined4 *)((int)&DAT_00193ae0 + iVar2));
        CharacterInstance::setScale(this_00,fVar8);
      }
      (**(code **)(**(int **)(this + iVar7) + 8))(*(int **)(this + iVar7),param_2);
    }
  }
  return;
}


