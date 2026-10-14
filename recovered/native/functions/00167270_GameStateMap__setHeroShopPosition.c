/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00167270 GameStateMap::setHeroShopPosition */

/* GameStateMap::setHeroShopPosition() */

void __thiscall GameStateMap::setHeroShopPosition(GameStateMap *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  String *this_00;
  int iVar5;
  int extraout_r1;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  String aSStack_38 [8];
  String aSStack_30 [8];
  StringUtil aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = *(int *)(this + 0xd4) + 2;
  if (*(int *)(this + 0x328) == 0) {
    iVar1 = *(int *)(this + 0xd4) + 1;
  }
  iVar8 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x1d8) != 0) {
    iVar6 = (((((iVar1 - (uint)(*(int *)(this + 0x2d4) == 0)) - (uint)(*(int *)(this + 0x280) == 0))
              - (uint)(*(int *)(this + 0x22c) == 0)) - (uint)(*(int *)(this + 0x37c) == 0)) -
            (uint)(*(int *)(this + 0x184) == 0)) + 6;
    iVar1 = __divsi3(iVar6,3);
    __aeabi_idivmod(iVar6,3);
    iVar6 = SmDev();
    if ((iVar6 == 3) || (iVar6 = SmDev(), iVar6 == 4)) {
      iVar10 = 0;
      iVar11 = 0;
      iVar6 = 0;
      iVar5 = 0;
    }
    else {
      iVar10 = -8;
      iVar11 = 8;
      __mulsf3(uVar2,DAT_001674fc);
      iVar6 = __fixsfsi();
      __mulsf3(uVar3,DAT_00167500);
      iVar5 = __fixsfsi();
    }
    positionCafe(this,(MapCafe *)(this + 0x1d8),iVar8 * iVar1,2 - extraout_r1,iVar10,iVar11,iVar6,
                 iVar5);
    iVar1 = DAT_001674f0;
    if (this[0x228] != (GameStateMap)0x0) {
      if (*(int *)(*(int *)(this + 0xc) + DAT_001674f0) < 1) {
        this[0x228] = (GameStateMap)0x0;
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(this + 0x1dc));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(this + 0x1e4));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(this + 0x1e8));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(this + 0x1ec));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(this + 0x1f0));
        if (*(int *)(this + 0x1dc) != 0) {
          piVar7 = *(int **)(*(int *)(this + 0x1dc) + 100);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 4))();
          }
          if (*(int **)(this + 0x1dc) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x1dc) + 4))();
          }
        }
        if (*(int *)(this + 0x1e4) != 0) {
          piVar7 = *(int **)(*(int *)(this + 0x1e4) + 0x60);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 4))();
          }
          if (*(int **)(this + 0x1e4) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x1e4) + 4))();
          }
        }
        if (*(int *)(this + 0x1e8) != 0) {
          piVar7 = *(int **)(*(int *)(this + 0x1e8) + 100);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 4))();
          }
          if (*(int **)(this + 0x1e8) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x1e8) + 4))();
          }
        }
        if (*(int **)(this + 0x1ec) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x1ec) + 4))();
        }
        if (*(int **)(this + 0x1f0) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x1f0) + 4))();
        }
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined4 *)(this + 0x1e8) = 0;
        *(undefined4 *)(this + 0x1ec) = 0;
        *(undefined4 *)(this + 0x1f0) = 0;
        piVar7 = *(int **)(this + 0x1f8);
        if (piVar7 == (int *)0x0) {
          return;
        }
        pcVar9 = *(code **)(*piVar7 + 0x44);
        String::String(aSStack_38,(char *)(DAT_001674f4 + 0x16743c));
        (*pcVar9)(piVar7,aSStack_38);
        this_00 = aSStack_38;
      }
      else {
        piVar7 = *(int **)(this + 0x1f8);
        pcVar9 = *(code **)(*piVar7 + 0x44);
        Vector<String>::elementAt((int)aSStack_30);
        uVar4 = __divsi3(*(undefined4 *)(*(int *)(this + 0xc) + iVar1),1000);
        StringUtil::createTimeString(aSStack_28,uVar4,'\x02');
        String::operator+(aSStack_20,aSStack_30,aSStack_28);
        (*pcVar9)(piVar7,aSStack_20);
        String::~String(aSStack_20);
        String::~String((String *)aSStack_28);
        this_00 = aSStack_30;
      }
      String::~String(this_00);
    }
  }
  return;
}


