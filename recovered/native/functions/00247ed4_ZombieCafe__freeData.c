/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247ed4 ZombieCafe::freeData */

/* ZombieCafe::freeData() */

void __thiscall ZombieCafe::freeData(ZombieCafe *this)

{
  int iVar1;
  CFTexture *pCVar2;
  OutputStream *pOVar3;
  Order *this_00;
  RaidNotification *this_01;
  FoodStack *this_02;
  void *pvVar4;
  int iVar5;
  TutorialSystem *this_03;
  ObjectiveSystem *this_04;
  Character *pCVar6;
  CharacterData *this_05;
  Data *this_06;
  undefined4 *puVar7;
  String *pSVar8;
  Vector<String> *this_07;
  Vector<Order*> *this_08;
  Vector<RaidNotification*> *this_09;
  Vector<FoodStack*> *this_10;
  Vector<Character*> *this_11;
  int iVar9;
  int local_bc;
  int local_b8;
  String aSStack_ac [8];
  String aSStack_a4 [8];
  PackedImage *local_9c;
  PackedImage *local_98;
  CImage **local_94;
  CImage **local_90;
  String aSStack_8c [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  FriendData aFStack_74 [80];
  int *local_24;
  CFTexture *local_20;
  
  String::String(aSStack_ac,*(String **)(DAT_002481a8 + 0x247ee0));
  pOVar3 = (OutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar3,aSStack_ac);
  String::~String(aSStack_ac);
  serialize(this,pOVar3);
  (**(code **)(*(int *)pOVar3 + 8))(pOVar3);
  (**(code **)(*(int *)pOVar3 + 4))(pOVar3);
  if (*(int **)(this + 0xa20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa20) + 4))();
    *(undefined4 *)(this + 0xa20) = 0;
  }
  iVar5 = DAT_002481b0;
  GiftManager::Free(*(void **)(this + DAT_002481ac));
  CapcomGame::freeData((CapcomGame *)this);
  CCServer::Free(*(void **)(this + DAT_002481b4));
  CCMarketing_Free(*(undefined4 *)(this + DAT_002481b8));
  CRAMHoover::uninit(*(CRAMHoover **)(this + 0x840));
  CCFacebook::Free(*(void **)(this + DAT_002481bc));
  CCGameCenter::Free(*(void **)(this + DAT_002481c0));
  this_03 = *(TutorialSystem **)(this + iVar5);
  if (this_03 != (TutorialSystem *)0x0) {
    TutorialSystem::~TutorialSystem(this_03);
    operator_delete(this_03);
    *(undefined4 *)(this + iVar5) = 0;
  }
  iVar5 = DAT_002481c4;
  this_04 = *(ObjectiveSystem **)(this + DAT_002481c4);
  if (this_04 != (ObjectiveSystem *)0x0) {
    ObjectiveSystem::~ObjectiveSystem(this_04);
    operator_delete(this_04);
    *(undefined4 *)(this + iVar5) = 0;
  }
  pCVar6 = *(Character **)(this + 0x590);
  if (pCVar6 != (Character *)0x0) {
    Character::~Character(pCVar6);
    operator_delete(pCVar6);
    *(undefined4 *)(this + 0x590) = 0;
  }
  this_08 = (Vector<Order*> *)(this + DAT_002481c8);
  while (-1 < *(int *)(this_08 + 4)) {
    this_00 = (Order *)Vector<Order*>::removeElementAt(this_08,0);
    if (this_00 != (Order *)0x0) {
      Order::~Order(this_00);
      operator_delete(this_00);
    }
  }
  this_09 = (Vector<RaidNotification*> *)(this + DAT_002481cc);
  while (-1 < *(int *)(this_09 + 4)) {
    this_01 = (RaidNotification *)Vector<RaidNotification*>::removeElementAt(this_09,0);
    if (this_01 != (RaidNotification *)0x0) {
      RaidNotification::~RaidNotification(this_01);
      operator_delete(this_01);
    }
  }
  this_10 = (Vector<FoodStack*> *)(this + DAT_002481d0);
  while (iVar5 = *(int *)(this_10 + 4), -1 < iVar5) {
    this_02 = (FoodStack *)Vector<FoodStack*>::removeElementAt(this_10,iVar5);
    if (this_02 != (FoodStack *)0x0) {
      FoodStack::~FoodStack(this_02);
      operator_delete(this_02);
    }
  }
  this_11 = (Vector<Character*> *)(this + DAT_002481d4);
  while (-1 < *(int *)(this_11 + 4)) {
    pCVar6 = (Character *)Vector<Character*>::removeElementAt(this_11,0);
    if (pCVar6 != (Character *)0x0) {
      Character::~Character(pCVar6);
      operator_delete(pCVar6);
    }
  }
  while (iVar5 = DAT_002481d8, -1 < *(int *)(this + 0x5a4)) {
    pCVar6 = (Character *)
             Vector<Character*>::removeElementAt((Vector<Character*> *)(this + 0x5a0),0);
    if (pCVar6 != (Character *)0x0) {
      Character::~Character(pCVar6);
      operator_delete(pCVar6);
    }
  }
  for (iVar9 = 0; iVar1 = DAT_002481dc, iVar9 < *(int *)(this + iVar5 + 4) + 1; iVar9 = iVar9 + 1) {
    FriendData::FriendData(aFStack_74,(FriendData *)(*(int *)(this + iVar5 + 8) + iVar9 * 0x5c));
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 4))();
      local_24 = (int *)0x0;
    }
    pCVar2 = local_20;
    if (local_20 != (CFTexture *)0x0) {
      CFTexture::~CFTexture(local_20);
      operator_delete(pCVar2);
      local_20 = (CFTexture *)0x0;
    }
    FriendData::~FriendData(aFStack_74);
  }
  for (iVar5 = 0; iVar9 = DAT_002481dc, iVar5 < (int)(uint)*(ushort *)(this + DAT_002481e0);
      iVar5 = iVar5 + 1) {
    this_05 = *(CharacterData **)(*(int *)(this + iVar1) + iVar5 * 4);
    if (this_05 != (CharacterData *)0x0) {
      CharacterData::~CharacterData(this_05);
      operator_delete(this_05);
      *(undefined4 *)(*(int *)(this + iVar1) + iVar5 * 4) = 0;
    }
  }
  if (*(void **)(this + DAT_002481dc) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_002481dc));
    *(undefined4 *)(this + iVar9) = 0;
  }
  local_bc = 0;
  do {
    iVar9 = 0;
    iVar5 = local_bc * 4;
    do {
      local_b8 = 0;
      do {
        if ((local_bc == 0) &&
           (this_06 = *(Data **)(*(int *)(**(int **)(this + 0x3f4) + iVar9) + local_b8),
           this_06 != (Data *)0x0)) {
          ToonAnimation::Data::~Data(this_06);
          operator_delete(this_06);
          *(undefined4 *)(*(int *)(**(int **)(this + 0x3f4) + iVar9) + local_b8) = 0;
        }
        local_b8 = local_b8 + 4;
      } while (local_b8 != 0x10);
      pvVar4 = *(void **)(*(int *)(*(int *)(this + 0x3f4) + iVar5) + iVar9);
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
        *(undefined4 *)(*(int *)(*(int *)(this + 0x3f4) + iVar5) + iVar9) = 0;
      }
      iVar9 = iVar9 + 4;
    } while (iVar9 != 0xac);
    if (*(void **)(*(int *)(this + 0x3f4) + iVar5) != (void *)0x0) {
      operator_delete__(*(void **)(*(int *)(this + 0x3f4) + iVar5));
      *(undefined4 *)(*(int *)(this + 0x3f4) + iVar5) = 0;
    }
    local_bc = local_bc + 1;
  } while (local_bc != 2);
  if (*(void **)(this + 0x3f4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3f4));
    *(undefined4 *)(this + 0x3f4) = 0;
  }
  String::String(aSStack_a4);
  for (iVar5 = 0; iVar5 < *(int *)(this + 0x584) + 1; iVar5 = iVar5 + 1) {
    pSVar8 = (String *)(*(int *)(this + 0x588) + iVar5 * 0x18);
    String::String(aSStack_8c,pSVar8);
    local_84 = *(undefined4 *)(pSVar8 + 8);
    local_80 = *(undefined4 *)(pSVar8 + 0xc);
    local_7c = *(undefined4 *)(pSVar8 + 0x10);
    local_78 = *(undefined4 *)(pSVar8 + 0x14);
    NamedPackedImages::operator=((NamedPackedImages *)aSStack_a4,(NamedPackedImages *)aSStack_8c);
    String::~String(aSStack_8c);
    if (local_94 != (CImage **)0x0) {
      PackedImage::destroyImages(local_9c,local_94);
    }
    if (local_90 != (CImage **)0x0) {
      PackedImage::destroyImages(local_98,local_90);
    }
    if (local_9c != (PackedImage *)0x0) {
      (**(code **)(*(int *)local_9c + 4))();
      local_9c = (PackedImage *)0x0;
    }
    if (local_98 != (PackedImage *)0x0) {
      (**(code **)(*(int *)local_98 + 4))();
      local_98 = (PackedImage *)0x0;
    }
  }
  puVar7 = *(undefined4 **)(DAT_00248384 + 0x24825c);
  pvVar4 = (void *)*puVar7;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
    *puVar7 = 0;
  }
  unloadMenuImages(this,false);
  if (*(void **)(this + 0x1c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  iVar5 = *(int *)(this + 0x4e8);
  if (iVar5 != 0) {
    pSVar8 = (String *)(iVar5 + *(int *)(iVar5 + -4) * 0x1c);
    while (pSVar8 != *(String **)(this + 0x4e8)) {
      pSVar8 = pSVar8 + -0x1c;
      String::~String(pSVar8);
    }
    operator_delete__(pSVar8 + -8);
    *(undefined4 *)(this + 0x4e8) = 0;
  }
  iVar5 = DAT_00248388;
  if (*(int **)(this + DAT_00248388) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00248388) + 4))();
    *(undefined4 *)(this + iVar5) = 0;
  }
  if (*(int **)(this + 0x7f8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7f8) + 4))();
    *(undefined4 *)(this + 0x7f8) = 0;
  }
  iVar5 = DAT_0024838c;
  if (*(int **)(this + DAT_0024838c) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0024838c) + 4))();
    *(undefined4 *)(this + iVar5) = 0;
  }
  iVar5 = DAT_00248390;
  if (*(int **)(this + DAT_00248390) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00248390) + 4))();
    *(undefined4 *)(this + iVar5) = 0;
  }
  iVar5 = DAT_00248394;
  if (*(int **)(this + DAT_00248394) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00248394) + 4))();
    *(undefined4 *)(this + iVar5) = 0;
  }
  if (*(int **)(this + 0x7f0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7f0) + 4))();
    *(undefined4 *)(this + 0x7f0) = 0;
  }
  this_07 = *(Vector<String> **)(this + 0x4b0);
  if (this_07 != (Vector<String> *)0x0) {
    Vector<String>::~Vector(this_07);
    operator_delete(this_07);
    *(undefined4 *)(this + 0x4b0) = 0;
  }
  QuestData::unload();
  Constants::unload();
  CCOptions::Free(*(void **)(this + 0xa00));
  String::~String(aSStack_a4);
  return;
}


