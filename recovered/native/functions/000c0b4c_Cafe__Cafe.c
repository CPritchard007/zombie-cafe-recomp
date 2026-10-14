/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c0b4c Cafe::Cafe */

/* Cafe::Cafe() */

Cafe * __thiscall Cafe::Cafe(Cafe *this)

{
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  Resource *this_00;
  ByteArrayInputStream *this_01;
  DataInputStream *this_02;
  ImageMap *pIVar6;
  FurnitureData *this_03;
  long lVar7;
  undefined4 uVar8;
  uchar *puVar9;
  int *piVar10;
  int iVar11;
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  String aSStack_2c [8];
  ImageMap *local_24;
  ImageMap *local_20;
  ImageMap *local_1c;
  
  iVar11 = DAT_000c0dbc;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x38] = (Cafe)0x0;
  iVar11 = iVar11 + 0xc0b62;
  uVar8 = *(undefined4 *)(iVar11 + DAT_000c0dc0);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x3c) = uVar8;
  *(Cafe **)(this + 0x2c) = this + 0x20;
  *(undefined4 *)(this + 0x48) = 10;
  pvVar3 = operator_new__(0x28);
  *(void **)(this + 0x50) = pvVar3;
  memset(pvVar3,0,*(int *)(this + 0x48) << 2);
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(Cafe **)(this + 0x70) = this + 0x68;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xa4));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xb0));
  Vector<Furniture*>::Vector((Vector<Furniture*> *)(this + 0xbc));
  *(undefined4 *)(this + 0xcc) = 10;
  pvVar3 = operator_new__(0x28);
  *(void **)(this + 0xd4) = pvVar3;
  memset(pvVar3,0,*(int *)(this + 0xcc) << 2);
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  *(undefined4 *)(this + 0xfc) = 10;
  pvVar3 = operator_new__(0x28);
  *(void **)(this + 0x104) = pvVar3;
  memset(pvVar3,0,*(int *)(this + 0xfc) << 2);
  iVar5 = DAT_000c0dc8;
  iVar4 = DAT_000c0dc4;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  L_PrintLog((char *)(iVar4 + 0xc0bfe),(char *)(iVar5 + 0xc0c00));
  pvVar3 = operator_new__(**(int **)(iVar11 + DAT_000c0dcc) * **(int **)(iVar11 + DAT_000c0dd0) * 4)
  ;
  *(void **)this = pvVar3;
  iVar4 = CapcomApp::getInstance();
  iVar5 = *(int *)(iVar4 + 4);
  L_PrintLog((char *)(DAT_000c0dd8 + 0xc0c2a),(char *)(DAT_000c0dd4 + 0xc0c28));
  iVar4 = DAT_000c0ddc;
  if (*(int *)(iVar5 + DAT_000c0ddc) == 0) {
    L_PrintLog((char *)(DAT_000c0de0 + 0xc0c3e),(char *)(DAT_000c0de4 + 0xc0c40));
  }
  iVar1 = DAT_000c0de8;
  if (*(int *)(iVar5 + DAT_000c0de8) == 0) {
    L_PrintLog((char *)(DAT_000c0dec + 0xc0c54),(char *)(DAT_000c0df0 + 0xc0c56));
  }
  uVar8 = PackedImage::getImages(*(PackedImage **)(iVar5 + iVar4),false);
  *(undefined4 *)(this + 0x84) = uVar8;
  uVar8 = PackedImage::getImages(*(PackedImage **)(iVar5 + iVar1),false);
  *(undefined4 *)(this + 0x88) = uVar8;
  if (*(int *)(iVar5 + 0x820) == 0) {
    L_PrintLog((char *)(DAT_000c0df4 + 0xc0c8c),(char *)(DAT_000c0df8 + 0xc0c8e));
  }
  uVar8 = PackedImage::getImages(*(PackedImage **)(iVar5 + 0x820),false);
  *(undefined4 *)(this + 0x8c) = uVar8;
  String::String(aSStack_4c,*(String **)(iVar11 + DAT_000c0dfc));
  String::String(aSStack_2c,aSStack_4c);
  this_00 = (Resource *)ResourceManager::load(aSStack_2c,0,1);
  String::~String(aSStack_2c);
  String::~String(aSStack_4c);
  puVar9 = *(uchar **)(this_00 + 0x14);
  iVar4 = *(int *)(this_00 + 0x18);
  this_01 = (ByteArrayInputStream *)operator_new(0x18);
  ByteArrayInputStream::ByteArrayInputStream(this_01,puVar9,iVar4,false);
  this_02 = (DataInputStream *)operator_new(8);
  DataInputStream::DataInputStream(this_02,(InputStream *)this_01);
  L_PrintLog((char *)(DAT_000c0e00 + 0xc0d02),(char *)(DAT_000c0e04 + 0xc0d04));
  iVar4 = DataInputStream::readInt(this_02);
  *(int *)(this + 0x90) = iVar4;
  pvVar3 = operator_new__(iVar4 << 2);
  *(void **)(this + 0x94) = pvVar3;
  String::String(aSStack_44,*(String **)(iVar11 + DAT_000c0e08));
  pIVar6 = (ImageMap *)operator_new(0x18);
  ImageMap::ImageMap(pIVar6,aSStack_44,0);
  local_24 = pIVar6;
  String::~String(aSStack_44);
  String::String(aSStack_3c,*(String **)(iVar11 + DAT_000c0e0c));
  pIVar6 = (ImageMap *)operator_new(0x18);
  ImageMap::ImageMap(pIVar6,aSStack_3c,0);
  local_20 = pIVar6;
  String::~String(aSStack_3c);
  String::String(aSStack_34,*(String **)(iVar11 + DAT_000c0e10));
  pIVar6 = (ImageMap *)operator_new(0x18);
  ImageMap::ImageMap(pIVar6,aSStack_34,0);
  local_1c = pIVar6;
  String::~String(aSStack_34);
  L_PrintLog((char *)(DAT_000c0e14 + 0xc0d8c),(char *)(DAT_000c0e18 + 0xc0d8e));
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x90); iVar4 = iVar4 + 1) {
    this_03 = (FurnitureData *)operator_new(0x80);
    FurnitureData::FurnitureData(this_03,this_02,iVar4,(CImage ***)(this + 0x84),&local_24);
    *(FurnitureData **)(iVar4 * 4 + *(int *)(this + 0x94)) = this_03;
  }
  L_PrintLog((char *)(DAT_000c1014 + 0xc0e34),(char *)(DAT_000c1018 + 0xc0e36));
  pIVar6 = local_24;
  if (local_24 != (ImageMap *)0x0) {
    ImageMap::~ImageMap(local_24);
    operator_delete(pIVar6);
  }
  pIVar6 = local_20;
  if (local_20 != (ImageMap *)0x0) {
    ImageMap::~ImageMap(local_20);
    operator_delete(pIVar6);
  }
  pIVar6 = local_1c;
  if (local_1c != (ImageMap *)0x0) {
    ImageMap::~ImageMap(local_1c);
    operator_delete(pIVar6);
  }
  if (this_02 != (DataInputStream *)0x0) {
    (**(code **)(*(int *)this_02 + 4))(this_02);
  }
  if (this_01 != (ByteArrayInputStream *)0x0) {
    (**(code **)(*(int *)this_01 + 4))(this_01);
  }
  ResourceManager::Resource::releaseHandle(this_00);
  L_PrintLog((char *)(DAT_000c101c + 0xc0e96),(char *)(DAT_000c1020 + 0xc0e98));
  iVar4 = DAT_000c1024;
  *(undefined4 *)(this + 0x54) = 0;
  uVar8 = PackedImage::getImage(*(PackedImage **)(iVar5 + iVar4),0x2e,false);
  iVar4 = DAT_000c1028;
  *(undefined4 *)(this + 0x58) = uVar8;
  lVar7 = diamondToStaggeredCoords(-**(int **)(iVar11 + iVar4),**(int **)(iVar11 + iVar4));
  uVar2 = staggeredCoordsToIndex(lVar7);
  *(undefined2 *)(this + 0x98) = uVar2;
  piVar10 = *(int **)(iVar11 + DAT_000c1030);
  lVar7 = diamondToStaggeredCoords
                    (**(int **)(iVar11 + DAT_000c102c),
                     (*piVar10 * 2 - **(int **)(iVar11 + DAT_000c102c)) + -1);
  uVar2 = staggeredCoordsToIndex(lVar7);
  *(undefined2 *)(this + 0x9a) = uVar2;
  this[200] = (Cafe)0x0;
  this[0xca] = (Cafe)0x1;
  this[0xc9] = (Cafe)0x1;
  this[0xcb] = (Cafe)0x0;
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (Cafe)0x0;
  iVar4 = *piVar10;
  *(int *)(this + 0xe8) = iVar4;
  iVar11 = **(int **)(iVar11 + DAT_000c1034);
  *(int *)(this + 0xf0) = iVar11 * iVar4;
  *(int *)(this + 0xec) = iVar11;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  allCollectInit(this);
  L_PrintLog((char *)(DAT_000c1038 + 0xc0f2e),(char *)(DAT_000c103c + 0xc0f30));
  return this;
}


