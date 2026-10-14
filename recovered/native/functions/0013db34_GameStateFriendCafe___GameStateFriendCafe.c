/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013db34 GameStateFriendCafe::~GameStateFriendCafe */

/* GameStateFriendCafe::~GameStateFriendCafe() */

GameStateFriendCafe * __thiscall
GameStateFriendCafe::~GameStateFriendCafe(GameStateFriendCafe *this)

{
  int iVar1;
  FoodStack *this_00;
  
  iVar1 = DAT_0013dca8;
  *(int *)this = *(int *)(DAT_0013dca4 + 0x13db40) + 8;
  this_00 = *(FoodStack **)(this + 0x218);
  iVar1 = *(int *)(iVar1 + 0x13db4e);
  if (this_00 != (FoodStack *)0x0) {
    FoodStack::~FoodStack(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 0x218) = 0;
  }
  String::~String((String *)(this + 0x1dc));
  Vector<int>::~Vector((Vector<int> *)(this + 0x178));
  if (*(void **)(this + 0x174) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x174));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0x160));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x150));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x144));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x138));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 300));
  if (*(void **)(this + 0x114) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x114));
  }
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x100));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xcc));
  FriendData::~FriendData((FriendData *)(this + 0x3c));
  if (*(void **)(this + 0x2c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2c));
  }
  String::~String((String *)(this + 0x18));
  *(int *)this = iVar1 + 8;
  return this;
}


