/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012fe3e FUN_0012fe3e */

void FUN_0012fe3e(void)

{
  LotteryDialog *this;
  String *this_00;
  int iVar1;
  CafeObject *pCVar2;
  int iVar3;
  CharacterInstance *this_01;
  undefined4 uVar4;
  int *piVar5;
  NoticeDialog *pNVar6;
  int *piVar7;
  GameStateCafe *unaff_r5;
  ConfirmDialog *pCVar8;
  undefined4 *puVar9;
  int unaff_r6;
  int unaff_r7;
  undefined1 *in_stack_00000000;
  int iStack00000020;
  
  iVar1 = GameStateCafe::screenToWorldCoords
                    (unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r6));
  pCVar2 = (CafeObject *)Cafe::pickCafeObject(*(long *)(unaff_r5 + 0x14));
  if (pCVar2 != (CafeObject *)0x0) {
    FUN_0012e8fe();
  }
  FUN_0012f41e();
  iVar3 = (**(code **)(*(int *)pCVar2 + 0x20))(pCVar2);
  if (iVar3 != 2) {
    FUN_0012eca0();
  }
  FUN_0012ec62();
  if (*(int *)(*(int *)(unaff_r5 + 0xc) + iVar1) < 8) {
    FUN_0012eaea();
  }
  FUN_0012ead2();
  RecipeBook::show(*(RecipeBook **)(unaff_r5 + 0x94),
                   *(_func_void_void_ptr_int_int_bool_short **)(unaff_r7 + DAT_0012ff3c),unaff_r5);
  iVar1 = DAT_0012ff44;
  unaff_r5[DAT_0012ff40] = (GameStateCafe)0x4;
  TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar1),'\v',false);
  PullMenuElement::setButtonAvailability(*(int *)(unaff_r5 + 0xcc),true);
  PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(unaff_r5 + 0xcc),1,false);
  FUN_0012ed1a();
  TutorialSystem::triggerEvent
            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ff44),'\x02',false);
  GameStateCafe::startColorShift(unaff_r5,pCVar2);
  iVar1 = Stove::isBurned(*(Stove **)(unaff_r5 + 0x50));
  if (iVar1 != 0) {
    FUN_0012ee2a();
  }
  this_01 = (CharacterInstance *)FUN_0012ee46();
  CharacterInstance::stopTasks(this_01);
  GameStateCafe::onCookCommandBarBait(unaff_r5,*(Stove **)(unaff_r5 + 0x50));
  iVar1 = (**(code **)(**(int **)(unaff_r5 + 0x54) + 0x20))();
  if (iVar1 == 2) {
    FUN_0012ee94();
  }
  FUN_0012f316();
  FUN_0012f316();
  if ((((*(char *)(*(int *)(pCVar2 + 0x28) + 0x14) == '\0') &&
       (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
      (*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0')) &&
     (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')) {
    this = *(LotteryDialog **)(unaff_r5 + 0xa4);
    if (this == (LotteryDialog *)0x0) {
      L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
      pCVar8 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x000001b8);
      Vector<String>::elementAt((int)&stack0x000001c0);
      Vector<String>::elementAt((int)&stack0x000001c8);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
      ConfirmDialog::show(pCVar8,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
      String::~String((String *)&stack0x000001c8);
      String::~String((String *)&stack0x000001c0);
      this_00 = (String *)&stack0x000001b8;
    }
    else {
      if (this[0x14] != (LotteryDialog)0x0) {
        LotteryDialog::backClose(this);
        L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
        goto LAB_0012fa18;
      }
      L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
      pCVar8 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x000001a0);
      Vector<String>::elementAt((int)&stack0x000001a8);
      Vector<String>::elementAt((int)&stack0x000001b0);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
      ConfirmDialog::show(pCVar8,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
      String::~String((String *)&stack0x000001b0);
      String::~String((String *)&stack0x000001a8);
      this_00 = (String *)&stack0x000001a0;
    }
    String::~String(this_00);
  }
LAB_0012fa18:
  iVar1 = (byte)unaff_r5[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(unaff_r5 + 0x14) + 0xca) =
       ((char)iVar1 - ((char)unaff_r5[DAT_0012fd54] - 2U)) - (iVar1 == 0);
  if (**(char **)(unaff_r7 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012fd5c),'*');
  if (iVar1 != 0) {
    iVar3 = DAT_0012fd60 + 0x12fa4c;
    iVar1 = *(int *)(DAT_0012fd60 + 0x12fac0);
    if (iVar1 != 0) {
      if (iVar1 != 3) {
        if (iVar1 != 2) {
          FUN_0012ff22();
          return;
        }
        puVar9 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
        iStack00000020 = 0;
        piVar5 = *(int **)(unaff_r7 + DAT_0012fd6c);
        piVar7 = puVar9 + 4;
        for (; iStack00000020 < *piVar5; iStack00000020 = iStack00000020 + 1) {
          in_stack_00000000 = (undefined1 *)puVar9[2];
          sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar9,puVar9[1]);
          if ((puVar9[1] == 2) && (0 < *piVar7)) {
            in_stack_00000000 = (undefined1 *)*piVar5;
            snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),iStack00000020 + 1);
            strcpy(&stack0x000001fc,(char *)piVar7[1]);
            in_stack_00000000 = &stack0x0000027c;
            snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                     (char *)(DAT_0012fd78 + 0x12faf0),*piVar7);
            ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*piVar7);
            puVar9[1] = 0;
            puVar9[2] = 0;
            *piVar7 = 0;
            ZombieCafe::save();
            pNVar6 = *(NoticeDialog **)(unaff_r5 + 0xd0);
            String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c)
                          );
            Vector<String>::elementAt((int)&stack0x000001d0);
            in_stack_00000000 = (undefined1 *)0x0;
            NoticeDialog::show(pNVar6,&stack0x000001d8,&stack0x000001d0);
            String::~String((String *)&stack0x000001d0);
            String::~String((String *)&stack0x000001d8);
          }
          puVar9 = puVar9 + 6;
          piVar7 = piVar7 + 6;
        }
        if (0 < *piVar5) {
          GameStateCafe::gotEventValue
                    (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
        }
        *piVar5 = 0;
        iVar3 = DAT_0012fd84 + 0x12fb80;
      }
      *(undefined4 *)(iVar3 + 0x74) = 4;
      FUN_0012ff22();
      return;
    }
    if (*(int *)(unaff_r5 + 0x1fc) == 0) {
      GameStateCafe::getEventValue
                (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      uVar4 = 1;
    }
    else {
      if (*(int *)(unaff_r5 + 0x1fc) != 1) {
        FUN_0012ff22();
        return;
      }
      uVar4 = 4;
    }
    *(undefined4 *)(unaff_r5 + 0x1fc) = uVar4;
    FUN_0012ff22();
    return;
  }
  FUN_0012ff22();
  return;
}


