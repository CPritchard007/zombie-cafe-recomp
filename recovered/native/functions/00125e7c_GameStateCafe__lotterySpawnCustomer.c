/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00125e7c GameStateCafe::lotterySpawnCustomer */

/* GameStateCafe::lotterySpawnCustomer(int, bool) */

undefined8 GameStateCafe::lotterySpawnCustomer(int param_1,bool param_2)

{
  Character *pCVar1;
  CharacterInstance *this;
  MoveTask *this_00;
  CFPathFinder *pCVar2;
  undefined4 uVar3;
  
  resetCustomerTimer((GameStateCafe *)param_1);
  pCVar1 = (Character *)Cafe::createCustomer(*(int *)(param_1 + 0x14));
  pCVar2 = *(CFPathFinder **)(*(int *)(param_1 + 0x14) + 0x5c);
  this = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(this,pCVar1,pCVar2);
  CafeObject::setTileIndex
            ((CafeObject *)this,*(short *)(*(Cafe **)(param_1 + 0x14) + 0x98),
             *(Cafe **)(param_1 + 0x14));
  this_00 = (MoveTask *)operator_new(0x48);
  uVar3 = 0;
  MoveTask::MoveTask(this_00,this,*(Cafe **)(param_1 + 0x14),
                     (int)*(short *)(*(Cafe **)(param_1 + 0x14) + 0x9a),'\0',false);
  CharacterInstance::addTask(this,(Task *)this_00);
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(param_1 + 0x28),this);
  Cafe::addCafeObject(*(Cafe **)(param_1 + 0x14),(CafeObject *)this);
  return CONCAT44(uVar3,this);
}


