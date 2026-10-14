/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016deb4 GameStateMap::initBossCafe */

/* GameStateMap::initBossCafe(bool) */

void __thiscall GameStateMap::initBossCafe(GameStateMap *this,bool param_1)

{
  BitmapTextElement *pBVar1;
  ImageElement *this_00;
  undefined4 uVar2;
  CImage *this_01;
  undefined4 uVar3;
  int extraout_r1;
  byte bVar4;
  code *pcVar5;
  byte *pbVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  String aSStack_11c [8];
  String aSStack_114 [8];
  String aSStack_10c [8];
  int local_104;
  int local_100;
  void *local_fc;
  int local_f8 [7];
  int local_dc [7];
  int *local_c0 [7];
  ImageElement *local_a4;
  TrueTypeTextElement *local_a0;
  BitmapTextElement *local_9c;
  String aSStack_90 [12];
  byte local_84 [20];
  undefined1 local_70;
  undefined1 local_6f;
  MapCafe aMStack_6c [48];
  String aSStack_3c [40];
  
  iVar9 = DAT_0016e1cc + 0x16dec8;
  if (this[0x4c] == (GameStateMap)0x0) {
    printf((char *)(DAT_0016e1d0 + 0x16ded6),*(undefined4 *)(*(int *)(this + 0xc) + DAT_0016e1d4));
    this[0x4c] = (GameStateMap)0x1;
    *(int *)(this + 0x48) = *(int *)(this + 0xd4);
    MapCafe::MapCafe((MapCafe *)local_c0,
                     (MapCafe *)(*(int *)(this + 0xd8) + *(int *)(this + 0xd4) * 0x54));
    piVar7 = *(int **)(this + 0x14);
    pcVar5 = *(code **)(*piVar7 + 0x2c);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,*(CImage **)(this + 0x54),'\x12',true);
    local_a4 = this_00;
    (*pcVar5)(piVar7,this_00);
    local_70 = 0;
    (**(code **)(*(int *)local_a4 + 0x20))();
    local_6f = 1;
    if (*(int *)(*(int *)(this + 0xc) + DAT_0016e1d4) < **(int **)(iVar9 + DAT_0016e1d8)) {
      local_84[0] = (byte)*(int *)(*(int *)(this + 0xc) + DAT_0016e1d4);
    }
    else {
      local_104 = 10;
      local_fc = operator_new__(0x28);
      memset(local_fc,0,local_104 << 2);
      local_100 = -1;
      local_f8[0] = *(int *)(DAT_0016e1dc + 0x16df9c);
      local_f8[1] = *(undefined4 *)(DAT_0016e1dc + 0x16dfa0);
      local_f8[2] = *(undefined4 *)(DAT_0016e1dc + 0x16dfa4);
      local_f8[3] = *(undefined4 *)(DAT_0016e1dc + 0x16dfa8);
      local_f8[4] = *(undefined4 *)(DAT_0016e1dc + 0x16dfac);
      local_f8[5] = *(undefined4 *)(DAT_0016e1dc + 0x16dfb0);
      local_f8[6] = *(undefined4 *)(DAT_0016e1dc + 0x16dfb4);
      local_dc[0] = *(int *)(DAT_0016e1dc + 0x16dfb8);
      local_dc[1] = *(undefined4 *)(DAT_0016e1dc + 0x16dfbc);
      local_dc[2] = *(undefined4 *)(DAT_0016e1dc + 0x16dfc0);
      local_dc[3] = *(undefined4 *)(DAT_0016e1dc + 0x16dfc4);
      local_dc[4] = *(undefined4 *)(DAT_0016e1dc + 0x16dfc8);
      local_dc[5] = *(undefined4 *)(DAT_0016e1dc + 0x16dfcc);
      iVar11 = 0;
      local_dc[6] = *(undefined4 *)(DAT_0016e1dc + 0x16dfd0);
      do {
        if (*(int *)((int)local_f8 + iVar11) <= *(int *)(*(int *)(this + 0xc) + 0x680)) {
          Vector<int>::addElement((Vector<int> *)&local_104,*(int *)((int)local_dc + iVar11));
        }
        iVar11 = iVar11 + 4;
      } while (iVar11 != 0x1c);
      pcVar8 = *(char **)(iVar9 + DAT_0016e1e0);
      if (*pcVar8 != '\0') {
        Vector<int>::addElement((Vector<int> *)&local_104,0x20);
      }
      if ((*pcVar8 == '\0') || (pbVar6 = *(byte **)(iVar9 + DAT_0016e1e4), *pbVar6 != 0)) {
        iVar11 = local_100 + 1;
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        else {
          iVar12 = arc4random();
          __aeabi_idivmod(iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f,iVar11);
          iVar11 = extraout_r1;
        }
        bVar4 = (byte)*(undefined4 *)(iVar11 * 4 + (int)local_fc);
        pbVar6 = local_84;
      }
      else {
        local_84[0] = 0x20;
        bVar4 = 1;
      }
      *pbVar6 = bVar4;
      if (local_fc != (void *)0x0) {
        operator_delete__(local_fc);
      }
    }
    setBossName(this,(uint)local_84[0],(MapCafe *)local_c0);
    *(uint *)(*(int *)(this + 0xc) + DAT_0016e1d4) = (uint)local_84[0];
    local_a0[0x7f] = (TrueTypeTextElement)0x11;
    TrueTypeTextElement::setBaseTransform(local_a0,(ccMat2x3 *)(this + 0x3f0));
    pcVar5 = *(code **)(*(int *)local_a0 + 0x18);
    iVar12 = local_c0[0][3];
    iVar11 = SmDev();
    uVar2 = __floatsisf(iVar12);
    __addsf3(uVar2,*(undefined4 *)(iVar11 * 4 + *(int *)(iVar9 + DAT_0016e1e8)));
    uVar2 = __fixsfsi();
    (*pcVar5)(local_a0,uVar2,local_c0[0][4]);
    pBVar1 = local_9c;
    pcVar5 = *(code **)(*(int *)local_9c + 0x44);
    Vector<String>::elementAt((int)aSStack_11c);
    String::valueOf((int)aSStack_114);
    String::operator+(aSStack_10c,aSStack_11c,aSStack_114);
    (*pcVar5)(pBVar1,aSStack_10c);
    String::~String(aSStack_10c);
    String::~String(aSStack_114);
    String::~String(aSStack_11c);
    local_9c[0x7f] = (BitmapTextElement)0x11;
    BitmapTextElement::setBaseTransform(local_9c,(ccMat2x3 *)(this + 0x3d8));
    (**(code **)(*(int *)local_9c + 0x18))(local_9c,local_c0[0][3],local_c0[0][4]);
    MapCafe::MapCafe(aMStack_6c,(MapCafe *)local_c0);
    Vector<GameStateMap::MapCafe>::setElementAt
              ((Vector<GameStateMap::MapCafe> *)(this + 0xd0),aMStack_6c,
               *(undefined4 *)(this + 0x48));
    String::~String(aSStack_3c);
    if (param_1) {
      this[0x4d] = (GameStateMap)0x1;
    }
    else {
      if ((int *)local_c0[0][0x18] != (int *)0x0) {
        (**(code **)(*(int *)local_c0[0][0x18] + 4))();
      }
      this_01 = (CImage *)
                PackedImage::getImage
                          (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),
                           *(int *)((uint)local_84[0] * 4 + *(int *)(iVar9 + DAT_0016e1f4)),false);
      piVar7 = local_c0[0];
      local_c0[0][0x18] = (int)this_01;
      pcVar5 = *(code **)(*local_c0[0] + 0x18);
      uVar2 = CImage::getWidth(this_01);
      iVar9 = CapcomApp::getInstance();
      uVar10 = *(undefined4 *)(iVar9 + 0x40);
      uVar3 = CImage::getHeight((CImage *)local_c0[0][0x18]);
      iVar9 = CapcomApp::getInstance();
      uVar2 = __floatsisf(uVar2);
      __mulsf3(uVar2,uVar10);
      uVar2 = __fixsfsi();
      uVar3 = __floatsisf(uVar3);
      __mulsf3(uVar3,*(undefined4 *)(iVar9 + 0x44));
      uVar3 = __fixsfsi();
      (*pcVar5)(piVar7,uVar2,uVar3);
    }
    String::~String(aSStack_90);
  }
  return;
}


