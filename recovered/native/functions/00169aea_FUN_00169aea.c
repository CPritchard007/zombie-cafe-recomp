/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169aea FUN_00169aea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00169aea(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  GameStateCafe *this;
  GameStateLoading *this_00;
  ConfirmDialog *pCVar2;
  code *pcVar3;
  int *unaff_r5;
  CapcomGame *this_01;
  int unaff_r6;
  NoticeDialog *pNVar4;
  int unaff_r7;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar5;
  float extraout_s0_02;
  undefined4 extraout_s1;
  undefined8 uVar6;
  
  L_PrintLog((char *)(DAT_00169b1c + 0x169af2),(char *)(DAT_00169b20 + 0x169af4));
  uVar6 = FUN_0016915a();
  if ((*(char *)((int)unaff_r5 + param_3) != '\0') && (1000 < *(int *)(param_4 + _DAT_001699f4))) {
    iVar1 = ScreenElement::contains((ScreenElement *)unaff_r5[0x79],*(long *)(param_4 + unaff_r7));
    uVar6 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar1 != 0) {
      puts((char *)(_DAT_001699f8 + 0x1696ba));
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_00);
      snprintf(&stack0x00000314,0x80,(char *)(_DAT_00169a00 + 0x1696d2),
               **(undefined4 **)(unaff_r6 + _DAT_001699fc));
      Vector<String>::elementAt((int)&stack0x000000dc);
      operator+(&stack0x000000e4,&stack0x00000314,&stack0x000000dc);
      Vector<String>::elementAt((int)&stack0x000000ec);
      String::operator+((String *)&stack0x0000026c,&stack0x000000e4,&stack0x000000ec);
      String::~String((String *)&stack0x000000ec);
      String::~String((String *)&stack0x000000e4);
      String::~String((String *)&stack0x000000dc);
      pCVar2 = *(ConfirmDialog **)((int)unaff_r5 + _DAT_00169a0c);
      String::String((String *)&stack0x00000104,(String *)&stack0x0000026c);
      Vector<String>::elementAt((int)&stack0x000000f4);
      Vector<String>::elementAt((int)&stack0x000000fc);
      ConfirmDialog::show(pCVar2,&stack0x00000104,&stack0x000000f4,&stack0x000000fc);
      String::~String((String *)&stack0x000000fc);
      String::~String((String *)&stack0x000000f4);
      String::~String((String *)&stack0x00000104);
      uVar6 = String::~String((String *)&stack0x0000026c);
    }
  }
  iVar1 = ZCImageButton::contains
                    ((ZCImageButton *)unaff_r5[0xe],*(int *)(unaff_r5[3] + unaff_r7) >> 0x10,
                     (int)(short)*(int *)(unaff_r5[3] + unaff_r7),(float)uVar6,
                     (float)((ulonglong)uVar6 >> 0x20));
  fVar5 = extraout_s0_01;
  if (iVar1 != 0) {
    if (*(char *)(unaff_r5[0x10e] + 0x68) != '\0') {
      fVar5 = (float)TutorialSystem::triggerEvent
                               (*(TutorialSystem **)(unaff_r5[3] + DAT_00169a1c),'@',true);
      ZombieCafe::playEffect(unaff_r5[3],fVar5);
      InviteDialog::setFacebookCallback
                ((InviteDialog *)unaff_r5[0x10e],*(_func_void_void_ptr **)(unaff_r6 + DAT_00169a20),
                 unaff_r5);
      InviteDialog::setEmailCallback
                ((_func_void_void_ptr *)unaff_r5[0x10e],*(void **)(unaff_r6 + DAT_00169a24));
      InviteDialog::setSMSCallback
                ((_func_void_void_ptr *)unaff_r5[0x10e],*(void **)(unaff_r6 + DAT_00169a28));
      (**(code **)(*(int *)unaff_r5[0x10e] + 0x20))((int *)unaff_r5[0x10e],1);
      *(int *)(unaff_r5[0x10e] + 0x6c) = DAT_00169a2c + 0x1697ee;
      FUN_00169830();
      return;
    }
    pNVar4 = *(NoticeDialog **)((int)unaff_r5 + DAT_00169a34);
    Vector<String>::elementAt((int)&stack0x0000010c);
    Vector<String>::elementAt((int)&stack0x00000114);
    NoticeDialog::show(pNVar4,&stack0x0000010c,&stack0x00000114);
    String::~String((String *)&stack0x00000114);
    fVar5 = (float)String::~String((String *)&stack0x0000010c);
  }
  if (*(char *)((int)unaff_r5 + 0x4d) != '\0') {
    if (*(int *)(unaff_r5[0x11] * 4 + *(int *)(unaff_r5[3] + 0x698)) < 1) {
      pcVar3 = *(code **)(*unaff_r5 + 0x78);
    }
    else {
      pcVar3 = *(code **)(*unaff_r5 + 0x74);
    }
    fVar5 = (float)(*pcVar3)(unaff_r5);
  }
  if (((char)unaff_r5[0x13] != '\0') &&
     (*(int *)(unaff_r5[0x11] * 4 + *(int *)(unaff_r5[3] + 0x698)) < 1)) {
    *(undefined1 *)((int)unaff_r5 + 0x4d) = 1;
  }
  if ((char)unaff_r5[0x114] == '\0') {
    *(undefined1 *)(unaff_r5 + 0x114) = 1;
    ZombieCafe::loadAndPlayMusic((ZombieCafe *)unaff_r5[3],0,0xf,fVar5,false);
  }
  if (*(char *)(unaff_r5[3] + DAT_00169a3c) != '\0') {
    *(undefined1 *)(unaff_r5[3] + DAT_00169a3c) = 0;
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(unaff_r5[3] + DAT_00169a1c),',');
    if (iVar1 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_02);
      this_01 = (CapcomGame *)unaff_r5[3];
      this = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(this);
      this_00 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(this_00,(GameState *)this);
      CapcomGame::setNextState(this_01,(GameState *)this_00);
      FUN_00169b04();
      return;
    }
    FUN_00169b04();
    return;
  }
  FUN_00169b04();
  return;
}


