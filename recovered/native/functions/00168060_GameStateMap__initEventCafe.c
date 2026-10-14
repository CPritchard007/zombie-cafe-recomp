/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00168060 GameStateMap::initEventCafe */

/* GameStateMap::initEventCafe(int) */

void __thiscall GameStateMap::initEventCafe(GameStateMap *this,int param_1)

{
  int *piVar1;
  BitmapTextElement *pBVar2;
  int iVar3;
  undefined4 uVar4;
  CImage *this_00;
  undefined4 uVar5;
  int extraout_r1;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  int *local_c0 [8];
  TrueTypeTextElement *local_a0;
  BitmapTextElement *local_9c;
  String aSStack_90 [12];
  byte local_84;
  undefined1 local_70;
  MapCafe aMStack_6c [48];
  String aSStack_3c [40];
  
  puts((char *)(DAT_00168290 + 0x16806e));
  printf((char *)(DAT_00168294 + 0x16807e),*(undefined4 *)(*(int *)(this + 0xc) + 0x720));
  *(undefined4 *)(this + 0x48) = 3;
  iVar8 = DAT_00168298;
  MapCafe::MapCafe((MapCafe *)local_c0,(MapCafe *)(*(int *)(this + 0xd8) + 0xfc));
  iVar8 = iVar8 + 0x16809a;
  uVar6 = *(uint *)(*(int *)(this + 0xc) + 0x720);
  puVar9 = *(uint **)(iVar8 + DAT_001682a0);
  if (**(int **)(iVar8 + DAT_0016829c) <= (int)uVar6) {
    uVar6 = *puVar9;
  }
  local_84 = (byte)uVar6;
  if ((uVar6 & 0xff) != *puVar9) {
    __aeabi_idivmod(param_1,**(undefined1 **)(iVar8 + DAT_001682a4));
    clearEnemyData(extraout_r1);
    local_84 = (byte)*puVar9;
    **(undefined4 **)(iVar8 + DAT_001682a8) = 0;
    **(undefined1 **)(iVar8 + DAT_001682ac) = 0;
  }
  if (*(char *)(*(int *)(this + 0xc) + 0x48) == '\0') {
    local_70 = 0;
  }
  setBossName(this,(uint)local_84,(MapCafe *)local_c0);
  *(uint *)(*(int *)(this + 0xc) + 0x720) = (uint)local_84;
  local_a0[0x7f] = (TrueTypeTextElement)0x11;
  TrueTypeTextElement::setBaseTransform(local_a0,(ccMat2x3 *)(this + 0x3f0));
  pcVar7 = *(code **)(*(int *)local_a0 + 0x18);
  iVar10 = local_c0[0][3];
  iVar3 = SmDev();
  uVar4 = __floatsisf(iVar10);
  __addsf3(uVar4,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar8 + DAT_001682b0)));
  uVar4 = __fixsfsi();
  (*pcVar7)(local_a0,uVar4,local_c0[0][4]);
  pBVar2 = local_9c;
  pcVar7 = *(code **)(*(int *)local_9c + 0x44);
  Vector<String>::elementAt((int)aSStack_d8);
  String::valueOf((int)aSStack_d0);
  String::operator+(aSStack_c8,aSStack_d8,aSStack_d0);
  (*pcVar7)(pBVar2,aSStack_c8);
  String::~String(aSStack_c8);
  String::~String(aSStack_d0);
  String::~String(aSStack_d8);
  local_9c[0x7f] = (BitmapTextElement)0x11;
  BitmapTextElement::setBaseTransform(local_9c,(ccMat2x3 *)(this + 0x3d8));
  (**(code **)(*(int *)local_9c + 0x18))(local_9c,local_c0[0][3],local_c0[0][4]);
  MapCafe::MapCafe(aMStack_6c,(MapCafe *)local_c0);
  Vector<GameStateMap::MapCafe>::setElementAt
            ((Vector<GameStateMap::MapCafe> *)(this + 0xd0),aMStack_6c,*(undefined4 *)(this + 0x48))
  ;
  String::~String(aSStack_3c);
  if ((int *)local_c0[0][0x18] != (int *)0x0) {
    (**(code **)(*(int *)local_c0[0][0x18] + 4))();
  }
  this_00 = (CImage *)
            PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),
                       *(int *)((uint)local_84 * 4 + *(int *)(iVar8 + DAT_001682b8)),false);
  piVar1 = local_c0[0];
  local_c0[0][0x18] = (int)this_00;
  pcVar7 = *(code **)(*local_c0[0] + 0x18);
  uVar4 = CImage::getWidth(this_00);
  iVar8 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar8 + 0x40);
  uVar5 = CImage::getHeight((CImage *)local_c0[0][0x18]);
  iVar8 = CapcomApp::getInstance();
  uVar4 = __floatsisf(uVar4);
  __mulsf3(uVar4,uVar11);
  uVar4 = __fixsfsi();
  uVar5 = __floatsisf(uVar5);
  __mulsf3(uVar5,*(undefined4 *)(iVar8 + 0x44));
  uVar5 = __fixsfsi();
  (*pcVar7)(piVar1,uVar4,uVar5);
  *(byte *)(*(int *)(*(int *)(this + 0xc) + DAT_001682bc) + param_1) = local_84;
  String::~String(aSStack_90);
  return;
}


