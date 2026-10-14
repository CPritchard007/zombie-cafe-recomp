/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001655d4 GameStateMap::bossCafeTransition */

/* GameStateMap::bossCafeTransition() */

void __thiscall GameStateMap::bossCafeTransition(GameStateMap *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  CImage *this_00;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float extraout_s0;
  int *local_6c;
  int *local_68;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  String aSStack_3c [12];
  byte local_30;
  undefined1 local_1b;
  
  *(int *)(this + 0x48) = *(int *)(this + 0xd4);
  MapCafe::MapCafe((MapCafe *)&local_6c,
                   (MapCafe *)(*(int *)(this + 0xd8) + *(int *)(this + 0xd4) * 0x54));
  iVar6 = *(int *)(this + 0xc);
  iVar2 = CFPoint::subtract(*(long *)(iVar6 + 0x14),CONCAT22((short)local_6c[1],(short)local_6c[2]))
  ;
  iVar7 = iVar2 >> 0x10;
  uVar3 = __floatsisf(iVar7);
  uVar3 = __divsf3(uVar3,DAT_001657b8);
  *(undefined4 *)(this + 0xa4) = uVar3;
  uVar3 = __floatsisf((int)(short)iVar2);
  uVar3 = __divsf3(uVar3,DAT_001657b8);
  *(undefined4 *)(this + 0xa8) = uVar3;
  if ((iVar7 < 0x96) && (iVar7 + 0x95 < 0 == SCARRY4(iVar7,0x95))) {
    if (*(int *)(this + 0x50) < 10) {
      if (*(int *)(this + 0x50) == 3) {
        ZombieCafe::playEffect(iVar6,extraout_s0);
        if (local_68 != (int *)0x0) {
          (**(code **)(*local_68 + 0x20))(local_68,0);
          (**(code **)(*local_60 + 0x20))(local_60,0);
          (**(code **)(*local_5c + 0x20))(local_5c,0);
          (**(code **)(*local_58 + 0x20))(local_58,0);
          (**(code **)(*local_54 + 0x20))(local_54,0);
        }
        if ((int *)local_6c[0x18] != (int *)0x0) {
          (**(code **)(*(int *)local_6c[0x18] + 4))();
        }
        this_00 = (CImage *)
                  PackedImage::getImage
                            (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),
                             *(int *)((uint)local_30 * 4 + *(int *)(DAT_001657bc + 0x1656c8)),false)
        ;
        piVar1 = local_6c;
        local_6c[0x18] = (int)this_00;
        pcVar5 = *(code **)(*local_6c + 0x18);
        uVar3 = CImage::getWidth(this_00);
        iVar2 = CapcomApp::getInstance();
        uVar8 = *(undefined4 *)(iVar2 + 0x40);
        uVar4 = CImage::getHeight((CImage *)local_6c[0x18]);
        iVar2 = CapcomApp::getInstance();
        uVar3 = __floatsisf(uVar3);
        __mulsf3(uVar3,uVar8);
        uVar3 = __fixsfsi();
        uVar4 = __floatsisf(uVar4);
        __mulsf3(uVar4,*(undefined4 *)(iVar2 + 0x44));
        uVar4 = __fixsfsi();
        (*pcVar5)(piVar1,uVar3,uVar4);
      }
      (**(code **)(*local_50 + 0x20))(local_50,1);
      local_50[0x19] = *(int *)(this + (*(int *)(this + 0x50) + 0x14) * 4 + 4);
      pcVar5 = *(code **)(*local_50 + 0x18);
      uVar3 = CImage::getWidth(*(CImage **)(this + (*(int *)(this + 0x50) + 0x14) * 4 + 4));
      iVar2 = CapcomApp::getInstance();
      uVar8 = *(undefined4 *)(iVar2 + 0x40);
      uVar4 = CImage::getHeight(*(CImage **)(this + (*(int *)(this + 0x50) + 0x14) * 4 + 4));
      iVar2 = CapcomApp::getInstance();
      uVar3 = __floatsisf(uVar3);
      __mulsf3(uVar3,uVar8);
      uVar3 = __fixsfsi();
      uVar4 = __floatsisf(uVar4);
      __mulsf3(uVar4,*(undefined4 *)(iVar2 + 0x44));
      uVar4 = __fixsfsi();
      (*pcVar5)(local_50,uVar3,uVar4);
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
    }
    else {
      this[0x4d] = (GameStateMap)0x0;
      (**(code **)(*local_50 + 0x20))(local_50,0);
      local_1b = 0;
      *(undefined4 *)(this + 0x50) = 0;
    }
  }
  String::~String(aSStack_3c);
  return;
}


