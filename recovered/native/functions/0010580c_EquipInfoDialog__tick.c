/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010580c EquipInfoDialog::tick */

/* EquipInfoDialog::tick(long) */

void EquipInfoDialog::tick(long param_1)

{
  int iVar1;
  QueueMessage *pQVar2;
  int iVar3;
  ZombieCafe *this;
  code *pcVar4;
  int *piVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    this = *(ZombieCafe **)(param_1 + 0x68);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this);
    iVar3 = DAT_00105964;
    if (iVar1 != 0) {
      iVar1 = *(int *)(this + DAT_00105964);
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x74),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0,extraout_s1);
      if (iVar1 == 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x68) + iVar3);
        iVar3 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 0x70),iVar3 >> 0x10,(int)(short)iVar3,
                           extraout_s0_00,extraout_s1_00);
        if (iVar3 != 0) {
          ZombieCafe::playEffect(*(int *)(param_1 + 0x68),extraout_s0_01);
          pQVar2 = (QueueMessage *)
                   CapcomLinkedList<EquipInfoDialog::QueueMessage*>::remove
                             ((CapcomLinkedList<EquipInfoDialog::QueueMessage*> *)(param_1 + 0x88),0
                             );
          if (*(code **)(pQVar2 + 0x18) != (code *)0x0) {
            (**(code **)(pQVar2 + 0x18))(*(undefined4 *)(pQVar2 + 0x1c));
          }
          piVar5 = *(int **)(param_1 + 0x7c);
          pcVar4 = *(code **)(*piVar5 + 0x44);
          String::String(aSStack_28,(char *)(DAT_00105970 + 0x1058e8));
          (*pcVar4)(piVar5,aSStack_28);
          String::~String(aSStack_28);
          piVar5 = *(int **)(param_1 + 0x78);
          pcVar4 = *(code **)(*piVar5 + 0x44);
          String::String(aSStack_20,(char *)(DAT_00105974 + 0x105904));
          (*pcVar4)(piVar5,aSStack_20);
          String::~String(aSStack_20);
          QueueMessage::~QueueMessage(pQVar2);
          operator_delete(pQVar2);
          *(undefined1 *)(param_1 + 0x14) = 0;
          if (0 < *(int *)(param_1 + 0x98)) {
            show((EquipInfoDialog *)param_1);
          }
        }
      }
      else {
        ZombieCafe::playEffect(*(int *)(param_1 + 0x68),extraout_s0_00);
        *(undefined1 *)(param_1 + 0x14) = 0;
        pQVar2 = (QueueMessage *)
                 CapcomLinkedList<EquipInfoDialog::QueueMessage*>::remove
                           ((CapcomLinkedList<EquipInfoDialog::QueueMessage*> *)(param_1 + 0x88),0);
        piVar5 = *(int **)(param_1 + 0x7c);
        pcVar4 = *(code **)(*piVar5 + 0x44);
        String::String(aSStack_38,(char *)(DAT_00105968 + 0x105866));
        (*pcVar4)(piVar5,aSStack_38);
        String::~String(aSStack_38);
        piVar5 = *(int **)(param_1 + 0x78);
        pcVar4 = *(code **)(*piVar5 + 0x44);
        String::String(aSStack_30,(char *)(DAT_0010596c + 0x105884));
        (*pcVar4)(piVar5,aSStack_30);
        String::~String(aSStack_30);
        if (pQVar2 != (QueueMessage *)0x0) {
          QueueMessage::~QueueMessage(pQVar2);
          operator_delete(pQVar2);
        }
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x68) + DAT_00105978) = 1;
  }
  return;
}


