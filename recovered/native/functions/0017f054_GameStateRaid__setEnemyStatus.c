/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f054 GameStateRaid::setEnemyStatus */

/* GameStateRaid::setEnemyStatus(CharacterData*, bool) */

undefined8 __thiscall
GameStateRaid::setEnemyStatus(GameStateRaid *this,CharacterData *param_1,bool param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  CharacterData *local_1c;
  
  iVar6 = DAT_0017f354 + 0x17f06a;
  iVar2 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0017f350),'&');
  iVar4 = DAT_0017f364;
  local_1c = param_1;
  if (iVar2 == 0) {
    *(undefined2 *)(param_1 + DAT_0017f358) = 1;
    *(undefined2 *)(param_1 + DAT_0017f35c) = 1;
    if (param_2) {
      uVar3 = __floatsisf(*(int *)((*(int *)(this + 0x54) + -1) * 4 +
                                  **(int **)(iVar6 + DAT_0017f360)) / 2);
    }
    else {
      uVar3 = __mulsf3(*(undefined4 *)(param_1 + DAT_0017f364),0x3f000000);
    }
    *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
    goto LAB_0017f34c;
  }
  if (this[0x15] == (GameStateRaid)0x0) {
    if (this[0x16] == (GameStateRaid)0x0) {
      iVar2 = *(int *)(this + 0x24);
      if ((iVar2 == 0x18) || (iVar2 == 6)) {
        if (param_2) {
          uVar3 = __mulsf3(*(undefined4 *)(param_1 + DAT_0017f364),
                           *(undefined4 *)
                            ((*(int *)(*(int *)(this + 0xc) + 0x680) + -1) * 4 +
                            **(int **)(iVar6 + DAT_0017f388)));
          *(undefined4 *)(param_1 + iVar4) = uVar3;
        }
      }
      else if (iVar2 == 0x39) {
        uVar3 = __floatsisf(*(undefined4 *)(*(ZombieCafe **)(this + 0xc) + 0x680));
        uVar3 = __mulsf3(uVar3,DAT_0017f38c);
        uVar3 = __addsf3(uVar3,*(undefined4 *)(param_1 + iVar4));
        iVar2 = __aeabi_fcmpgt(uVar3,DAT_0017f390);
        if (iVar2 != 0) {
          uVar3 = DAT_0017f390;
        }
        *(undefined4 *)(param_1 + iVar4) = uVar3;
      }
      else {
        iVar4 = ZombieCafe::isEventCafeTheme(*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x50));
        if (iVar4 != 0) {
          if (param_2) {
            puVar7 = *(undefined4 **)(iVar6 + DAT_0017f394);
            uVar3 = __floatunsisf(*(undefined1 *)(*(int *)(this + 0xc) + 0x48));
            uVar3 = __mulsf3(uVar3,*puVar7);
            uVar3 = __addsf3(*(undefined4 *)(param_1 + DAT_0017f364),uVar3);
            iVar4 = DAT_0017f35c;
            *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
            local_1c = (CharacterData *)__floatsisf((int)*(short *)(param_1 + iVar4));
            puVar7 = *(undefined4 **)(iVar6 + DAT_0017f398);
            uVar3 = __floatunsisf(*(undefined1 *)(*(int *)(this + 0xc) + 0x48));
            uVar3 = __mulsf3(uVar3,*puVar7);
            __addsf3(local_1c,uVar3);
            uVar1 = __fixsfsi();
            iVar4 = DAT_0017f358;
            *(undefined2 *)(param_1 + DAT_0017f35c) = uVar1;
            uVar3 = __floatsisf((int)*(short *)(param_1 + iVar4));
            iVar4 = DAT_0017f39c;
          }
          else {
            puVar7 = *(undefined4 **)(iVar6 + DAT_0017f3a0);
            uVar3 = __floatunsisf(*(undefined1 *)(*(int *)(this + 0xc) + 0x48));
            uVar3 = __mulsf3(uVar3,*puVar7);
            uVar3 = __addsf3(*(undefined4 *)(param_1 + DAT_0017f364),uVar3);
            iVar4 = DAT_0017f35c;
            *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
            local_1c = (CharacterData *)__floatsisf((int)*(short *)(param_1 + iVar4));
            puVar7 = *(undefined4 **)(iVar6 + DAT_0017f3a4);
            uVar3 = __floatunsisf(*(undefined1 *)(*(int *)(this + 0xc) + 0x48));
            uVar3 = __mulsf3(uVar3,*puVar7);
            __addsf3(local_1c,uVar3);
            uVar1 = __fixsfsi();
            iVar4 = DAT_0017f358;
            *(undefined2 *)(param_1 + DAT_0017f35c) = uVar1;
            uVar3 = __floatsisf((int)*(short *)(param_1 + iVar4));
            iVar4 = DAT_0017f3a8;
          }
          puVar7 = *(undefined4 **)(iVar6 + iVar4);
          uVar5 = __floatunsisf(*(undefined1 *)(*(int *)(this + 0xc) + 0x48));
          uVar5 = __mulsf3(uVar5,*puVar7);
          __addsf3(uVar3,uVar5);
          uVar1 = __fixsfsi();
          *(undefined2 *)(param_1 + DAT_0017f358) = uVar1;
        }
      }
    }
    goto LAB_0017f34c;
  }
  iVar4 = ZombieCafe::getWeekRaidTheme(*(ZombieCafe **)(this + 0xc));
  iVar2 = *(int *)(this + 0x48);
  if (iVar4 - 0x7fU < 2) {
    if (param_2) {
      iVar6 = DAT_0017f368 + 0x17f0d0;
      uVar3 = __floatsisf(*(undefined4 *)(iVar6 + (iVar2 + -1) * 8 + 0x14));
      iVar4 = DAT_0017f35c;
      *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
      *(undefined2 *)(param_1 + iVar4) =
           *(undefined2 *)(iVar6 + (*(int *)(this + 0x48) + -1) * 8 + 0x1a);
      uVar1 = *(undefined2 *)(iVar6 + (*(int *)(this + 0x48) + -1) * 8 + 0x18);
      iVar4 = DAT_0017f358;
    }
    else {
      iVar6 = DAT_0017f36c + 0x17f0fe;
      uVar3 = __floatsisf(*(undefined4 *)(iVar6 + (iVar2 + -1) * 8 + 0x34));
      iVar4 = DAT_0017f35c;
      *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
      *(undefined2 *)(param_1 + iVar4) =
           *(undefined2 *)(iVar6 + (*(int *)(this + 0x48) + -1) * 8 + 0x3a);
      uVar1 = *(undefined2 *)(iVar6 + (*(int *)(this + 0x48) + -1) * 8 + 0x38);
      iVar4 = DAT_0017f358;
    }
  }
  else {
    if (iVar4 == 0x7e) {
      if (param_2) {
        iVar4 = DAT_0017f370 + 0x17f134;
        goto LAB_0017f19e;
      }
      iVar4 = DAT_0017f374 + 0x17f13a;
LAB_0017f1ce:
      uVar3 = __floatsisf(*(undefined4 *)(iVar4 + (iVar2 + -1) * 8 + 0x74));
      iVar2 = DAT_0017f35c;
      *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
      *(undefined2 *)(param_1 + iVar2) =
           *(undefined2 *)(iVar4 + (*(int *)(this + 0x48) + -1) * 8 + 0x7a);
      iVar4 = iVar4 + (*(int *)(this + 0x48) + -1) * 8 + 0x74;
    }
    else {
      if (iVar4 == 4) {
        if (param_2) {
          iVar6 = DAT_0017f378 + 0x17f14c;
          uVar3 = __floatsisf(*(undefined4 *)(iVar6 + (iVar2 + -1) * 8 + 0x14));
          iVar4 = DAT_0017f35c;
          *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
          *(undefined2 *)(param_1 + iVar4) =
               *(undefined2 *)(iVar6 + (*(int *)(this + 0x48) + -1) * 8 + 0x1a);
          *(undefined2 *)(param_1 + DAT_0017f358) =
               *(undefined2 *)(iVar6 + (*(int *)(this + 0x48) + -1) * 8 + 0x18);
          goto LAB_0017f34c;
        }
        iVar6 = DAT_0017f37c + 0x17f17e;
        uVar3 = __floatsisf(*(undefined4 *)(iVar6 + (iVar2 + -1) * 8 + 0x34));
        iVar4 = DAT_0017f35c;
        *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
        uVar1 = *(undefined2 *)(iVar6 + (*(int *)(this + 0x48) + -1) * 8 + 0x3a);
        goto LAB_0017f122;
      }
      if (!param_2) {
        iVar4 = DAT_0017f384 + 0x17f1d0;
        goto LAB_0017f1ce;
      }
      iVar4 = DAT_0017f380 + 0x17f1a0;
LAB_0017f19e:
      uVar3 = __floatsisf(*(undefined4 *)(iVar4 + (iVar2 + -1) * 8 + 0x54));
      iVar2 = DAT_0017f35c;
      *(undefined4 *)(param_1 + DAT_0017f364) = uVar3;
      *(undefined2 *)(param_1 + iVar2) =
           *(undefined2 *)(iVar4 + (*(int *)(this + 0x48) + -1) * 8 + 0x5a);
      iVar4 = iVar4 + (*(int *)(this + 0x48) + -1) * 8 + 0x54;
    }
    uVar1 = *(undefined2 *)(iVar4 + 4);
    iVar4 = DAT_0017f358;
  }
LAB_0017f122:
  *(undefined2 *)(param_1 + iVar4) = uVar1;
LAB_0017f34c:
  return CONCAT44(local_1c,this);
}


