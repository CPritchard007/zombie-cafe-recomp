/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e2880 ConfirmDialog::tick */

/* ConfirmDialog::tick(long) */

undefined8 __thiscall ConfirmDialog::tick(ConfirmDialog *this,long param_1)

{
  int iVar1;
  QueueMessage *pQVar2;
  code *pcVar3;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float fVar4;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  ConfirmDialog *local_20;
  
  local_20 = this;
  if (this[0x14] == (ConfirmDialog)0x0) goto LAB_000e29c8;
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_000e29cc) = 0;
  this_00 = *(ZombieCafe **)(this + 0x60);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  if (iVar1 != 0) {
    iVar1 = *(int *)(this_00 + DAT_000e29d0);
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x68),iVar1 >> 0x10,(int)(short)iVar1,extraout_s0,
                       extraout_s1);
    if (iVar1 == 0) {
      local_20 = (ConfirmDialog *)0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x6c),
                         *(int *)(*(int *)(this + 0x60) + DAT_000e29d0) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_000e29d0),extraout_s0_00,
                         extraout_s1_00);
      if (iVar1 == 0) {
        if (*(ZCImageButton **)(this + 0x70) != (ZCImageButton *)0x0) {
          local_20 = (ConfirmDialog *)0x3f800000;
          iVar1 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x70),
                             *(int *)(*(int *)(this + 0x60) + DAT_000e29d0) >> 0x10,
                             (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_000e29d0),
                             extraout_s0_01,extraout_s1_01);
          if (iVar1 != 0) {
            ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_02);
            this[0x14] = (ConfirmDialog)0x0;
            pQVar2 = (QueueMessage *)
                     CapcomLinkedList<ConfirmDialog::QueueMessage*>::remove
                               ((CapcomLinkedList<ConfirmDialog::QueueMessage*> *)(this + 0x80),0);
            if (pQVar2 != (QueueMessage *)0x0) {
              QueueMessage::~QueueMessage(pQVar2);
              operator_delete(pQVar2);
            }
          }
        }
        goto LAB_000e29a2;
      }
      fVar4 = (float)L_PrintLog((char *)(DAT_000e29dc + 0xe2926),(char *)(DAT_000e29e0 + 0xe2928));
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_000e29e4) = 0;
      this[0x94] = (ConfirmDialog)0x0;
      this[0x14] = (ConfirmDialog)0x0;
      ZombieCafe::playEffect(*(int *)(this + 0x60),fVar4);
      pQVar2 = (QueueMessage *)
               CapcomLinkedList<ConfirmDialog::QueueMessage*>::remove
                         ((CapcomLinkedList<ConfirmDialog::QueueMessage*> *)(this + 0x80),0);
      pcVar3 = *(code **)(pQVar2 + 0x1c);
    }
    else {
      fVar4 = (float)L_PrintLog((char *)(DAT_000e29d4 + 0xe28c8),(char *)(DAT_000e29d8 + 0xe28ca));
      ZombieCafe::playEffect(*(int *)(this + 0x60),fVar4);
      this[0x94] = (ConfirmDialog)0x1;
      if (*(int *)(this + 0x98) == 0) {
        this[0x14] = (ConfirmDialog)0x0;
        pQVar2 = (QueueMessage *)
                 CapcomLinkedList<ConfirmDialog::QueueMessage*>::remove
                           ((CapcomLinkedList<ConfirmDialog::QueueMessage*> *)(this + 0x80),0);
        pcVar3 = *(code **)(pQVar2 + 0x18);
      }
      else {
        pQVar2 = (QueueMessage *)
                 CapcomLinkedList<ConfirmDialog::QueueMessage*>::remove
                           ((CapcomLinkedList<ConfirmDialog::QueueMessage*> *)(this + 0x80),0);
        pcVar3 = *(code **)(pQVar2 + 0x18);
      }
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(undefined4 *)(pQVar2 + 0x20));
    }
    local_20 = (ConfirmDialog *)0x3f800000;
    QueueMessage::~QueueMessage(pQVar2);
    operator_delete(pQVar2);
    if (*(int *)(this + 0x90) != 0) {
      show(this);
    }
  }
LAB_000e29a2:
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_000e29e8) = 1;
LAB_000e29c8:
  return CONCAT44(param_1,local_20);
}


