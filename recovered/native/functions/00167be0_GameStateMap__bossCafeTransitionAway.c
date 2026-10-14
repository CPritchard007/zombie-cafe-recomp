/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00167be0 GameStateMap::bossCafeTransitionAway */

/* GameStateMap::bossCafeTransitionAway() */

void __thiscall GameStateMap::bossCafeTransitionAway(GameStateMap *this)

{
  int *piVar1;
  int *piVar2;
  TrueTypeTextElement *pTVar3;
  BitmapTextElement *pBVar4;
  int iVar5;
  undefined4 uVar6;
  CImage *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  float extraout_s0;
  String aSStack_f8 [8];
  StringUtil aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  int *local_c0;
  int *local_bc;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  TrueTypeTextElement *local_a0;
  BitmapTextElement *local_9c;
  String aSStack_90 [8];
  int local_88;
  byte local_84;
  undefined4 local_74;
  byte local_70;
  undefined1 local_6f;
  MapCafe aMStack_6c [48];
  String aSStack_3c [40];
  
  *(int *)(this + 0x48) = *(int *)(this + 0xd4);
  MapCafe::MapCafe((MapCafe *)&local_c0,
                   (MapCafe *)(*(int *)(this + 0xd8) + *(int *)(this + 0xd4) * 0x54));
  iVar13 = DAT_00167e60;
  iVar14 = *(int *)(this + 0xc);
  iVar5 = CFPoint::subtract(*(long *)(iVar14 + 0x14),CONCAT22((short)local_c0[1],(short)local_c0[2])
                           );
  iVar15 = iVar5 >> 0x10;
  uVar6 = __floatsisf(iVar15);
  uVar6 = __divsf3(uVar6,DAT_00167e64);
  *(undefined4 *)(this + 0xa4) = uVar6;
  uVar6 = __floatsisf((int)(short)iVar5);
  uVar6 = __divsf3(uVar6,DAT_00167e64);
  iVar13 = iVar13 + 0x167c48;
  *(undefined4 *)(this + 0xa8) = uVar6;
  if ((iVar15 < 0x96) && (iVar15 + 0x95 < 0 == SCARRY4(iVar15,0x95))) {
    if (*(int *)(this + 0x50) < 10) {
      if (*(int *)(this + 0x50) == 3) {
        ZombieCafe::playEffect(iVar14,extraout_s0);
        if ((int *)local_c0[0x18] != (int *)0x0) {
          (**(code **)(*(int *)local_c0[0x18] + 4))();
        }
        this_00 = (CImage *)
                  PackedImage::getImage
                            (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),
                             *(int *)((uint)local_84 * 4 + *(int *)(iVar13 + DAT_00167e68)),false);
        piVar1 = local_c0;
        local_c0[0x18] = (int)this_00;
        pcVar11 = *(code **)(*local_c0 + 0x18);
        uVar6 = CImage::getWidth(this_00);
        iVar5 = CapcomApp::getInstance();
        uVar7 = *(undefined4 *)(iVar5 + 0x40);
        uVar8 = CImage::getHeight((CImage *)local_c0[0x18]);
        iVar5 = CapcomApp::getInstance();
        uVar6 = __floatsisf(uVar6);
        __mulsf3(uVar6,uVar7);
        uVar6 = __fixsfsi();
        uVar7 = __floatsisf(uVar8);
        __mulsf3(uVar7,*(undefined4 *)(iVar5 + 0x44));
        uVar7 = __fixsfsi();
        (*pcVar11)(piVar1,uVar6,uVar7);
      }
      if (*(int *)(this + 0x50) == 0) {
        iVar5 = *(int *)(this + 0xc);
        local_88 = *(int *)(iVar5 + 0x680) + 1;
        puVar16 = *(undefined1 **)(iVar13 + DAT_00167e6c);
        __aeabi_idivmod(local_88,*puVar16);
        uVar12 = (uint)*(byte *)(*(int *)(iVar5 + DAT_00167e74) + extraout_r1);
        uVar10 = **(int **)(iVar13 + DAT_00167e70) - 1;
        if ((int)uVar10 < (int)uVar12) {
          uVar12 = uVar10;
        }
        local_84 = (byte)uVar12;
        iVar5 = *(int *)(extraout_r1 * 4 + *(int *)(iVar5 + DAT_00167e78));
        local_70 = (byte)((uint)((iVar5 >> 0x1f) - iVar5) >> 0x1f);
        local_6f = 0;
        if ((int *)local_c0[0x18] != (int *)0x0) {
          (**(code **)(*(int *)local_c0[0x18] + 4))();
        }
        piVar1 = local_c0;
        iVar5 = PackedImage::getImage
                          (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),
                           *(int *)((uint)local_84 * 4 + *(int *)(iVar13 + DAT_00167e68)),false);
        pTVar3 = local_a0;
        piVar1[0x18] = iVar5;
        if (local_70 == 0) {
          pcVar11 = *(code **)(*(int *)local_a0 + 0x44);
          ZombieCafe::getEnemyCafeName((int)aSStack_e0);
          (*pcVar11)(pTVar3,aSStack_e0);
          String::~String(aSStack_e0);
          local_bc = (int *)0x0;
          local_b4 = (int *)0x0;
          local_b0 = (int *)0x0;
          local_ac = (int *)0x0;
          local_a8 = (int *)0x0;
        }
        else {
          pcVar11 = *(code **)(*(int *)local_a0 + 0x44);
          Vector<String>::elementAt((int)aSStack_f8);
          iVar5 = *(int *)(this + 0xc);
          __aeabi_idivmod(local_88,*puVar16);
          uVar9 = __divsi3(*(undefined4 *)(extraout_r1_00 * 4 + *(int *)(iVar5 + DAT_00167e78)),1000
                          );
          StringUtil::createTimeString(aSStack_f0,uVar9,'\x02');
          String::operator+(aSStack_e8,aSStack_f8,aSStack_f0);
          (*pcVar11)(pTVar3,aSStack_e8);
          String::~String(aSStack_e8);
          String::~String((String *)aSStack_f0);
          String::~String(aSStack_f8);
          piVar1 = local_bc;
          iVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0xe,false);
          piVar2 = local_b4;
          piVar1[0x19] = iVar5;
          iVar5 = DAT_00167e80;
          iVar14 = PackedImage::getImage
                             (*(PackedImage **)(*(int *)(this + 0xc) + DAT_00167e80),0xb,false);
          piVar1 = local_b0;
          piVar2[0x18] = iVar14;
          iVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x24,false);
          piVar1[0x19] = iVar5;
          (**(code **)(*local_bc + 0x20))(local_bc,1);
          (**(code **)(*local_b4 + 0x20))(local_b4,1);
          (**(code **)(*local_b0 + 0x20))(local_b0,1);
          (**(code **)(*local_ac + 0x20))(local_ac,1);
          (**(code **)(*local_a8 + 0x20))(local_a8,1);
        }
        local_a0[0x7f] = (TrueTypeTextElement)0x11;
        TrueTypeTextElement::setBaseTransform(local_a0,(ccMat2x3 *)(this + 0x3f0));
        pcVar11 = *(code **)(*(int *)local_a0 + 0x18);
        iVar14 = local_c0[3];
        iVar5 = SmDev();
        uVar6 = __floatsisf(iVar14);
        __addsf3(uVar6,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar13 + DAT_00168054)));
        uVar6 = __fixsfsi();
        (*pcVar11)(local_a0,uVar6,local_c0[4]);
        pBVar4 = local_9c;
        pcVar11 = *(code **)(*(int *)local_9c + 0x44);
        Vector<String>::elementAt((int)aSStack_d8);
        String::valueOf((int)aSStack_d0);
        String::operator+(aSStack_c8,aSStack_d8,aSStack_d0);
        (*pcVar11)(pBVar4,aSStack_c8);
        String::~String(aSStack_c8);
        String::~String(aSStack_d0);
        String::~String(aSStack_d8);
        local_9c[0x7f] = (BitmapTextElement)0x11;
        BitmapTextElement::setBaseTransform(local_9c,(ccMat2x3 *)(this + 0x3d8));
        (**(code **)(*(int *)local_9c + 0x18))(local_9c,local_c0[3],local_c0[4]);
        local_74 = 0;
        MapCafe::MapCafe(aMStack_6c,(MapCafe *)&local_c0);
        Vector<GameStateMap::MapCafe>::setElementAt
                  ((Vector<GameStateMap::MapCafe> *)(this + 0xd0),aMStack_6c,
                   *(undefined4 *)(this + 0x48));
        String::~String(aSStack_3c);
      }
      (**(code **)(*local_a4 + 0x20))(local_a4,1);
      local_a4[0x19] = *(int *)(this + (*(int *)(this + 0x50) + 0x14) * 4 + 4);
      pcVar11 = *(code **)(*local_a4 + 0x18);
      uVar6 = CImage::getWidth(*(CImage **)(this + (*(int *)(this + 0x50) + 0x14) * 4 + 4));
      iVar13 = CapcomApp::getInstance();
      uVar8 = *(undefined4 *)(iVar13 + 0x40);
      uVar7 = CImage::getHeight(*(CImage **)(this + (*(int *)(this + 0x50) + 0x14) * 4 + 4));
      iVar13 = CapcomApp::getInstance();
      uVar6 = __floatsisf(uVar6);
      __mulsf3(uVar6,uVar8);
      uVar6 = __fixsfsi();
      uVar7 = __floatsisf(uVar7);
      __mulsf3(uVar7,*(undefined4 *)(iVar13 + 0x44));
      uVar7 = __fixsfsi();
      (*pcVar11)(local_a4,uVar6,uVar7);
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
    }
    else {
      this[0x4d] = (GameStateMap)0x0;
      (**(code **)(*local_a4 + 0x20))(local_a4,0);
      local_6f = 0;
      this[0x4c] = (GameStateMap)0x0;
      *(undefined4 *)(this + 0x50) = 0;
    }
  }
  String::~String(aSStack_90);
  return;
}


