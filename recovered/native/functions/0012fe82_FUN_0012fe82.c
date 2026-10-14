/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012fe82 FUN_0012fe82 */

void FUN_0012fe82(void)

{
  LotteryDialog *this;
  String *this_00;
  int iVar1;
  CharacterInstance *this_01;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  NoticeDialog *pNVar5;
  int *piVar6;
  GameStateCafe *unaff_r5;
  ConfirmDialog *pCVar7;
  undefined4 *puVar8;
  CafeObject *unaff_r6;
  int unaff_r7;
  undefined1 *in_stack_00000000;
  int iStack00000020;
  
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
  GameStateCafe::startColorShift(unaff_r5,unaff_r6);
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
  if ((((*(char *)(*(int *)(unaff_r6 + 0x28) + 0x14) == '\0') &&
       (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
      (*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0')) &&
     (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')) {
    this = *(LotteryDialog **)(unaff_r5 + 0xa4);
    if (this == (LotteryDialog *)0x0) {
      L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
      pCVar7 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x000001b8);
      Vector<String>::elementAt((int)&stack0x000001c0);
      Vector<String>::elementAt((int)&stack0x000001c8);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
      ConfirmDialog::show(pCVar7,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
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
      pCVar7 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x000001a0);
      Vector<String>::elementAt((int)&stack0x000001a8);
      Vector<String>::elementAt((int)&stack0x000001b0);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
      ConfirmDialog::show(pCVar7,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
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
    iVar2 = DAT_0012fd60 + 0x12fa4c;
    iVar1 = *(int *)(DAT_0012fd60 + 0x12fac0);
    if (iVar1 != 0) {
      if (iVar1 != 3) {
        if (iVar1 != 2) {
          FUN_0012ff22();
          return;
        }
        puVar8 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
        iStack00000020 = 0;
        piVar4 = *(int **)(unaff_r7 + DAT_0012fd6c);
        piVar6 = puVar8 + 4;
        for (; iStack00000020 < *piVar4; iStack00000020 = iStack00000020 + 1) {
          in_stack_00000000 = (undefined1 *)puVar8[2];
          sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar8,puVar8[1]);
          if ((puVar8[1] == 2) && (0 < *piVar6)) {
            in_stack_00000000 = (undefined1 *)*piVar4;
            snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),iStack00000020 + 1);
            strcpy(&stack0x000001fc,(char *)piVar6[1]);
            in_stack_00000000 = &stack0x0000027c;
            snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                     (char *)(DAT_0012fd78 + 0x12faf0),*piVar6);
            ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*piVar6);
            puVar8[1] = 0;
            puVar8[2] = 0;
            *piVar6 = 0;
            ZombieCafe::save();
            pNVar5 = *(NoticeDialog **)(unaff_r5 + 0xd0);
            String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c)
                          );
            Vector<String>::elementAt((int)&stack0x000001d0);
            in_stack_00000000 = (undefined1 *)0x0;
            NoticeDialog::show(pNVar5,&stack0x000001d8,&stack0x000001d0);
            String::~String((String *)&stack0x000001d0);
            String::~String((String *)&stack0x000001d8);
          }
          puVar8 = puVar8 + 6;
          piVar6 = piVar6 + 6;
        }
        if (0 < *piVar4) {
          GameStateCafe::gotEventValue
                    (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
        }
        *piVar4 = 0;
        iVar2 = DAT_0012fd84 + 0x12fb80;
      }
      *(undefined4 *)(iVar2 + 0x74) = 4;
      FUN_0012ff22();
      return;
    }
    if (*(int *)(unaff_r5 + 0x1fc) == 0) {
      GameStateCafe::getEventValue
                (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      uVar3 = 1;
    }
    else {
      if (*(int *)(unaff_r5 + 0x1fc) != 1) {
        FUN_0012ff22();
        return;
      }
      uVar3 = 4;
    }
    *(undefined4 *)(unaff_r5 + 0x1fc) = uVar3;
    FUN_0012ff22();
    return;
  }
  FUN_0012ff22();
  return;
}


