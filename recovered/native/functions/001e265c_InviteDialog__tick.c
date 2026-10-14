/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e265c InviteDialog::tick */

/* InviteDialog::tick(long) */

void InviteDialog::tick(long param_1)

{
  int *piVar1;
  int iVar2;
  ZombieCafe *this;
  NoticeDialog *pNVar3;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0x14) != '\0') {
    piVar1 = *(int **)(param_1 + 200);
    if ((char)piVar1[5] == '\0') {
      piVar1 = (int *)(param_1 + 0xc4);
      ScreenElement::tick(param_1);
      this = (ZombieCafe *)*piVar1;
      iVar2 = ZombieCafe::unhandledPressOrLongEvent(this);
      if (iVar2 != 0) {
        iVar2 = *(int *)(this + DAT_001e27f0);
        iVar2 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 0xa8),iVar2 >> 0x10,(int)(short)iVar2,
                           extraout_s0,extraout_s1);
        if (iVar2 == 0) {
          iVar2 = ZCImageButton::contains
                            (*(ZCImageButton **)(param_1 + 0xb4),
                             *(int *)(*piVar1 + DAT_001e27f0) >> 0x10,
                             (int)(short)*(int *)(*piVar1 + DAT_001e27f0),extraout_s0_00,
                             extraout_s1_00);
          if (iVar2 != 0) {
            ZombieCafe::playEffect(*piVar1,extraout_s0_01);
            iVar2 = javaIsConnected();
            if (iVar2 == 0) {
              pNVar3 = *(NoticeDialog **)(param_1 + 200);
              String::String(aSStack_28,
                             (String *)
                             (*(int *)(*(int *)(*piVar1 + 0x4b0) + 8) +
                             **(int **)(DAT_001e2810 + 0x1e278e) * 8));
              String::String(aSStack_20,
                             (String *)
                             (*(int *)(*(int *)(*piVar1 + 0x4b0) + 8) +
                             **(int **)(DAT_001e2814 + 0x1e27a6) * 8));
              NoticeDialog::show(pNVar3,aSStack_28,aSStack_20,0,0);
              String::~String(aSStack_20);
              String::~String(aSStack_28);
            }
            else {
              if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x74) != 0)) {
                L_PrintLog((char *)(DAT_001e27f8 + 0x1e271a),(char *)(DAT_001e27fc + 0x1e271c));
                (**(code **)(*(int *)param_1 + 0x20))(param_1,0);
                ZombieCafe::postStory
                          ((ZombieCafe *)*piVar1,*(_func_void_void_ptr **)(param_1 + 0x70),
                           *(void **)(param_1 + 0x74));
              }
              piVar1 = (int *)(param_1 + 0xc4);
              CRAMHoover::beginTrackEvent(*(char **)(*piVar1 + 0x840));
              ZombieCafe::addMixPanelHeader((ZombieCafe *)*piVar1);
              CRAMHoover::addEventStringProperty
                        (*(char **)(*piVar1 + 0x840),(char *)(DAT_001e2804 + 0x1e2758));
              CRAMHoover::addEventStringProperty
                        (*(char **)(*piVar1 + 0x840),(char *)(DAT_001e2808 + 0x1e2766));
              CRAMHoover::endTrackEvent();
              *(undefined1 *)(*piVar1 + DAT_001e27f4) = 1;
            }
          }
        }
        else {
          (**(code **)(*(int *)param_1 + 0x20))(param_1,0);
          *(undefined1 *)(*piVar1 + DAT_001e27f4) = 1;
        }
      }
      *(undefined1 *)(*(int *)(param_1 + 0xc4) + DAT_001e27f4) = 1;
    }
    else {
      (**(code **)(*piVar1 + 8))();
    }
  }
  return;
}


