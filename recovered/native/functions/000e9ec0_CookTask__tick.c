/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9ec0 CookTask::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000e9ee4) */
/* WARNING: Removing unreachable block (ram,0x000e9ee4) */
/* CookTask::tick(long) */

undefined8 __thiscall CookTask::tick(CookTask *this,long param_1)

{
  int *piVar1;
  CharacterInstance *this_00;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  uchar uVar5;
  char *pcVar6;
  Stove *pSVar7;
  int iVar8;
  float extraout_s0;
  CharacterInstance *local_1c;
  
  local_1c = (CharacterInstance *)param_1;
  if (this[4] != (CookTask)0x0) goto switchD_000e9ee4_default;
  Character::work(*(Character **)(*(int *)(this + 0x20) + 0x8c),param_1);
  switch(this[0x30]) {
  case (CookTask)0x0:
    (**(code **)(**(int **)(this + 0x2c) + 0x14))(*(int **)(this + 0x2c),param_1);
    piVar1 = *(int **)(this + 0x2c);
    if ((char)piVar1[1] == '\0') goto switchD_000e9ee4_default;
    if (*(char *)((int)piVar1 + 5) == '\0') {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(this + 0x2c) = 0;
      pcVar6 = (char *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44);
      if (*pcVar6 == '\x02') {
        *pcVar6 = '\0';
      }
      this[5] = (CookTask)0x0;
      if (this[4] == (CookTask)0x0) {
        FUN_000e9d8e(this);
      }
      goto switchD_000e9ee4_default;
    }
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(this + 0x2c) = 0;
    break;
  case (CookTask)0x1:
    CharacterInstance::turnToward
              (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x28) + 4));
    this_00 = *(CharacterInstance **)(this + 0x20);
    uVar5 = '\x01';
LAB_000e9f48:
    CharacterInstance::setCurrentAnimation(this_00,uVar5,0xff,false);
    break;
  case (CookTask)0x2:
    pSVar7 = *(Stove **)(this + 0x28);
    if (((pSVar7[0x2e] != (Stove)0x0) && (*(int *)(pSVar7 + 0x7c) == 0)) &&
       (iVar2 = Stove::isBurned(pSVar7), iVar2 == 0)) {
      iVar2 = *(int *)(this + 0x28);
      if (((*(FoodStack **)(iVar2 + 100) == (FoodStack *)0x0) || (*(char *)(iVar2 + 0x2e) == '\0'))
         || (iVar8 = *(int *)(iVar2 + 0x70),
            iVar2 = FoodStack::getCookTimeSeconds(*(FoodStack **)(iVar2 + 100)),
            iVar8 < iVar2 * 1000)) {
        iVar8 = CapcomApp::getInstance();
        iVar2 = DAT_000ea080;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(iVar8 + 4) + DAT_000ea080),'N',false);
        Stove::use(*(Stove **)(this + 0x28),*(CharacterInstance **)(this + 0x20),0);
        iVar8 = CapcomApp::getInstance();
        ZombieCafe::playEffect(*(int *)(iVar8 + 4),extraout_s0);
        iVar8 = CapcomApp::getInstance();
        TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(iVar8 + 4) + iVar2),'0',false);
        this_00 = *(CharacterInstance **)(this + 0x20);
        uVar5 = '\b';
        goto LAB_000e9f48;
      }
    }
    goto LAB_000e9fe0;
  case (CookTask)0x3:
    if (*(char *)(*(int *)(this + 0x28) + 0x2e) != '\0') {
      local_1c = *(CharacterInstance **)(this + 0x20);
      iVar2 = CapcomApp::getInstance();
      uVar3 = __floatsisf(param_1);
      pSVar7 = *(Stove **)(this + 0x28);
      uVar3 = __mulsf3(uVar3,*(undefined4 *)(**(int **)(*(int *)(iVar2 + 4) + 0x590) + 0xb30));
      __mulsf3(uVar3,*(undefined4 *)(*(int *)(pSVar7 + 0x38) + 0x60));
      lVar4 = __fixsfsi();
      Stove::use(pSVar7,local_1c,lVar4);
      iVar2 = *(int *)(this + 0x28);
      if (((*(FoodStack **)(iVar2 + 100) != (FoodStack *)0x0) && (*(char *)(iVar2 + 0x2e) != '\0'))
         && (iVar8 = *(int *)(iVar2 + 0x70),
            iVar2 = FoodStack::getCookTimeSeconds(*(FoodStack **)(iVar2 + 100)),
            iVar2 * 1000 <= iVar8)) {
        *(undefined1 *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44) = 0;
        this[5] = (CookTask)0x1;
        if (this[4] == (CookTask)0x0) {
          FUN_000e9d8e(this);
        }
        iVar2 = CapcomApp::getInstance();
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(iVar2 + 4) + DAT_000ea080),'\n',true);
      }
      goto switchD_000e9ee4_default;
    }
LAB_000e9fe0:
    (**(code **)(*(int *)this + 0xc))(this);
  default:
    goto switchD_000e9ee4_default;
  }
  this[0x30] = (CookTask)((char)this[0x30] + '\x01');
switchD_000e9ee4_default:
  return CONCAT44(local_1c,this);
}


