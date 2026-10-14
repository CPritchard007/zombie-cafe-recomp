/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00122358 GameStateCafe::longTick */

/* GameStateCafe::longTick(long long) */

void GameStateCafe::longTick(longlong param_1)

{
  short sVar1;
  GameStateCafe *in_r0;
  Cafe *this;
  MoveTask *this_00;
  uint in_r2;
  int in_r3;
  int iVar2;
  Character *this_01;
  CafeObject *this_02;
  bool bVar3;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  uint local_30;
  int local_2c;
  int local_24;
  
  L_PrintLog((char *)(DAT_0012252c + 0x122368),(char *)(DAT_00122528 + 0x122366));
  *(undefined4 *)(in_r0 + 0x1a0) = 0;
  *(undefined4 *)(in_r0 + 0x1b8) = 2;
  *(undefined4 *)(in_r0 + 0x1b4) = 0;
  advanceTime(CONCAT44(in_stack_ffffffcc,in_stack_ffffffc8));
  for (iVar2 = 0; iVar2 < *(int *)(in_r0 + 0x20) + 1; iVar2 = iVar2 + 1) {
    advanceCharacter(in_r0,*(CharacterInstance **)(iVar2 * 4 + *(int *)(in_r0 + 0x24)),
                     CONCAT44(in_stack_ffffffcc,in_stack_ffffffc8));
  }
  advanceCharacter(in_r0,*(CharacterInstance **)(in_r0 + 0x18),
                   CONCAT44(in_stack_ffffffcc,in_stack_ffffffc8));
  advanceStoves(CONCAT44(in_stack_ffffffcc,in_stack_ffffffc8));
  local_24 = 0;
  do {
    if (*(int *)(in_r0 + 0x2c) + 1 <= local_24) {
      iVar2 = (int)**(uint **)(DAT_00122530 + 0x1224f4) >> 0x1f;
      if ((iVar2 < in_r3) || ((in_r3 == iVar2 && (**(uint **)(DAT_00122530 + 0x1224f4) < in_r2)))) {
        Cafe::populateWithCustomers(*(Cafe **)(in_r0 + 0x14),in_r0);
      }
      return;
    }
    this_02 = *(CafeObject **)(local_24 * 4 + *(int *)(in_r0 + 0x30));
    local_30 = DAT_00122520;
    local_2c = DAT_00122524;
    while( true ) {
      if ((in_r3 <= local_2c) && ((in_r3 != local_2c || (in_r2 <= local_30)))) {
        if (this_02 != (CafeObject *)0x0) {
          CapcomOrderableList<CafeObject*>::sort
                    ((CapcomOrderableList<CafeObject*> *)(*(int *)(in_r0 + 0x14) + 0x20),this_02);
        }
        goto LAB_001224dc;
      }
      (**(code **)(*(int *)this_02 + 0x1c))(this_02,1000);
      this = *(Cafe **)(in_r0 + 0x14);
      if ((*(short *)(this + 0x98) == *(short *)(this_02 + 0x2c)) ||
         (*(short *)(this + 0x9a) == *(short *)(this_02 + 0x2c))) break;
      if (*(int *)(this_02 + 0x7c) == 0) {
        iVar2 = CapcomMath::random(2);
        if (iVar2 == 0) {
          sVar1 = *(short *)(*(int *)(in_r0 + 0x14) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(in_r0 + 0x14) + 0x98);
        }
        this_00 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(this_00,(CharacterInstance *)this_02,*(Cafe **)(in_r0 + 0x14),(int)sVar1,
                           '\0',false);
        CharacterInstance::addTask((CharacterInstance *)this_02,(Task *)this_00);
      }
      bVar3 = CARRY4(local_30,DAT_00122520);
      local_30 = local_30 + DAT_00122520;
      local_2c = local_2c + DAT_00122524 + (uint)bVar3;
    }
    Cafe::removeCafeObject(this,this_02);
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(in_r0 + 0x28),local_24);
    Vector<CharacterInstance*>::removeElement
              ((Vector<CharacterInstance*> *)(*(int *)(in_r0 + 0x14) + 0xa4),
               (CharacterInstance *)this_02);
    if (*(CafeObject **)(in_r0 + 0x54) == this_02) {
      deselect(in_r0);
      (**(code **)(**(int **)(in_r0 + 0xb0) + 0x20))(*(int **)(in_r0 + 0xb0),0);
      CharacterCommandBar::close(*(CharacterCommandBar **)(in_r0 + 0xac));
    }
    this_01 = *(Character **)(this_02 + 0x8c);
    if (this_01[4] != (Character)0x1) {
      Character::~Character(this_01);
      operator_delete(this_01);
      *(undefined4 *)(this_02 + 0x8c) = 0;
    }
    (**(code **)(*(int *)this_02 + 4))(this_02);
    local_24 = local_24 + -1;
LAB_001224dc:
    local_24 = local_24 + 1;
  } while( true );
}


