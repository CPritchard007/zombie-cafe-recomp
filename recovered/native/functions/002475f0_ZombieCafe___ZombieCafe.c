/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002475f0 ZombieCafe::~ZombieCafe */

/* ZombieCafe::~ZombieCafe() */

ZombieCafe * __thiscall ZombieCafe::~ZombieCafe(ZombieCafe *this)

{
  String *this_00;
  void *pvVar1;
  int iVar2;
  byte *pbVar3;
  String *pSVar4;
  FontManager *this_01;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar2 = DAT_00247930;
  iVar5 = DAT_00247928 + 0x2475fc;
  *(int *)this = *(int *)(iVar5 + DAT_0024792c) + 8;
  if (this[iVar2] == (ZombieCafe)0x0) {
    pbVar3 = *(byte **)(iVar5 + DAT_00247934);
    for (iVar2 = 0; iVar2 < (int)(uint)*pbVar3; iVar2 = iVar2 + 1) {
      unloadEffect(this,iVar2);
    }
    pbVar3 = *(byte **)(iVar5 + DAT_00247938);
    for (iVar2 = 0; iVar2 < (int)(uint)*pbVar3; iVar2 = iVar2 + 1) {
      unloadMusic(this,iVar2);
    }
    CCSound::Free();
    if (*(void **)(this + 0x400) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x400));
      *(undefined4 *)(this + 0x400) = 0;
    }
    if (*(void **)(this + 0x408) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x408));
      *(undefined4 *)(this + 0x408) = 0;
    }
  }
  iVar2 = DAT_0024793c;
  if (*(void **)(this + DAT_0024793c) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_0024793c));
    *(undefined4 *)(this + iVar2) = 0;
  }
  if (*(void **)(this + 0x698) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x698));
    *(undefined4 *)(this + 0x698) = 0;
  }
  iVar2 = DAT_00247940;
  if (*(void **)(this + DAT_00247940) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_00247940));
    *(undefined4 *)(this + iVar2) = 0;
  }
  iVar2 = *(int *)(this + 0x6a0);
  if (iVar2 != 0) {
    pSVar4 = (String *)(iVar2 + *(int *)(iVar2 + -4) * 8);
    while (this_00 = pSVar4 + -8, pSVar4 != *(String **)(this + 0x6a0)) {
      String::~String(this_00);
      pSVar4 = this_00;
    }
    operator_delete__(this_00);
    *(undefined4 *)(this + 0x6a0) = 0;
  }
  iVar2 = DAT_00247944;
  if (*(void **)(this + DAT_00247944) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_00247944));
    *(undefined4 *)(this + iVar2) = 0;
  }
  if (this[DAT_00247930] == (ZombieCafe)0x0) {
    puVar7 = *(undefined4 **)(iVar5 + DAT_00247948);
    this_01 = (FontManager *)*puVar7;
    if (this_01 != (FontManager *)0x0) {
      FontManager::~FontManager(this_01);
      operator_delete(this_01);
      *puVar7 = 0;
    }
  }
  if (*(int *)(this + 0x718) != 0) {
    *(undefined4 *)(this + 0x718) = 0;
  }
  while (-1 < *(int *)(this + 0x6b4)) {
    pvVar1 = (void *)Vector<EarlyBirdSaleBuyTimer*>::removeElementAt
                               ((Vector<EarlyBirdSaleBuyTimer*> *)(this + 0x6b0),0);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
  }
  if (*(void **)(this + 0x490) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x490));
    *(undefined4 *)(this + 0x490) = 0;
  }
  free((void *)**(undefined4 **)(iVar5 + DAT_0024794c));
  if (*(void **)(this + 0xc08) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc08));
  }
  Vector<String>::~Vector((Vector<String> *)(this + 0xbe0));
  Vector<CapcomDate>::~Vector((Vector<CapcomDate> *)(this + DAT_00247950));
  String::~String((String *)(this + DAT_00247954));
  Vector<String>::~Vector((Vector<String> *)(this + DAT_00247958));
  Vector<CapcomDate>::~Vector((Vector<CapcomDate> *)(this + DAT_0024795c));
  String::~String((String *)(this + 0xa10));
  String::~String((String *)(this + 0x9b0));
  String::~String((String *)(this + DAT_00247960));
  String::~String((String *)(this + 0x9a0));
  if (*(void **)(this + DAT_00247964 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_00247964 + 8));
  }
  Vector<bool>::~Vector((Vector<bool> *)(this + 0x980));
  Vector<bool>::~Vector((Vector<bool> *)(this + DAT_00247968));
  Vector<FoodStack*>::~Vector((Vector<FoodStack*> *)(this + DAT_0024796c));
  Vector<String>::~Vector((Vector<String> *)(this + DAT_00247970));
  if (*(void **)(this + DAT_00247974 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_00247974 + 8));
  }
  Vector<Order*>::~Vector((Vector<Order*> *)(this + 0x8f0));
  Vector<Order*>::~Vector((Vector<Order*> *)(this + DAT_00247978));
  Vector<Order*>::~Vector((Vector<Order*> *)(this + DAT_0024797c));
  Vector<String>::~Vector((Vector<String> *)(this + DAT_00247980));
  Vector<FriendData>::~Vector((Vector<FriendData> *)(this + DAT_00247984));
  if (*(void **)(this + DAT_00247988 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_00247988 + 8));
  }
  if (*(int *)(this + 0x6d8) != 0) {
    while (pvVar1 = *(void **)(this + 0x6cc), pvVar1 != (void *)0x0) {
      uVar6 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x6cc) = uVar6;
    }
    *(undefined4 *)(this + 0x6d8) = 0;
    *(ZombieCafe **)(this + 0x6d0) = this + 0x6c8;
    *(undefined4 *)(this + 0x6d4) = 0;
  }
  if (*(void **)(this + 0x6b8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x6b8));
  }
  if (*(void **)(this + 0x678) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x678));
  }
  Vector<Character*>::~Vector((Vector<Character*> *)(this + DAT_0024798c));
  Vector<FoodStack*>::~Vector((Vector<FoodStack*> *)(this + DAT_00247990));
  Vector<Character*>::~Vector((Vector<Character*> *)(this + 0x5a0));
  Vector<Character*>::~Vector((Vector<Character*> *)(this + DAT_00247994));
  Vector<NamedPackedImages>::~Vector((Vector<NamedPackedImages> *)(this + 0x580));
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)(this + DAT_00247998));
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)(this + 0x540));
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)(this + DAT_0024799c));
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)(this + 0x508));
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)(this + DAT_002479a0));
  CapcomGame::~CapcomGame((CapcomGame *)this);
  return this;
}


